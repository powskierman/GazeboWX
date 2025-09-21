// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace time;
using namespace sensor;
using namespace binary_sensor;
using namespace switch_;
using namespace number;
using namespace select;
using namespace text_sensor;
using namespace display;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
web_server::WebServerOTAComponent *web_server_webserverotacomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
web_server::WebServer *web_server_webserver_id;
const uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 50, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
const size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
StartupTrigger *startuptrigger_id;
Automation<> *automation_id;
LambdaAction<> *lambdaaction_id;
DelayAction<> *delayaction_id;
using namespace json;
sntp::SNTPComponent *sntp_time;
using namespace uart;
uart::IDFUARTComponent *uart_nextion;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
template_::TemplateSensor *gazebo_temp;
sensor::SensorStateTrigger *sensor_sensorstatetrigger_id;
Automation<float> *automation_id_2;
LambdaAction<float> *lambdaaction_id_3;
wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor_id;
uptime::UptimeSecondsSensor *uptime_uptimesecondssensor_id;
status::StatusBinarySensor *status_statusbinarysensor_id;
gpio::GPIOSwitch *gazebo_relay;
switch_::SwitchTurnOnTrigger *switch__switchturnontrigger_id;
Automation<> *automation_id_5;
LambdaAction<> *lambdaaction_id_6;
switch_::SwitchTurnOffTrigger *switch__switchturnofftrigger_id;
Automation<> *automation_id_6;
LambdaAction<> *lambdaaction_id_7;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
template_::TemplateNumber *temp_desired;
template_::TemplateNumber *temp_correction;
template_::TemplateNumber *hysteresis;
template_::TemplateSelect *thermostat_mode;
wifi_info::SSIDWiFiInfo *wifi_info_ssidwifiinfo_id;
wifi_info::IPAddressWiFiInfo *wifi_info_ipaddresswifiinfo_id;
interval::IntervalTrigger *interval_intervaltrigger_id;
Automation<> *automation_id_7;
UpdateComponentAction<> *updatecomponentaction_id_2;
interval::IntervalTrigger *interval_intervaltrigger_id_2;
Automation<> *automation_id_8;
nextion::Nextion *nextion_display;
http_request::HttpRequestIDF *http_request_httprequestidf_id;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
UpdateComponentAction<> *updatecomponentaction_id;
DelayAction<> *delayaction_id_2;
nextion::NextionBinarySensor *nextion_nextionbinarysensor_id;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id_3;
number::NumberSetAction<> *number_numbersetaction_id;
LambdaAction<> *lambdaaction_id_4;
nextion::NextionBinarySensor *nextion_nextionbinarysensor_id_2;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_2;
Automation<> *automation_id_4;
number::NumberSetAction<> *number_numbersetaction_id_2;
LambdaAction<> *lambdaaction_id_5;
globals::GlobalsComponent<bool> *heating_state;
globals::GlobalsComponent<unsigned long> *last_heating_change;
LambdaAction<> *lambdaaction_id_8;
LambdaAction<> *lambdaaction_id_2;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: gazebo-thermostat
  //   on_boot:
  //     - priority: -100.0
  //       then:
  //         - logger.log:
  //             format: Gazebo Thermostat booted successfully
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id
  //         - delay: 2s
  //           type_id: delayaction_id
  //         - component.update:
  //             id: gazebo_temp
  //           type_id: updatecomponentaction_id
  //         - delay: 1s
  //           type_id: delayaction_id_2
  //         - lambda: !lambda |-
  //             ESP_LOGD("boot", "Thermostat mode at boot: %s", id(thermostat_mode).state.c_str());
  //             ESP_LOGD("boot", "Desired temp at boot: %.1f", id(temp_desired).state);
  //             ESP_LOGD("boot", "Hysteresis at boot: %.1f", id(hysteresis).state);
  //              Initialize last_heating_change to current time to avoid safety delay on boot
  //             id(last_heating_change) = millis();
  //           type_id: lambdaaction_id_2
  //       automation_id: automation_id
  //       trigger_id: startuptrigger_id
  //   min_version: 2025.8.4
  //   build_path: build/gazebo-thermostat
  //   friendly_name: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("gazebo-thermostat", "", "", __DATE__ ", " __TIME__, false);
  // time:
  // sensor:
  // binary_sensor:
  // switch:
  // number:
  // select:
  // text_sensor:
  // display:
  // logger:
  //   level: DEBUG
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   logs: {}
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   power_save_mode: NONE
  //   fast_connect: true
  //   output_power: 17.0
  //   manual_ip:
  //     static_ip: 192.168.0.242
  //     gateway: 192.168.0.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Gazebo-Thermostat-Fallback
  //     password: configesp32
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //     - ssid: !secret 'wifi_ssid'
  //       password: !secret 'wifi_password'
  //       id: wifi_wifiap_id_2
  //       priority: 0.0
  //   use_address: 192.168.0.242
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("192.168.0.242");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("NH2");
  wifi_wifiap_id_2.set_password("seawolfpilot01");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress("192.168.0.242"),
      .gateway = network::IPAddress("192.168.0.1"),
      .subnet = network::IPAddress("255.255.255.0"),
      .dns1 = network::IPAddress("0.0.0.0"),
      .dns2 = network::IPAddress("0.0.0.0"),
  });
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Gazebo-Thermostat-Fallback");
  wifi_wifiap_id.set_password("configesp32");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent_id->set_fast_connect(true);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_output_power(17.0f);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  web_server_webserverotacomponent_id = new web_server::WebServerOTAComponent();
  // ota.esphome:
  //   platform: esphome
  //   password: !secret 'ota_password'
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("b1b01df3b1785ca1a805c13069198a7b");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  web_server_webserverotacomponent_id->set_component_source("web_server.ota");
  App.register_component(web_server_webserverotacomponent_id);
  // api:
  //   reboot_timeout: 0s
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(0);
  api_apiserver_id->set_batch_delay(100);
  // web_server:
  //   port: 80
  //   id: web_server_webserver_id
  //   version: 2
  //   enable_private_network_access: true
  //   web_server_base_id: web_server_base_webserverbase_id
  //   include_internal: false
  //   log: true
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v2/www.js
  web_server_webserver_id = new web_server::WebServer(web_server_base_webserverbase_id);
  web_server_webserver_id->set_component_source("web_server");
  App.register_component(web_server_webserver_id);
  web_server_base_webserverbase_id->set_port(80);
  web_server_webserver_id->set_expose_log(true);
  web_server_webserver_id->set_include_internal(false);
  startuptrigger_id = new StartupTrigger(-100.0f);
  startuptrigger_id->set_component_source("esphome.coroutine");
  App.register_component(startuptrigger_id);
  automation_id = new Automation<>(startuptrigger_id);
  lambdaaction_id = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Gazebo Thermostat booted successfully");
  });
  delayaction_id = new DelayAction<>();
  delayaction_id->set_component_source("esphome.coroutine");
  App.register_component(delayaction_id);
  delayaction_id->set_delay(2000);
  // json:
  //   {}
  // esp32:
  //   board: esp32dev
  //   framework:
  //     version: 5.4.2
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/54.03.21-2/platform-espressif32.zip
  //     source: pioarduino/framework-espidf@https:github.com/pioarduino/esp-idf/releases/download/v5.4.2/esp-idf-v5.4.2.zip
  //     type: esp-idf
  //   flash_size: 4MB
  //   variant: ESP32
  //   cpu_frequency: 160MHZ
  // time.sntp:
  //   platform: sntp
  //   id: sntp_time
  //   timezone: EST5EDT,M3.2.0,M11.1.0
  //   servers:
  //     - us.pool.ntp.org
  //   update_interval: 15min
  sntp_time = new sntp::SNTPComponent({"us.pool.ntp.org"});
  sntp_time->set_update_interval(900000);
  sntp_time->set_component_source("sntp.time");
  App.register_component(sntp_time);
  sntp_time->set_timezone("EST5EDT,M3.2.0,M11.1.0");
  // uart:
  //   id: uart_nextion
  //   tx_pin:
  //     number: 17
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   rx_pin:
  //     number: 16
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   baud_rate: 9600
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_nextion = new uart::IDFUARTComponent();
  uart_nextion->set_component_source("uart");
  App.register_component(uart_nextion);
  uart_nextion->set_baud_rate(9600);
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_17);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_nextion->set_tx_pin(esp32_esp32internalgpiopin_id);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_16);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_INPUT);
  uart_nextion->set_rx_pin(esp32_esp32internalgpiopin_id_2);
  uart_nextion->set_rx_buffer_size(256);
  uart_nextion->set_stop_bits(1);
  uart_nextion->set_data_bits(8);
  uart_nextion->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // sensor.template:
  //   platform: template
  //   name: Gazebo Temperature
  //   id: gazebo_temp
  //   accuracy_decimals: 1
  //   unit_of_measurement: °C
  //   update_interval: 10s
  //   lambda: !lambda |-
  //     return 20.0 + id(temp_correction).state;   Constant 20C + temperature correction
  //   on_value:
  //     - then:
  //         - logger.log:
  //             format: 'Temperature updated: %.1f°C'
  //             args:
  //               - !lambda |-
  //                 x
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_3
  //       automation_id: automation_id_2
  //       trigger_id: sensor_sensorstatetrigger_id
  //   disabled_by_default: false
  //   force_update: false
  gazebo_temp = new template_::TemplateSensor();
  App.register_sensor(gazebo_temp);
  gazebo_temp->set_name("Gazebo Temperature");
  gazebo_temp->set_object_id("gazebo_temperature");
  gazebo_temp->set_disabled_by_default(false);
  gazebo_temp->set_unit_of_measurement("\302\260C");
  gazebo_temp->set_accuracy_decimals(1);
  gazebo_temp->set_force_update(false);
  sensor_sensorstatetrigger_id = new sensor::SensorStateTrigger(gazebo_temp);
  automation_id_2 = new Automation<float>(sensor_sensorstatetrigger_id);
  lambdaaction_id_3 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temperature updated: %.1f\302\260C", x);
  });
  automation_id_2->add_actions({lambdaaction_id_3});
  gazebo_temp->set_update_interval(10000);
  gazebo_temp->set_component_source("template.sensor");
  App.register_component(gazebo_temp);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: Gazebo WiFi Signal
  //   update_interval: 60s
  //   disabled_by_default: false
  //   force_update: false
  //   id: wifi_signal_wifisignalsensor_id
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  //   entity_category: diagnostic
  wifi_signal_wifisignalsensor_id = new wifi_signal::WiFiSignalSensor();
  App.register_sensor(wifi_signal_wifisignalsensor_id);
  wifi_signal_wifisignalsensor_id->set_name("Gazebo WiFi Signal");
  wifi_signal_wifisignalsensor_id->set_object_id("gazebo_wifi_signal");
  wifi_signal_wifisignalsensor_id->set_disabled_by_default(false);
  wifi_signal_wifisignalsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_wifisignalsensor_id->set_device_class("signal_strength");
  wifi_signal_wifisignalsensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor_id->set_unit_of_measurement("dBm");
  wifi_signal_wifisignalsensor_id->set_accuracy_decimals(0);
  wifi_signal_wifisignalsensor_id->set_force_update(false);
  wifi_signal_wifisignalsensor_id->set_update_interval(60000);
  wifi_signal_wifisignalsensor_id->set_component_source("wifi_signal.sensor");
  App.register_component(wifi_signal_wifisignalsensor_id);
  // sensor.uptime:
  //   platform: uptime
  //   name: Gazebo Uptime
  //   disabled_by_default: false
  //   force_update: false
  //   id: uptime_uptimesecondssensor_id
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   device_class: duration
  //   state_class: total_increasing
  //   entity_category: diagnostic
  //   update_interval: 60s
  //   type: seconds
  uptime_uptimesecondssensor_id = new uptime::UptimeSecondsSensor();
  App.register_sensor(uptime_uptimesecondssensor_id);
  uptime_uptimesecondssensor_id->set_name("Gazebo Uptime");
  uptime_uptimesecondssensor_id->set_object_id("gazebo_uptime");
  uptime_uptimesecondssensor_id->set_disabled_by_default(false);
  uptime_uptimesecondssensor_id->set_icon("mdi:timer-outline");
  uptime_uptimesecondssensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  uptime_uptimesecondssensor_id->set_device_class("duration");
  uptime_uptimesecondssensor_id->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_uptimesecondssensor_id->set_unit_of_measurement("s");
  uptime_uptimesecondssensor_id->set_accuracy_decimals(0);
  uptime_uptimesecondssensor_id->set_force_update(false);
  uptime_uptimesecondssensor_id->set_update_interval(60000);
  uptime_uptimesecondssensor_id->set_component_source("uptime.sensor");
  App.register_component(uptime_uptimesecondssensor_id);
  // binary_sensor.status:
  //   platform: status
  //   name: Gazebo Status
  //   disabled_by_default: false
  //   id: status_statusbinarysensor_id
  //   entity_category: diagnostic
  //   device_class: connectivity
  status_statusbinarysensor_id = new status::StatusBinarySensor();
  App.register_binary_sensor(status_statusbinarysensor_id);
  status_statusbinarysensor_id->set_name("Gazebo Status");
  status_statusbinarysensor_id->set_object_id("gazebo_status");
  status_statusbinarysensor_id->set_disabled_by_default(false);
  status_statusbinarysensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  status_statusbinarysensor_id->set_device_class("connectivity");
  status_statusbinarysensor_id->set_trigger_on_initial_state(false);
  status_statusbinarysensor_id->set_component_source("status.binary_sensor");
  App.register_component(status_statusbinarysensor_id);
  // binary_sensor.nextion:
  //   platform: nextion
  //   nextion_id: nextion_display
  //   page_id: 0
  //   component_id: 2
  //   name: Temp Up Button
  //   on_press:
  //     - then:
  //         - number.set:
  //             id: temp_desired
  //             value: !lambda |-
  //               return min(35.0f, id(temp_desired).state + 1.0f);
  //           type_id: number_numbersetaction_id
  //         - logger.log:
  //             format: Temperature increased via Nextion
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_4
  //       automation_id: automation_id_3
  //       trigger_id: binary_sensor_presstrigger_id
  //   disabled_by_default: false
  //   id: nextion_nextionbinarysensor_id
  //   visible: true
  //   update_interval: 4294967295
  // binary_sensor.nextion:
  //   platform: nextion
  //   nextion_id: nextion_display
  //   page_id: 0
  //   component_id: 3
  //   name: Temp Down Button
  //   on_press:
  //     - then:
  //         - number.set:
  //             id: temp_desired
  //             value: !lambda |-
  //               return max(10.0f, id(temp_desired).state - 1.0f);
  //           type_id: number_numbersetaction_id_2
  //         - logger.log:
  //             format: Temperature decreased via Nextion
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_5
  //       automation_id: automation_id_4
  //       trigger_id: binary_sensor_presstrigger_id_2
  //   disabled_by_default: false
  //   id: nextion_nextionbinarysensor_id_2
  //   visible: true
  //   update_interval: 4294967295
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 12
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Gazebo Relay
  //   id: gazebo_relay
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   on_turn_on:
  //     - then:
  //         - logger.log:
  //             format: Gazebo heating turned ON
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_6
  //       automation_id: automation_id_5
  //       trigger_id: switch__switchturnontrigger_id
  //   on_turn_off:
  //     - then:
  //         - logger.log:
  //             format: Gazebo heating turned OFF
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_7
  //       automation_id: automation_id_6
  //       trigger_id: switch__switchturnofftrigger_id
  //   disabled_by_default: false
  //   interlock_wait_time: 0ms
  gazebo_relay = new gpio::GPIOSwitch();
  App.register_switch(gazebo_relay);
  gazebo_relay->set_name("Gazebo Relay");
  gazebo_relay->set_object_id("gazebo_relay");
  gazebo_relay->set_disabled_by_default(false);
  switch__switchturnontrigger_id = new switch_::SwitchTurnOnTrigger(gazebo_relay);
  automation_id_5 = new Automation<>(switch__switchturnontrigger_id);
  lambdaaction_id_6 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Gazebo heating turned ON");
  });
  automation_id_5->add_actions({lambdaaction_id_6});
  switch__switchturnofftrigger_id = new switch_::SwitchTurnOffTrigger(gazebo_relay);
  automation_id_6 = new Automation<>(switch__switchturnofftrigger_id);
  lambdaaction_id_7 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Gazebo heating turned OFF");
  });
  automation_id_6->add_actions({lambdaaction_id_7});
  gazebo_relay->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  gazebo_relay->set_component_source("gpio.switch");
  App.register_component(gazebo_relay);
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_12);
  esp32_esp32internalgpiopin_id_3->set_inverted(false);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  gazebo_relay->set_pin(esp32_esp32internalgpiopin_id_3);
  // number.template:
  //   platform: template
  //   name: Desired Temperature
  //   id: temp_desired
  //   min_value: 10.0
  //   max_value: 35.0
  //   step: 0.5
  //   initial_value: 20.0
  //   unit_of_measurement: °C
  //   mode: BOX
  //   restore_value: true
  //   optimistic: true
  //   disabled_by_default: false
  //   update_interval: 60s
  temp_desired = new template_::TemplateNumber();
  temp_desired->set_update_interval(60000);
  temp_desired->set_component_source("template.number");
  App.register_component(temp_desired);
  App.register_number(temp_desired);
  temp_desired->set_name("Desired Temperature");
  temp_desired->set_object_id("desired_temperature");
  temp_desired->set_disabled_by_default(false);
  temp_desired->traits.set_min_value(10.0f);
  temp_desired->traits.set_max_value(35.0f);
  temp_desired->traits.set_step(0.5f);
  temp_desired->traits.set_mode(number::NUMBER_MODE_BOX);
  temp_desired->traits.set_unit_of_measurement("\302\260C");
  temp_desired->set_optimistic(true);
  temp_desired->set_initial_value(20.0f);
  temp_desired->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Temperature Correction
  //   id: temp_correction
  //   min_value: -10.0
  //   max_value: 10.0
  //   step: 0.1
  //   initial_value: 0.0
  //   unit_of_measurement: °C
  //   mode: BOX
  //   restore_value: true
  //   optimistic: true
  //   disabled_by_default: false
  //   update_interval: 60s
  temp_correction = new template_::TemplateNumber();
  temp_correction->set_update_interval(60000);
  temp_correction->set_component_source("template.number");
  App.register_component(temp_correction);
  App.register_number(temp_correction);
  temp_correction->set_name("Temperature Correction");
  temp_correction->set_object_id("temperature_correction");
  temp_correction->set_disabled_by_default(false);
  temp_correction->traits.set_min_value(-10.0f);
  temp_correction->traits.set_max_value(10.0f);
  temp_correction->traits.set_step(0.1f);
  temp_correction->traits.set_mode(number::NUMBER_MODE_BOX);
  temp_correction->traits.set_unit_of_measurement("\302\260C");
  temp_correction->set_optimistic(true);
  temp_correction->set_initial_value(0.0f);
  temp_correction->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Hysteresis
  //   id: hysteresis
  //   min_value: 1.0
  //   max_value: 5.0
  //   step: 0.5
  //   initial_value: 2.0
  //   unit_of_measurement: °C
  //   mode: BOX
  //   restore_value: true
  //   optimistic: true
  //   disabled_by_default: false
  //   update_interval: 60s
  hysteresis = new template_::TemplateNumber();
  hysteresis->set_update_interval(60000);
  hysteresis->set_component_source("template.number");
  App.register_component(hysteresis);
  App.register_number(hysteresis);
  hysteresis->set_name("Hysteresis");
  hysteresis->set_object_id("hysteresis");
  hysteresis->set_disabled_by_default(false);
  hysteresis->traits.set_min_value(1.0f);
  hysteresis->traits.set_max_value(5.0f);
  hysteresis->traits.set_step(0.5f);
  hysteresis->traits.set_mode(number::NUMBER_MODE_BOX);
  hysteresis->traits.set_unit_of_measurement("\302\260C");
  hysteresis->set_optimistic(true);
  hysteresis->set_initial_value(2.0f);
  hysteresis->set_restore_value(true);
  // select.template:
  //   platform: template
  //   name: Thermostat Mode
  //   id: thermostat_mode
  //   options:
  //     - 'Off'
  //     - Heat
  //     - Manual
  //   initial_option: Heat
  //   restore_value: true
  //   optimistic: true
  //   disabled_by_default: false
  //   update_interval: 60s
  thermostat_mode = new template_::TemplateSelect();
  thermostat_mode->set_update_interval(60000);
  thermostat_mode->set_component_source("template.select");
  App.register_component(thermostat_mode);
  App.register_select(thermostat_mode);
  thermostat_mode->set_name("Thermostat Mode");
  thermostat_mode->set_object_id("thermostat_mode");
  thermostat_mode->set_disabled_by_default(false);
  thermostat_mode->traits.set_options({"Off", "Heat", "Manual"});
  thermostat_mode->set_optimistic(true);
  thermostat_mode->set_initial_option("Heat");
  thermostat_mode->set_restore_value(true);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: Gazebo IP Address
  //     disabled_by_default: false
  //     id: wifi_info_ipaddresswifiinfo_id
  //     entity_category: diagnostic
  //     update_interval: 1s
  //   ssid:
  //     name: Gazebo Connected SSID
  //     disabled_by_default: false
  //     id: wifi_info_ssidwifiinfo_id
  //     entity_category: diagnostic
  //     update_interval: 1s
  wifi_info_ssidwifiinfo_id = new wifi_info::SSIDWiFiInfo();
  App.register_text_sensor(wifi_info_ssidwifiinfo_id);
  wifi_info_ssidwifiinfo_id->set_name("Gazebo Connected SSID");
  wifi_info_ssidwifiinfo_id->set_object_id("gazebo_connected_ssid");
  wifi_info_ssidwifiinfo_id->set_disabled_by_default(false);
  wifi_info_ssidwifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ssidwifiinfo_id->set_update_interval(1000);
  wifi_info_ssidwifiinfo_id->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ssidwifiinfo_id);
  wifi_info_ipaddresswifiinfo_id = new wifi_info::IPAddressWiFiInfo();
  App.register_text_sensor(wifi_info_ipaddresswifiinfo_id);
  wifi_info_ipaddresswifiinfo_id->set_name("Gazebo IP Address");
  wifi_info_ipaddresswifiinfo_id->set_object_id("gazebo_ip_address");
  wifi_info_ipaddresswifiinfo_id->set_disabled_by_default(false);
  wifi_info_ipaddresswifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ipaddresswifiinfo_id->set_update_interval(1000);
  wifi_info_ipaddresswifiinfo_id->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ipaddresswifiinfo_id);
  // interval:
  //   - interval: 10s
  //     then:
  //       - component.update:
  //           id: gazebo_temp
  //         type_id: updatecomponentaction_id_2
  //     trigger_id: trigger_id
  //     automation_id: automation_id_7
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  //   - interval: 10s
  //     then:
  //       - lambda: !lambda |-
  //            Debug: Always log thermostat check
  //           ESP_LOGD("thermostat", "=== Thermostat Check ===");
  //   
  //            Only run if thermostat mode is Heat
  //           auto mode = id(thermostat_mode).state;
  //           ESP_LOGD("thermostat", "Mode: %s", mode.c_str());
  //           if (mode != "Heat") {
  //             ESP_LOGD("thermostat", "Mode is not Heat, skipping");
  //             return;
  //           }
  //   
  //           float current_temp = id(gazebo_temp).state;
  //           float desired_temp = id(temp_desired).state;
  //           float hysteresis_val = id(hysteresis).state;
  //           bool heating = id(heating_state);
  //           unsigned long now = millis();
  //           unsigned long last_change = id(last_heating_change);
  //   
  //           ESP_LOGD("thermostat", "Current: %.1f°C, Desired: %.1f°C, Hysteresis: %.1f°C, Heating: %s",
  //                    current_temp, desired_temp, hysteresis_val, heating ? "ON" : "OFF");
  //   
  //            Hysteresis logic
  //           if (!heating && current_temp < (desired_temp - hysteresis_val)) {
  //              Turn on heating if temp is below target minus hysteresis
  //             ESP_LOGD("thermostat", "Temperature %.1f°C < %.1f°C (target-%.1f°C), turning ON heating",
  //                      current_temp, desired_temp - hysteresis_val, hysteresis_val);
  //             id(gazebo_relay).turn_on();
  //             id(heating_state) = true;
  //             id(last_heating_change) = now;
  //           } else if (heating && current_temp > (desired_temp + hysteresis_val)) {
  //              Turn off heating if temp is above target plus hysteresis
  //             ESP_LOGD("thermostat", "Temperature %.1f°C > %.1f°C (target+%.1f°C), turning OFF heating",
  //                      current_temp, desired_temp + hysteresis_val, hysteresis_val);
  //             id(gazebo_relay).turn_off();
  //             id(heating_state) = false;
  //             id(last_heating_change) = now;
  //           } else {
  //             ESP_LOGD("thermostat", "No action needed - within hysteresis range");
  //           }
  //         type_id: lambdaaction_id_8
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_8
  //     id: interval_intervaltrigger_id_2
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source("interval");
  App.register_component(interval_intervaltrigger_id);
  automation_id_7 = new Automation<>(interval_intervaltrigger_id);
  updatecomponentaction_id_2 = new UpdateComponentAction<>(gazebo_temp);
  automation_id_7->add_actions({updatecomponentaction_id_2});
  interval_intervaltrigger_id->set_update_interval(10000);
  interval_intervaltrigger_id->set_startup_delay(0);
  interval_intervaltrigger_id_2 = new interval::IntervalTrigger();
  interval_intervaltrigger_id_2->set_component_source("interval");
  App.register_component(interval_intervaltrigger_id_2);
  automation_id_8 = new Automation<>(interval_intervaltrigger_id_2);
  // display.nextion:
  //   platform: nextion
  //   id: nextion_display
  //   uart_id: uart_nextion
  //   update_interval: 5s
  //   lambda: !lambda |-
  //      Update temperature display
  //     auto temp_str = to_string(id(gazebo_temp).state);
  //     auto desired_str = to_string(id(temp_desired).state);
  //     auto mode_str = id(thermostat_mode).state;
  //     auto heating_status = id(heating_state) ? "ON" : "OFF";
  //   
  //      Send temperature data to Nextion
  //     it.send_command_printf("temp.val=%.0f", id(gazebo_temp).state);
  //     it.send_command_printf("desired.val=%.0f", id(temp_desired).state);
  //     it.send_command_printf("mode.txt=\"%s\"", mode_str.c_str());
  //     it.send_command_printf("heating.txt=\"%s\"", heating_status);
  //     it.send_command_printf("hysteresis.val=%.1f", id(hysteresis).state);
  //   auto_wake_on_touch: true
  //   dump_device_info: false
  //   exit_reparse_on_start: false
  //   skip_connection_handshake: false
  nextion_display = new nextion::Nextion();
  nextion_display->set_uart_parent(uart_nextion);
  // http_request:
  //   useragent: esphome/gazebo-thermostat
  //   timeout: 10s
  //   id: http_request_httprequestidf_id
  //   follow_redirects: true
  //   redirect_limit: 3
  //   verify_ssl: true
  //   buffer_size_rx: 512
  //   buffer_size_tx: 512
  http_request_httprequestidf_id = new http_request::HttpRequestIDF();
  http_request_httprequestidf_id->set_timeout(10000);
  http_request_httprequestidf_id->set_useragent("esphome/gazebo-thermostat");
  http_request_httprequestidf_id->set_follow_redirects(true);
  http_request_httprequestidf_id->set_redirect_limit(3);
  http_request_httprequestidf_id->set_buffer_size_rx(512);
  http_request_httprequestidf_id->set_buffer_size_tx(512);
  http_request_httprequestidf_id->set_component_source("http_request");
  App.register_component(http_request_httprequestidf_id);
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // socket:
  //   implementation: bsd_sockets
  // md5:
  // web_server_idf:
  //   {}
  updatecomponentaction_id = new UpdateComponentAction<>(gazebo_temp);
  delayaction_id_2 = new DelayAction<>();
  delayaction_id_2->set_component_source("esphome.coroutine");
  App.register_component(delayaction_id_2);
  delayaction_id_2->set_delay(1000);
  gazebo_temp->set_template([=]() -> esphome::optional<float> {
      #line 88 "gazebo-thermostat.yaml"
      return 20.0 + temp_correction->state;   
  });
  nextion_nextionbinarysensor_id = new nextion::NextionBinarySensor(nextion_display);
  App.register_binary_sensor(nextion_nextionbinarysensor_id);
  nextion_nextionbinarysensor_id->set_name("Temp Up Button");
  nextion_nextionbinarysensor_id->set_object_id("temp_up_button");
  nextion_nextionbinarysensor_id->set_disabled_by_default(false);
  nextion_nextionbinarysensor_id->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(nextion_nextionbinarysensor_id);
  automation_id_3 = new Automation<>(binary_sensor_presstrigger_id);
  number_numbersetaction_id = new number::NumberSetAction<>(temp_desired);
  number_numbersetaction_id->set_value([=]() -> float {
      #line 133 "gazebo-thermostat.yaml"
      return min(35.0f, temp_desired->state + 1.0f);
  });
  lambdaaction_id_4 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Temperature increased via Nextion");
  });
  automation_id_3->add_actions({number_numbersetaction_id, lambdaaction_id_4});
  nextion_nextionbinarysensor_id->set_update_interval(4294967295UL);
  nextion_nextionbinarysensor_id->set_component_source("nextion.binary_sensor");
  App.register_component(nextion_nextionbinarysensor_id);
  nextion_display->register_touch_component(nextion_nextionbinarysensor_id);
  nextion_nextionbinarysensor_id->set_component_id(2);
  nextion_nextionbinarysensor_id->set_page_id(0);
  nextion_nextionbinarysensor_id_2 = new nextion::NextionBinarySensor(nextion_display);
  App.register_binary_sensor(nextion_nextionbinarysensor_id_2);
  nextion_nextionbinarysensor_id_2->set_name("Temp Down Button");
  nextion_nextionbinarysensor_id_2->set_object_id("temp_down_button");
  nextion_nextionbinarysensor_id_2->set_disabled_by_default(false);
  nextion_nextionbinarysensor_id_2->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id_2 = new binary_sensor::PressTrigger(nextion_nextionbinarysensor_id_2);
  automation_id_4 = new Automation<>(binary_sensor_presstrigger_id_2);
  number_numbersetaction_id_2 = new number::NumberSetAction<>(temp_desired);
  number_numbersetaction_id_2->set_value([=]() -> float {
      #line 145 "gazebo-thermostat.yaml"
      return max(10.0f, temp_desired->state - 1.0f);
  });
  lambdaaction_id_5 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Temperature decreased via Nextion");
  });
  automation_id_4->add_actions({number_numbersetaction_id_2, lambdaaction_id_5});
  nextion_nextionbinarysensor_id_2->set_update_interval(4294967295UL);
  nextion_nextionbinarysensor_id_2->set_component_source("nextion.binary_sensor");
  App.register_component(nextion_nextionbinarysensor_id_2);
  nextion_display->register_touch_component(nextion_nextionbinarysensor_id_2);
  nextion_nextionbinarysensor_id_2->set_component_id(3);
  nextion_nextionbinarysensor_id_2->set_page_id(0);
  // globals:
  //   id: heating_state
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  heating_state = new globals::GlobalsComponent<bool>(false);
  heating_state->set_component_source("globals");
  App.register_component(heating_state);
  // globals:
  //   id: last_heating_change
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  last_heating_change = new globals::GlobalsComponent<unsigned long>(0);
  last_heating_change->set_component_source("globals");
  App.register_component(last_heating_change);
  lambdaaction_id_8 = new LambdaAction<>([=]() -> void {
      #line 273 "gazebo-thermostat.yaml"
       
      ESP_LOGD("thermostat", "=== Thermostat Check ===");
      
       
      auto mode = thermostat_mode->state;
      ESP_LOGD("thermostat", "Mode: %s", mode.c_str());
      if (mode != "Heat") {
        ESP_LOGD("thermostat", "Mode is not Heat, skipping");
        return;
      }
      
      float current_temp = gazebo_temp->state;
      float desired_temp = temp_desired->state;
      float hysteresis_val = hysteresis->state;
      bool heating = heating_state->value();
      unsigned long now = millis();
      unsigned long last_change = last_heating_change->value();
      
      ESP_LOGD("thermostat", "Current: %.1f°C, Desired: %.1f°C, Hysteresis: %.1f°C, Heating: %s",
               current_temp, desired_temp, hysteresis_val, heating ? "ON" : "OFF");
      
       
      if (!heating && current_temp < (desired_temp - hysteresis_val)) {
         
        ESP_LOGD("thermostat", "Temperature %.1f°C < %.1f°C (target-%.1f°C), turning ON heating",
                 current_temp, desired_temp - hysteresis_val, hysteresis_val);
        gazebo_relay->turn_on();
        heating_state->value() = true;
        last_heating_change->value() = now;
      } else if (heating && current_temp > (desired_temp + hysteresis_val)) {
         
        ESP_LOGD("thermostat", "Temperature %.1f°C > %.1f°C (target+%.1f°C), turning OFF heating",
                 current_temp, desired_temp + hysteresis_val, hysteresis_val);
        gazebo_relay->turn_off();
        heating_state->value() = false;
        last_heating_change->value() = now;
      } else {
        ESP_LOGD("thermostat", "No action needed - within hysteresis range");
      }
  });
  automation_id_8->add_actions({lambdaaction_id_8});
  interval_intervaltrigger_id_2->set_update_interval(10000);
  interval_intervaltrigger_id_2->set_startup_delay(0);
  nextion_display->set_writer([=](nextion::Nextion & it) -> void {
      #line 321 "gazebo-thermostat.yaml"
       
      auto temp_str = to_string(gazebo_temp->state);
      auto desired_str = to_string(temp_desired->state);
      auto mode_str = thermostat_mode->state;
      auto heating_status = heating_state->value() ? "ON" : "OFF";
      
       
      it.send_command_printf("temp.val=%.0f", gazebo_temp->state);
      it.send_command_printf("desired.val=%.0f", temp_desired->state);
      it.send_command_printf("mode.txt=\"%s\"", mode_str.c_str());
      it.send_command_printf("heating.txt=\"%s\"", heating_status);
      it.send_command_printf("hysteresis.val=%.1f", hysteresis->state);
  });
  nextion_display->set_auto_wake_on_touch(true);
  nextion_display->set_update_interval(5000);
  nextion_display->set_component_source("display");
  App.register_component(nextion_display);
  lambdaaction_id_2 = new LambdaAction<>([=]() -> void {
      #line 11 "gazebo-thermostat.yaml"
      ESP_LOGD("boot", "Thermostat mode at boot: %s", thermostat_mode->state.c_str());
      ESP_LOGD("boot", "Desired temp at boot: %.1f", temp_desired->state);
      ESP_LOGD("boot", "Hysteresis at boot: %.1f", hysteresis->state);
       
      last_heating_change->value() = millis();
  });
  automation_id->add_actions({lambdaaction_id, delayaction_id, updatecomponentaction_id, delayaction_id_2, lambdaaction_id_2});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
