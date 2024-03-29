#include "HASensor.h"
#ifndef EX_ARDUINOHA_SENSOR

#include "../HAMqtt.h"
#include "../utils/HASerializer.h"

HASensor::HASensor(const char* uniqueId) :
    HABaseDeviceType(AHATOFSTR(HAComponentSensor), uniqueId),
    _deviceClass(nullptr),
    _forceUpdate(false),
    _icon(nullptr),
    _unitOfMeasurement(nullptr),
	_expire_after(),
	_stateClass(nullptr)
{

}

bool HASensor::setValue(const char* value)
{
    return publishOnDataTopic(AHATOFSTR(HAStateTopic), value, true);
}

void HASensor::buildSerializer()
{
    if (_serializer || !uniqueId()) {
        return;
    }

    _serializer = new HASerializer(this, 12); // 12 - max properties nb
    _serializer->set(AHATOFSTR(HANameProperty), _name);
    _serializer->set(AHATOFSTR(HAUniqueIdProperty), _uniqueId);
    _serializer->set(AHATOFSTR(HADeviceClassProperty), _deviceClass);
    _serializer->set(AHATOFSTR(HAIconProperty), _icon);
	if (_category != EntityCategory::CategoryAuto) {
		_serializer->set(AHATOFSTR(HAEntityCategoryProperty), getCategoryProperty(), HASerializer::ProgmemPropertyValue);
	}
    _serializer->set(AHATOFSTR(HAUnitOfMeasurementProperty), _unitOfMeasurement);
    // optional property
	if (_expire_after.isSet()) {
		_serializer->set(AHATOFSTR(HAExpireAfterProperty), &_expire_after, HASerializer::NumberPropertyType);
	}
    // optional property
    if (_forceUpdate) {
        _serializer->set(AHATOFSTR(HAForceUpdateProperty), &_forceUpdate, HASerializer::BoolPropertyType);
    }
    _serializer->set(AHATOFSTR(HAStateClassProperty), _stateClass);
    _serializer->set(HASerializer::WithDevice);
    _serializer->set(HASerializer::WithAvailability);
    _serializer->topic(AHATOFSTR(HAStateTopic));
}

void HASensor::onMqttConnected()
{
    if (!uniqueId()) {
        return;
    }

    publishConfig();
    publishAvailability();
}

#endif
