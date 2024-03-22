#include <Arduino.h>
#include "HADictionary.h"

// components
const char HAComponentBinarySensor[] PROGMEM = {"binary_sensor"};
const char HAComponentButton[] PROGMEM = {"button"};
const char HAComponentCamera[] PROGMEM = {"camera"};
const char HAComponentCover[] PROGMEM = {"cover"};
const char HAComponentDeviceTracker[] PROGMEM = {"device_tracker"};
const char HAComponentDeviceAutomation[] PROGMEM = {"device_automation"};
const char HAComponentLock[] PROGMEM = {"lock"};
const char HAComponentNumber[] PROGMEM = {"number"};
const char HAComponentSelect[] PROGMEM = {"select"};
const char HAComponentSensor[] PROGMEM = {"sensor"};
const char HAComponentSwitch[] PROGMEM = {"switch"};
const char HAComponentTag[] PROGMEM = {"tag"};
const char HAComponentScene[] PROGMEM = {"scene"};
const char HAComponentFan[] PROGMEM = {"fan"};
const char HAComponentLight[] PROGMEM = {"light"};
const char HAComponentClimate[] PROGMEM = {"climate"};

// decorators
const char HASerializerSlash[] PROGMEM = {"/"};
const char HASerializerJsonDataPrefix[] PROGMEM = {"{"};
const char HASerializerJsonDataSuffix[] PROGMEM = {"}"};
const char HASerializerJsonPropertyPrefix[] PROGMEM = {"\""};
const char HASerializerJsonPropertySuffix[] PROGMEM = {"\":"};
const char HASerializerJsonEscapeChar[] PROGMEM = {"\""};
const char HASerializerJsonPropertiesSeparator[] PROGMEM = {","};
const char HASerializerJsonArrayPrefix[] PROGMEM = {"["};
const char HASerializerJsonArraySuffix[] PROGMEM = {"]"};
const char HASerializerUnderscore[] PROGMEM = {"_"};

// properties
const char HADeviceIdentifiersProperty[] PROGMEM = {"identifiers"};
const char HADeviceManufacturerProperty[] PROGMEM = {"manufacturer"};
const char HADeviceModelProperty[] PROGMEM = {"model"};
const char HADeviceSoftwareVersionProperty[] PROGMEM = {"sw_version"};
const char HANameProperty[] PROGMEM = {"name"};
const char HAUniqueIdProperty[] PROGMEM = {"unique_id"};
const char HADeviceProperty[] PROGMEM = {"device"};
const char HADeviceClassProperty[] PROGMEM = {"device_class"};
const char HAIconProperty[] PROGMEM = {"icon"};
const char HARetainProperty[] PROGMEM = {"retain"};
const char HASourceTypeProperty[] PROGMEM = {"source_type"};
const char HAEncodingProperty[] PROGMEM = {"encoding"};
const char HAOptimisticProperty[] PROGMEM = {"optimistic"};
const char HAAutomationTypeProperty[] PROGMEM = {"atype"}; // todo
const char HATypeProperty[] PROGMEM = {"type"};
const char HASubtypeProperty[] PROGMEM = {"subtype"};
const char HAForceUpdateProperty[] PROGMEM = {"force_update"};
const char HAUnitOfMeasurementProperty[] PROGMEM = {"unit_of_measurement"};
const char HAValueTemplateProperty[] PROGMEM = {"value_template"};
const char HAOptionsProperty[] PROGMEM = {"options"};
const char HAMinProperty[] PROGMEM = {"min"};
const char HAMaxProperty[] PROGMEM = {"max"};
const char HAStepProperty[] PROGMEM = {"step"};
const char HAModeProperty[] PROGMEM = {"mode"};
const char HACommandTemplateProperty[] PROGMEM = {"command_template"};
const char HASpeedRangeMaxProperty[] PROGMEM = {"speed_range_max"};
const char HASpeedRangeMinProperty[] PROGMEM = {"speed_range_min"};
const char HABrightnessScaleProperty[] PROGMEM = {"bri_scl"};
const char HAMinMiredsProperty[] PROGMEM = {"min_mireds"};
const char HAMaxMiredsProperty[] PROGMEM = {"max_mireds"};
const char HATemperatureUnitProperty[] PROGMEM = {"temperature_unit"};
const char HAMinTempProperty[] PROGMEM = {"min_temp"};
const char HAMaxTempProperty[] PROGMEM = {"max_temp"};
const char HATempStepProperty[] PROGMEM = {"temp_step"};
const char HAFanModesProperty[] PROGMEM = {"fan_modes"};
const char HASwingModesProperty[] PROGMEM = {"swing_modes"};
const char HAModesProperty[] PROGMEM = {"modes"};
const char HATemperatureCommandTemplateProperty[] PROGMEM = {"temperature_command_template"};
const char HAPayloadOnProperty[] PROGMEM = {"payload_on"};
const char HAExpireAfterProperty[] PROGMEM = {"expire_after"};
const char HAStateClassProperty[] PROGMEM = {"state_class"};
const char HAEntityCategoryProperty[] PROGMEM = {"entity_category"};

// topics
const char HAConfigTopic[] PROGMEM = {"config"};
const char HAAvailabilityTopic[] PROGMEM = {"availability_topic"};
const char HATopic[] PROGMEM = {"topic"};
const char HAStateTopic[] PROGMEM = {"state_topic"};
const char HACommandTopic[] PROGMEM = {"command_topic"};
const char HAPositionTopic[] PROGMEM = {"position_topic"};
const char HAPercentageStateTopic[] PROGMEM = {"percentage_state_topic"};
const char HAPercentageCommandTopic[] PROGMEM = {"percentage_command_topic"};
const char HABrightnessCommandTopic[] PROGMEM = {"brightness_command_topic"};
const char HABrightnessStateTopic[] PROGMEM = {"brightness_state_topic"};
const char HAColorTemperatureCommandTopic[] PROGMEM = {"color_temperature_command_topic"};
const char HAColorTemperatureStateTopic[] PROGMEM = {"color_temperature_state_topic"};
const char HACurrentTemperatureTopic[] PROGMEM = {"current_temperature_topic"};
const char HAActionTopic[] PROGMEM = {"action_topic"};
const char HAAuxCommandTopic[] PROGMEM = {"aux_command_topic"};
const char HAAuxStateTopic[] PROGMEM = {"aux_state_topic"};
const char HAPowerCommandTopic[] PROGMEM = {"power_command_topic"};
const char HAFanModeCommandTopic[] PROGMEM = {"fan_mode_command_topic"};
const char HAFanModeStateTopic[] PROGMEM = {"fan_mode_state_topic"};
const char HASwingModeCommandTopic[] PROGMEM = {"swing_mode_command_topic"};
const char HASwingModeStateTopic[] PROGMEM = {"swing_mode_state_topic"};
const char HAModeCommandTopic[] PROGMEM = {"mode_command_topic"};
const char HAModeStateTopic[] PROGMEM = {"mode_state_topic"};
const char HATemperatureCommandTopic[] PROGMEM = {"temperature_command_topic"};
const char HATemperatureStateTopic[] PROGMEM = {"temperature_state_topic"};
const char HARGBCommandTopic[] PROGMEM = {"rgb_command_topic"};
const char HARGBStateTopic[] PROGMEM = {"rgb_state_topic"};

// misc
const char HAOnline[] PROGMEM = {"online"};
const char HAOffline[] PROGMEM = {"offline"};
const char HAStateOn[] PROGMEM = {"ON"};
const char HAStateOff[] PROGMEM = {"OFF"};
const char HAStateLocked[] PROGMEM = {"LOCKED"};
const char HAStateUnlocked[] PROGMEM = {"UNLOCKED"};
const char HAStateNone[] PROGMEM = {"None"};
const char HATrue[] PROGMEM = {"true"};
const char HAFalse[] PROGMEM = {"false"};
const char HAHome[] PROGMEM = {"home"};
const char HANotHome[] PROGMEM = {"not_home"};
const char HATrigger[] PROGMEM = {"trigger"};
const char HAModeBox[] PROGMEM = {"box"};
const char HAModeSlider[] PROGMEM = {"slider"};
const char HACategoryConfig[] PROGMEM = {"config"};
const char HACategoryDiagnostic[] PROGMEM = {"diagnostic"};

// covers
const char HAClosedState[] PROGMEM = {"closed"};
const char HAClosingState[] PROGMEM = {"closing"};
const char HAOpenState[] PROGMEM = {"open"};
const char HAOpeningState[] PROGMEM = {"opening"};
const char HAStoppedState[] PROGMEM = {"stopped"};

// commands
const char HAOpenCommand[] PROGMEM = {"OPEN"};
const char HACloseCommand[] PROGMEM = {"CLOSE"};
const char HAStopCommand[] PROGMEM = {"STOP"};
const char HALockCommand[] PROGMEM = {"LOCK"};
const char HAUnlockCommand[] PROGMEM = {"UNLOCK"};

// device tracker
const char HAGPSType[] PROGMEM = {"gps"};
const char HARouterType[] PROGMEM = {"router"};
const char HABluetoothType[] PROGMEM = {"bluetooth"};
const char HABluetoothLEType[] PROGMEM = {"bluetooth_le"};

// camera
const char HAEncodingBase64[] PROGMEM = {"b64"};

// trigger
const char HAButtonShortPressType[] PROGMEM = {"button_short_press"};
const char HAButtonShortReleaseType[] PROGMEM = {"button_short_release"};
const char HAButtonLongPressType[] PROGMEM = {"button_long_press"};
const char HAButtonLongReleaseType[] PROGMEM = {"button_long_release"};
const char HAButtonDoublePressType[] PROGMEM = {"button_double_press"};
const char HAButtonTriplePressType[] PROGMEM = {"button_triple_press"};
const char HAButtonQuadruplePressType[] PROGMEM = {"button_quadruple_press"};
const char HAButtonQuintuplePressType[] PROGMEM = {"button_quintuple_press"};
const char HATurnOnSubtype[] PROGMEM = {"turn_on"};
const char HATurnOffSubtype[] PROGMEM = {"turn_off"};
const char HAButton1Subtype[] PROGMEM = {"button_1"};
const char HAButton2Subtype[] PROGMEM = {"button_2"};
const char HAButton3Subtype[] PROGMEM = {"button_3"};
const char HAButton4Subtype[] PROGMEM = {"button_4"};
const char HAButton5Subtype[] PROGMEM = {"button_5"};
const char HAButton6Subtype[] PROGMEM = {"button_6"};

// actions
const char HAActionOff[] PROGMEM = {"off"};
const char HAActionHeating[] PROGMEM = {"heating"};
const char HAActionCooling[] PROGMEM = {"cooling"};
const char HAActionDrying[] PROGMEM = {"drying"};
const char HAActionIdle[] PROGMEM = {"idle"};
const char HAActionFan[] PROGMEM = {"fan"};

// fan modes
const char HAFanModeAuto[] PROGMEM = {"auto"};
const char HAFanModeLow[] PROGMEM = {"low"};
const char HAFanModeMedium[] PROGMEM = {"medium"};
const char HAFanModeHigh[] PROGMEM = {"high"};

// swing modes
const char HASwingModeOn[] PROGMEM = {"on"};
const char HASwingModeOff[] PROGMEM = {"off"};

// HVAC modes
const char HAModeAuto[] PROGMEM = {"auto"};
const char HAModeOff[] PROGMEM = {"off"};
const char HAModeCool[] PROGMEM = {"cool"};
const char HAModeHeat[] PROGMEM = {"heat"};
const char HAModeDry[] PROGMEM = {"dry"};
const char HAModeFanOnly[] PROGMEM = {"fan_only"};

// other
const char HAHexMap[] PROGMEM = {"0123456789abcdef"};

// value templates
const char HAValueTemplateFloatP1[] PROGMEM = {"{{int(float(value)*10**1)}}"};
const char HAValueTemplateFloatP2[] PROGMEM = {"{{int(float(value)*10**2)}}"};
const char HAValueTemplateFloatP3[] PROGMEM = {"{{int(float(value)*10**3)}}"};
const char HATemperatureUnitC[] PROGMEM = {"C"};
const char HATemperatureUnitF[] PROGMEM = {"F"};
