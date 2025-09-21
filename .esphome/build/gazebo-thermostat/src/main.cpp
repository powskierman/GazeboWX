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
Automation<> *automation_id_2;
LambdaAction<> *lambdaaction_id_3;
ota::OTAStartTrigger *ota_otastarttrigger_id;
Automation<> *automation_id_4;
LambdaAction<> *lambdaaction_id_7;
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
time::CronTrigger *time_crontrigger_id;
Automation<> *automation_id_9;
LambdaAction<> *lambdaaction_id_14;
time::SyncTrigger *time_synctrigger_id;
Automation<> *automation_id_8;
LambdaAction<> *lambdaaction_id_13;
using namespace uart;
uart::IDFUARTComponent *uart_nextion;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
uart::UARTDebugger *uart_uartdebugger_id;
Automation<uart::UARTDirection, std::vector<uint8_t>> *automation_id_10;
LambdaAction<uart::UARTDirection, std::vector<uint8_t>> *lambdaaction_id_15;
template_::TemplateSensor *gazebo_temp;
sensor::SensorStateTrigger *sensor_sensorstatetrigger_id;
Automation<float> *automation_id_11;
wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor_id;
uptime::UptimeSecondsSensor *uptime_uptimesecondssensor_id;
template_::TemplateSensor *sensor_bad_read_count;
template_::TemplateSensor *sensor_last_valid_temp;
status::StatusBinarySensor *status_statusbinarysensor_id;
template_::TemplateBinarySensor *sensor_malfunction_status;
gpio::GPIOSwitch *gazebo_relay;
switch_::SwitchTurnOnTrigger *switch__switchturnontrigger_id;
Automation<> *automation_id_14;
LambdaAction<> *lambdaaction_id_19;
switch_::SwitchTurnOffTrigger *switch__switchturnofftrigger_id;
Automation<> *automation_id_15;
LambdaAction<> *lambdaaction_id_20;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
template_::TemplateNumber *temp_desired;
template_::TemplateNumber *temp_correction;
template_::TemplateNumber *hysteresis;
template_::TemplateSelect *thermostat_mode;
wifi_info::SSIDWiFiInfo *wifi_ssid_sensor;
wifi_info::IPAddressWiFiInfo *wifi_ip;
template_::TemplateTextSensor *sensor_status_text;
interval::IntervalTrigger *interval_intervaltrigger_id;
Automation<> *automation_id_16;
UpdateComponentAction<> *updatecomponentaction_id_2;
interval::IntervalTrigger *interval_intervaltrigger_id_2;
Automation<> *automation_id_17;
nextion::Nextion *nextion_display;
http_request::HttpRequestIDF *http_request_httprequestidf_id;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
UpdateComponentAction<> *updatecomponentaction_id;
DelayAction<> *delayaction_id_2;
LambdaAction<> *lambdaaction_id_4;
Automation<> *automation_id_3;
LambdaAction<> *lambdaaction_id_5;
LambdaAction<> *lambdaaction_id_6;
nextion::NextionBinarySensor *nextion_nextionbinarysensor_id;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id;
Automation<> *automation_id_12;
number::NumberSetAction<> *number_numbersetaction_id;
LambdaAction<> *lambdaaction_id_17;
nextion::NextionBinarySensor *nextion_nextionbinarysensor_id_2;
binary_sensor::PressTrigger *binary_sensor_presstrigger_id_2;
Automation<> *automation_id_13;
number::NumberSetAction<> *number_numbersetaction_id_2;
LambdaAction<> *lambdaaction_id_18;
globals::GlobalsComponent<bool> *heating_state;
globals::GlobalsComponent<unsigned long> *last_heating_change;
globals::GlobalsComponent<unsigned long> *heating_start_time;
globals::GlobalsComponent<unsigned long> *max_heating_time;
globals::GlobalsComponent<unsigned long> *min_heating_off_time;
globals::GlobalsComponent<int> *sensor_bad_reads;
globals::RestoringGlobalsComponent<float> *sensor_last_valid;
globals::GlobalsComponent<bool> *sensor_malfunction;
globals::GlobalsComponent<float> *temp_smoothed;
LambdaAction<> *lambdaaction_id_21;
nextion::SetupTrigger *nextion_setuptrigger_id;
Automation<> *automation_id_18;
LambdaAction<> *lambdaaction_id_22;
LambdaAction<> *lambdaaction_id_2;
LambdaAction<> *lambdaaction_id_8;
ota::OTAProgressTrigger *ota_otaprogresstrigger_id;
Automation<float> *automation_id_5;
LambdaAction<float> *lambdaaction_id_9;
ota::OTAEndTrigger *ota_otaendtrigger_id;
Automation<> *automation_id_6;
LambdaAction<> *lambdaaction_id_10;
ota::OTAErrorTrigger *ota_otaerrortrigger_id;
Automation<uint8_t> *automation_id_7;
LambdaAction<uint8_t> *lambdaaction_id_11;
LambdaAction<uint8_t> *lambdaaction_id_12;
LambdaAction<float> *lambdaaction_id_16;
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
  //             tag: main
  //             level: DEBUG
  //             args: []
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
  //   reboot_timeout: 15min
  //   on_connect:
  //     then:
  //       - logger.log:
  //           format: WiFi connected successfully
  //           logger_id: logger_logger_id
  //           tag: main
  //           level: DEBUG
  //           args: []
  //         type_id: lambdaaction_id_3
  //       - lambda: !lambda |-
  //           ESP_LOGI("wifi", "Connected to WiFi with IP: %s", id(wifi_ip).state.c_str());
  //         type_id: lambdaaction_id_4
  //     trigger_id: trigger_id
  //     automation_id: automation_id_2
  //   on_disconnect:
  //     then:
  //       - logger.log:
  //           format: WiFi disconnected - attempting reconnection
  //           level: WARN
  //           logger_id: logger_logger_id
  //           tag: main
  //           args: []
  //         type_id: lambdaaction_id_5
  //       - lambda: !lambda |-
  //           ESP_LOGW("wifi", "WiFi connection lost - system will continue in standalone mode");
  //         type_id: lambdaaction_id_6
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_3
  //   ap:
  //     ssid: Gazebo-Thermostat-Fallback
  //     password: configesp32
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
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
  //   on_begin:
  //     - then:
  //         - logger.log:
  //             format: OTA update started - system entering safe mode
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_7
  //         - lambda: !lambda |-
  //              Turn off heating during OTA for safety
  //             if (id(heating_state)) {
  //               ESP_LOGI("ota", "Turning off heating for OTA safety");
  //               id(gazebo_relay).turn_off();
  //               id(heating_state) = false;
  //             }
  //           type_id: lambdaaction_id_8
  //       automation_id: automation_id_4
  //       trigger_id: ota_otastarttrigger_id
  //   on_progress:
  //     - then:
  //         - logger.log:
  //             format: 'OTA progress: %0.0f%%'
  //             args:
  //               - !lambda |-
  //                 x
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_9
  //       automation_id: automation_id_5
  //       trigger_id: ota_otaprogresstrigger_id
  //   on_end:
  //     - then:
  //         - logger.log:
  //             format: OTA update completed successfully
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_10
  //       automation_id: automation_id_6
  //       trigger_id: ota_otaendtrigger_id
  //   on_error:
  //     - then:
  //         - logger.log:
  //             format: 'OTA update failed with error: %s'
  //             args:
  //               - !lambda |-
  //                 x
  //             level: ERROR
  //             logger_id: logger_logger_id
  //             tag: main
  //           type_id: lambdaaction_id_11
  //         - lambda: !lambda |-
  //             ESP_LOGE("ota", "OTA update failed - system will reboot to safe firmware");
  //              Note: ESPHome will automatically reboot to previous firmware
  //           type_id: lambdaaction_id_12
  //       automation_id: automation_id_7
  //       trigger_id: ota_otaerrortrigger_id
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("b1b01df3b1785ca1a805c13069198a7b");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   reboot_timeout: 10min
  //   num_attempts: 3
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(3, 600000, 60000)) return;
  automation_id_2 = new Automation<>(wifi_wificomponent_id->get_connect_trigger());
  lambdaaction_id_3 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "WiFi connected successfully");
  });
  web_server_webserverotacomponent_id->set_component_source("web_server.ota");
  App.register_component(web_server_webserverotacomponent_id);
  ota_otastarttrigger_id = new ota::OTAStartTrigger(esphome_esphomeotacomponent_id);
  automation_id_4 = new Automation<>(ota_otastarttrigger_id);
  lambdaaction_id_7 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA update started - system entering safe mode");
  });
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
  //     - pool.ntp.org
  //     - time.google.com
  //     - time.cloudflare.com
  //   update_interval: 6h
  //   on_time_sync:
  //     - then:
  //         - logger.log:
  //             format: Time synchronized with NTP server
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_13
  //       automation_id: automation_id_8
  //       trigger_id: time_synctrigger_id
  //   on_time:
  //     - seconds:
  //         - 0
  //       minutes:
  //         - 0
  //       hours:
  //         - 0
  //       then:
  //         - logger.log:
  //             format: Daily time sync check completed
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_14
  //       automation_id: automation_id_9
  //       trigger_id: time_crontrigger_id
  sntp_time = new sntp::SNTPComponent({"pool.ntp.org", "time.google.com", "time.cloudflare.com"});
  sntp_time->set_update_interval(21600000);
  sntp_time->set_component_source("sntp.time");
  App.register_component(sntp_time);
  sntp_time->set_timezone("EST5EDT,M3.2.0,M11.1.0");
  time_crontrigger_id = new time::CronTrigger(sntp_time);
  time_crontrigger_id->add_seconds({0});
  time_crontrigger_id->add_minutes({0});
  time_crontrigger_id->add_hours({0});
  time_crontrigger_id->add_days_of_month({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31});
  time_crontrigger_id->add_months({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12});
  time_crontrigger_id->add_days_of_week({1, 2, 3, 4, 5, 6, 7});
  time_crontrigger_id->set_component_source("time");
  App.register_component(time_crontrigger_id);
  automation_id_9 = new Automation<>(time_crontrigger_id);
  lambdaaction_id_14 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Daily time sync check completed");
  });
  automation_id_9->add_actions({lambdaaction_id_14});
  time_synctrigger_id = new time::SyncTrigger(sntp_time);
  time_synctrigger_id->set_component_source("time");
  App.register_component(time_synctrigger_id);
  automation_id_8 = new Automation<>(time_synctrigger_id);
  lambdaaction_id_13 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Time synchronized with NTP server");
  });
  automation_id_8->add_actions({lambdaaction_id_13});
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
  //   debug:
  //     direction: BOTH
  //     dummy_receiver: false
  //     after:
  //       timeout: 100ms
  //       bytes: 150
  //     sequence:
  //       - then:
  //           - lambda: !lambda |-
  //               ESP_LOGW("nextion", "UART timeout - Nextion display may be disconnected");
  //                Continue operation without display
  //             type_id: lambdaaction_id_15
  //         trigger_id: trigger_id_3
  //         automation_id: automation_id_10
  //     trigger_id: uart_uartdebugger_id
  //     dummy_receiver_id: uart_uartdummyreceiver_id
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
  uart_uartdebugger_id = new uart::UARTDebugger(uart_nextion);
  uart_uartdebugger_id->set_component_source("uart");
  App.register_component(uart_uartdebugger_id);
  automation_id_10 = new Automation<uart::UARTDirection, std::vector<uint8_t>>(uart_uartdebugger_id);
  lambdaaction_id_15 = new LambdaAction<uart::UARTDirection, std::vector<uint8_t>>([=](uart::UARTDirection direction, std::vector<uint8_t> bytes) -> void {
      #line 131 "gazebo-thermostat.yaml"
      ESP_LOGW("nextion", "UART timeout - Nextion display may be disconnected");
       
  });
  automation_id_10->add_actions({lambdaaction_id_15});
  uart_uartdebugger_id->set_direction(uart::UART_DIRECTION_BOTH);
  uart_uartdebugger_id->set_after_bytes(150);
  uart_uartdebugger_id->set_after_timeout(100);
  // sensor.template:
  //   platform: template
  //   name: Gazebo Temperature
  //   id: gazebo_temp
  //   accuracy_decimals: 1
  //   unit_of_measurement: °C
  //   update_interval: 10s
  //   lambda: !lambda |-
  //      Raw sensor reading (simulated)
  //     float raw_temp = 20.0 + id(temp_correction).state;
  //   
  //      Advanced Sensor Validation with BadRead Logic
  //     bool is_valid = true;
  //   
  //      1. NaN Detection
  //     if (std::isnan(raw_temp)) {
  //       ESP_LOGW("sensor", "NaN temperature reading detected");
  //       is_valid = false;
  //     }
  //   
  //      2. Range Validation (-40°C to 80°C)
  //     if (raw_temp < -40.0 || raw_temp > 80.0) {
  //       ESP_LOGW("sensor", "Temperature reading %.1f°C outside valid range (-40°C to 80°C)", raw_temp);
  //       is_valid = false;
  //     }
  //   
  //     if (!is_valid) {
  //        3. Bad Read Counting - Increment counter on failure
  //       id(sensor_bad_reads) = id(sensor_bad_reads) + 1;
  //       ESP_LOGW("sensor", "Bad read count: %d", id(sensor_bad_reads));
  //   
  //        4. Malfunction Threshold - Trigger after 10 consecutive bad reads
  //       if (id(sensor_bad_reads) >= 10 && !id(sensor_malfunction)) {
  //         ESP_LOGE("sensor", "Sensor malfunction detected after %d consecutive bad reads", id(sensor_bad_reads));
  //         id(sensor_malfunction) = true;
  //       }
  //   
  //        6. Fallback Value - Return last valid reading when sensor fails
  //       ESP_LOGW("sensor", "Using last valid temperature: %.1f°C", id(sensor_last_valid));
  //       return id(sensor_last_valid);
  //     } else {
  //        Valid reading received
  //       if (id(sensor_bad_reads) > 0) {
  //         ESP_LOGI("sensor", "Sensor recovered after %d bad reads", id(sensor_bad_reads));
  //         id(sensor_bad_reads) = 0;   Reset bad read counter
  //         id(sensor_malfunction) = false;   Clear malfunction flag
  //       }
  //   
  //        5. Temperature Smoothing - Limit changes to 1°C per reading
  //       float temp_diff = raw_temp - id(temp_smoothed);
  //       if (abs(temp_diff) > 1.0) {
  //          Limit change to 1°C
  //         float smoothed = id(temp_smoothed) + (temp_diff > 0 ? 1.0 : -1.0);
  //         ESP_LOGD("sensor", "Temperature smoothing: %.1f°C -> %.1f°C (limited from %.1f°C)",
  //                  id(temp_smoothed), smoothed, raw_temp);
  //         id(temp_smoothed) = smoothed;
  //       } else {
  //         id(temp_smoothed) = raw_temp;
  //       }
  //   
  //        Store as last valid reading
  //       id(sensor_last_valid) = id(temp_smoothed);
  //   
  //       return id(temp_smoothed);
  //     }
  //   on_value:
  //     - then:
  //         - logger.log:
  //             format: 'Temperature updated: %.1f°C (Bad reads: %d, Malfunction: %s)'
  //             args:
  //               - !lambda |-
  //                 x
  //               - !lambda |-
  //                 id(sensor_bad_reads)
  //               - !lambda |-
  //                 id(sensor_malfunction) ? "YES" : "NO"
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //           type_id: lambdaaction_id_16
  //       automation_id: automation_id_11
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
  automation_id_11 = new Automation<float>(sensor_sensorstatetrigger_id);
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
  // sensor.template:
  //   platform: template
  //   name: Sensor Bad Read Count
  //   id: sensor_bad_read_count
  //   accuracy_decimals: 0
  //   unit_of_measurement: reads
  //   update_interval: 10s
  //   lambda: !lambda |-
  //     return id(sensor_bad_reads);
  //   disabled_by_default: false
  //   force_update: false
  sensor_bad_read_count = new template_::TemplateSensor();
  App.register_sensor(sensor_bad_read_count);
  sensor_bad_read_count->set_name("Sensor Bad Read Count");
  sensor_bad_read_count->set_object_id("sensor_bad_read_count");
  sensor_bad_read_count->set_disabled_by_default(false);
  sensor_bad_read_count->set_unit_of_measurement("reads");
  sensor_bad_read_count->set_accuracy_decimals(0);
  sensor_bad_read_count->set_force_update(false);
  sensor_bad_read_count->set_update_interval(10000);
  sensor_bad_read_count->set_component_source("template.sensor");
  App.register_component(sensor_bad_read_count);
  // sensor.template:
  //   platform: template
  //   name: Last Valid Temperature
  //   id: sensor_last_valid_temp
  //   accuracy_decimals: 1
  //   unit_of_measurement: °C
  //   update_interval: 10s
  //   lambda: !lambda |-
  //     return id(sensor_last_valid);
  //   disabled_by_default: false
  //   force_update: false
  sensor_last_valid_temp = new template_::TemplateSensor();
  App.register_sensor(sensor_last_valid_temp);
  sensor_last_valid_temp->set_name("Last Valid Temperature");
  sensor_last_valid_temp->set_object_id("last_valid_temperature");
  sensor_last_valid_temp->set_disabled_by_default(false);
  sensor_last_valid_temp->set_unit_of_measurement("\302\260C");
  sensor_last_valid_temp->set_accuracy_decimals(1);
  sensor_last_valid_temp->set_force_update(false);
  sensor_last_valid_temp->set_update_interval(10000);
  sensor_last_valid_temp->set_component_source("template.sensor");
  App.register_component(sensor_last_valid_temp);
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
  // binary_sensor.template:
  //   platform: template
  //   name: Sensor Malfunction
  //   id: sensor_malfunction_status
  //   device_class: problem
  //   lambda: !lambda |-
  //     return id(sensor_malfunction);
  //   disabled_by_default: false
  sensor_malfunction_status = new template_::TemplateBinarySensor();
  App.register_binary_sensor(sensor_malfunction_status);
  sensor_malfunction_status->set_name("Sensor Malfunction");
  sensor_malfunction_status->set_object_id("sensor_malfunction");
  sensor_malfunction_status->set_disabled_by_default(false);
  sensor_malfunction_status->set_device_class("problem");
  sensor_malfunction_status->set_trigger_on_initial_state(false);
  sensor_malfunction_status->set_component_source("template.binary_sensor");
  App.register_component(sensor_malfunction_status);
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
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_17
  //       automation_id: automation_id_12
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
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_18
  //       automation_id: automation_id_13
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
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_19
  //       automation_id: automation_id_14
  //       trigger_id: switch__switchturnontrigger_id
  //   on_turn_off:
  //     - then:
  //         - logger.log:
  //             format: Gazebo heating turned OFF
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_20
  //       automation_id: automation_id_15
  //       trigger_id: switch__switchturnofftrigger_id
  //   disabled_by_default: false
  //   interlock_wait_time: 0ms
  gazebo_relay = new gpio::GPIOSwitch();
  App.register_switch(gazebo_relay);
  gazebo_relay->set_name("Gazebo Relay");
  gazebo_relay->set_object_id("gazebo_relay");
  gazebo_relay->set_disabled_by_default(false);
  switch__switchturnontrigger_id = new switch_::SwitchTurnOnTrigger(gazebo_relay);
  automation_id_14 = new Automation<>(switch__switchturnontrigger_id);
  lambdaaction_id_19 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Gazebo heating turned ON");
  });
  automation_id_14->add_actions({lambdaaction_id_19});
  switch__switchturnofftrigger_id = new switch_::SwitchTurnOffTrigger(gazebo_relay);
  automation_id_15 = new Automation<>(switch__switchturnofftrigger_id);
  lambdaaction_id_20 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Gazebo heating turned OFF");
  });
  automation_id_15->add_actions({lambdaaction_id_20});
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
  //     id: wifi_ip
  //     disabled_by_default: false
  //     entity_category: diagnostic
  //     update_interval: 1s
  //   ssid:
  //     name: Gazebo Connected SSID
  //     id: wifi_ssid_sensor
  //     disabled_by_default: false
  //     entity_category: diagnostic
  //     update_interval: 1s
  wifi_ssid_sensor = new wifi_info::SSIDWiFiInfo();
  App.register_text_sensor(wifi_ssid_sensor);
  wifi_ssid_sensor->set_name("Gazebo Connected SSID");
  wifi_ssid_sensor->set_object_id("gazebo_connected_ssid");
  wifi_ssid_sensor->set_disabled_by_default(false);
  wifi_ssid_sensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_ssid_sensor->set_update_interval(1000);
  wifi_ssid_sensor->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_ssid_sensor);
  wifi_ip = new wifi_info::IPAddressWiFiInfo();
  App.register_text_sensor(wifi_ip);
  wifi_ip->set_name("Gazebo IP Address");
  wifi_ip->set_object_id("gazebo_ip_address");
  wifi_ip->set_disabled_by_default(false);
  wifi_ip->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_ip->set_update_interval(1000);
  wifi_ip->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_ip);
  // text_sensor.template:
  //   platform: template
  //   name: Sensor Status
  //   id: sensor_status_text
  //   update_interval: 10s
  //   lambda: !lambda |-
  //     if (id(sensor_malfunction)) {
  //       return {"<<< SENSOR MALFUNCTION >>>"};
  //     } else if (id(sensor_bad_reads) > 0) {
  //       return {"Sensor errors: " + to_string(id(sensor_bad_reads))};
  //     } else {
  //       return {"Sensor OK"};
  //     }
  //   disabled_by_default: false
  sensor_status_text = new template_::TemplateTextSensor();
  App.register_text_sensor(sensor_status_text);
  sensor_status_text->set_name("Sensor Status");
  sensor_status_text->set_object_id("sensor_status");
  sensor_status_text->set_disabled_by_default(false);
  sensor_status_text->set_update_interval(10000);
  sensor_status_text->set_component_source("template.text_sensor");
  App.register_component(sensor_status_text);
  // interval:
  //   - interval: 10s
  //     then:
  //       - component.update:
  //           id: gazebo_temp
  //         type_id: updatecomponentaction_id_2
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_16
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  //   - interval: 10s
  //     then:
  //       - lambda: !lambda |-
  //            Debug: Always log thermostat check
  //           ESP_LOGD("thermostat", "=== Thermostat Check ===");
  //   
  //            Priority Safety Check: Sensor malfunction check runs first
  //           if (id(sensor_malfunction)) {
  //              Forced Shutdown: Automatically turns off heating when sensor fails
  //             if (id(heating_state)) {
  //               ESP_LOGW("safety", "Sensor malfunction detected - forcing heating OFF for safety");
  //               id(gazebo_relay).turn_off();
  //               id(heating_state) = false;
  //               id(last_heating_change) = millis();
  //             }
  //             ESP_LOGW("safety", "Thermostat disabled due to sensor malfunction");
  //             return;   Non-recoverable: Heating stays off until sensor recovers
  //           }
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
  //           unsigned long heating_start = id(heating_start_time);
  //   
  //           ESP_LOGD("thermostat", "Current: %.1f°C, Desired: %.1f°C, Hysteresis: %.1f°C, Heating: %s",
  //                    current_temp, desired_temp, hysteresis_val, heating ? "ON" : "OFF");
  //   
  //            Safety check: Maximum heating time exceeded
  //           if (heating && (now - heating_start) > id(max_heating_time)) {
  //             ESP_LOGW("safety", "Maximum heating time exceeded (1 hour) - forcing heating OFF");
  //             id(gazebo_relay).turn_off();
  //             id(heating_state) = false;
  //             id(last_heating_change) = now;
  //             return;
  //           }
  //   
  //            Safety check: Temperature runaway protection
  //           if (heating && current_temp > (desired_temp + 5.0)) {
  //             ESP_LOGW("safety", "Temperature runaway detected (%.1f°C > %.1f°C + 5°C) - forcing heating OFF",
  //                      current_temp, desired_temp);
  //             id(gazebo_relay).turn_off();
  //             id(heating_state) = false;
  //             id(last_heating_change) = now;
  //             return;
  //           }
  //   
  //            Hysteresis logic with safety timeouts
  //           if (!heating && current_temp < (desired_temp - hysteresis_val)) {
  //              Check minimum off time before allowing heating to turn on
  //             if ((now - last_change) < id(min_heating_off_time)) {
  //               ESP_LOGD("safety", "Minimum off time not met - waiting %.1f more seconds",
  //                        (id(min_heating_off_time) - (now - last_change)) / 1000.0);
  //               return;
  //             }
  //   
  //              Turn on heating if temp is below target minus hysteresis
  //             ESP_LOGD("thermostat", "Temperature %.1f°C < %.1f°C (target-%.1f°C), turning ON heating",
  //                      current_temp, desired_temp - hysteresis_val, hysteresis_val);
  //             id(gazebo_relay).turn_on();
  //             id(heating_state) = true;
  //             id(heating_start_time) = now;
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
  //         type_id: lambdaaction_id_21
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_17
  //     id: interval_intervaltrigger_id_2
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source("interval");
  App.register_component(interval_intervaltrigger_id);
  automation_id_16 = new Automation<>(interval_intervaltrigger_id);
  updatecomponentaction_id_2 = new UpdateComponentAction<>(gazebo_temp);
  automation_id_16->add_actions({updatecomponentaction_id_2});
  interval_intervaltrigger_id->set_update_interval(10000);
  interval_intervaltrigger_id->set_startup_delay(0);
  interval_intervaltrigger_id_2 = new interval::IntervalTrigger();
  interval_intervaltrigger_id_2->set_component_source("interval");
  App.register_component(interval_intervaltrigger_id_2);
  automation_id_17 = new Automation<>(interval_intervaltrigger_id_2);
  // display.nextion:
  //   platform: nextion
  //   id: nextion_display
  //   uart_id: uart_nextion
  //   update_interval: 5s
  //   on_setup:
  //     - then:
  //         - logger.log:
  //             format: Nextion display initialized
  //             logger_id: logger_logger_id
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_22
  //       automation_id: automation_id_18
  //       trigger_id: nextion_setuptrigger_id
  //   lambda: !lambda |-
  //      Update temperature display with error handling and sensor status
  //     auto temp_str = to_string(id(gazebo_temp).state);
  //     auto desired_str = to_string(id(temp_desired).state);
  //     auto mode_str = id(thermostat_mode).state;
  //     auto heating_status = id(heating_state) ? "ON" : "OFF";
  //   
  //      Sensor status for display
  //     std::string sensor_status;
  //     if (id(sensor_malfunction)) {
  //       sensor_status = "MALFUNCTION";
  //     } else if (id(sensor_bad_reads) > 0) {
  //       sensor_status = "ERRORS: " + to_string(id(sensor_bad_reads));
  //     } else {
  //       sensor_status = "OK";
  //     }
  //   
  //      Send temperature data to Nextion with error checking
  //     if (!std::isnan(id(gazebo_temp).state)) {
  //       it.send_command_printf("temp.val=%.0f", id(gazebo_temp).state);
  //     }
  //     it.send_command_printf("desired.val=%.0f", id(temp_desired).state);
  //     it.send_command_printf("mode.txt=\"%s\"", mode_str.c_str());
  //     it.send_command_printf("heating.txt=\"%s\"", heating_status);
  //     it.send_command_printf("hysteresis.val=%.1f", id(hysteresis).state);
  //   
  //      Display Integration: Show sensor status and error count
  //     it.send_command_printf("sensor_status.txt=\"%s\"", sensor_status.c_str());
  //     it.send_command_printf("bad_reads.val=%d", id(sensor_bad_reads));
  //     it.send_command_printf("last_valid.val=%.1f", id(sensor_last_valid));
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
  lambdaaction_id_4 = new LambdaAction<>([=]() -> void {
      #line 39 "gazebo-thermostat.yaml"
      ESP_LOGI("wifi", "Connected to WiFi with IP: %s", wifi_ip->state.c_str());
  });
  automation_id_2->add_actions({lambdaaction_id_3, lambdaaction_id_4});
  automation_id_3 = new Automation<>(wifi_wificomponent_id->get_disconnect_trigger());
  lambdaaction_id_5 = new LambdaAction<>([=]() -> void {
      ESP_LOGW("main", "WiFi disconnected - attempting reconnection");
  });
  lambdaaction_id_6 = new LambdaAction<>([=]() -> void {
      #line 46 "gazebo-thermostat.yaml"
      ESP_LOGW("wifi", "WiFi connection lost - system will continue in standalone mode");
  });
  automation_id_3->add_actions({lambdaaction_id_5, lambdaaction_id_6});
  nextion_nextionbinarysensor_id = new nextion::NextionBinarySensor(nextion_display);
  App.register_binary_sensor(nextion_nextionbinarysensor_id);
  nextion_nextionbinarysensor_id->set_name("Temp Up Button");
  nextion_nextionbinarysensor_id->set_object_id("temp_up_button");
  nextion_nextionbinarysensor_id->set_disabled_by_default(false);
  nextion_nextionbinarysensor_id->set_trigger_on_initial_state(false);
  binary_sensor_presstrigger_id = new binary_sensor::PressTrigger(nextion_nextionbinarysensor_id);
  automation_id_12 = new Automation<>(binary_sensor_presstrigger_id);
  number_numbersetaction_id = new number::NumberSetAction<>(temp_desired);
  number_numbersetaction_id->set_value([=]() -> float {
      #line 279 "gazebo-thermostat.yaml"
      return min(35.0f, temp_desired->state + 1.0f);
  });
  lambdaaction_id_17 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Temperature increased via Nextion");
  });
  automation_id_12->add_actions({number_numbersetaction_id, lambdaaction_id_17});
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
  automation_id_13 = new Automation<>(binary_sensor_presstrigger_id_2);
  number_numbersetaction_id_2 = new number::NumberSetAction<>(temp_desired);
  number_numbersetaction_id_2->set_value([=]() -> float {
      #line 291 "gazebo-thermostat.yaml"
      return max(10.0f, temp_desired->state - 1.0f);
  });
  lambdaaction_id_18 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Temperature decreased via Nextion");
  });
  automation_id_13->add_actions({number_numbersetaction_id_2, lambdaaction_id_18});
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
  // globals:
  //   id: heating_start_time
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  heating_start_time = new globals::GlobalsComponent<unsigned long>(0);
  heating_start_time->set_component_source("globals");
  App.register_component(heating_start_time);
  // globals:
  //   id: max_heating_time
  //   type: unsigned long
  //   initial_value: '3600000'
  //   restore_value: false
  max_heating_time = new globals::GlobalsComponent<unsigned long>(3600000);
  max_heating_time->set_component_source("globals");
  App.register_component(max_heating_time);
  // globals:
  //   id: min_heating_off_time
  //   type: unsigned long
  //   initial_value: '300000'
  //   restore_value: false
  min_heating_off_time = new globals::GlobalsComponent<unsigned long>(300000);
  min_heating_off_time->set_component_source("globals");
  App.register_component(min_heating_off_time);
  // globals:
  //   id: sensor_bad_reads
  //   type: int
  //   initial_value: '0'
  //   restore_value: false
  sensor_bad_reads = new globals::GlobalsComponent<int>(0);
  sensor_bad_reads->set_component_source("globals");
  App.register_component(sensor_bad_reads);
  // globals:
  //   id: sensor_last_valid
  //   type: float
  //   initial_value: '20.0'
  //   restore_value: true
  sensor_last_valid = new globals::RestoringGlobalsComponent<float>(20.0);
  sensor_last_valid->set_component_source("globals");
  App.register_component(sensor_last_valid);
  sensor_last_valid->set_name_hash(9841189);
  // globals:
  //   id: sensor_malfunction
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  sensor_malfunction = new globals::GlobalsComponent<bool>(false);
  sensor_malfunction->set_component_source("globals");
  App.register_component(sensor_malfunction);
  // globals:
  //   id: temp_smoothed
  //   type: float
  //   initial_value: '20.0'
  //   restore_value: false
  temp_smoothed = new globals::GlobalsComponent<float>(20.0);
  temp_smoothed->set_component_source("globals");
  App.register_component(temp_smoothed);
  lambdaaction_id_21 = new LambdaAction<>([=]() -> void {
      #line 465 "gazebo-thermostat.yaml"
       
      ESP_LOGD("thermostat", "=== Thermostat Check ===");
      
       
      if (sensor_malfunction->value()) {
         
        if (heating_state->value()) {
          ESP_LOGW("safety", "Sensor malfunction detected - forcing heating OFF for safety");
          gazebo_relay->turn_off();
          heating_state->value() = false;
          last_heating_change->value() = millis();
        }
        ESP_LOGW("safety", "Thermostat disabled due to sensor malfunction");
        return;   
      }
      
       
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
      unsigned long heating_start = heating_start_time->value();
      
      ESP_LOGD("thermostat", "Current: %.1f°C, Desired: %.1f°C, Hysteresis: %.1f°C, Heating: %s",
               current_temp, desired_temp, hysteresis_val, heating ? "ON" : "OFF");
      
       
      if (heating && (now - heating_start) > max_heating_time->value()) {
        ESP_LOGW("safety", "Maximum heating time exceeded (1 hour) - forcing heating OFF");
        gazebo_relay->turn_off();
        heating_state->value() = false;
        last_heating_change->value() = now;
        return;
      }
      
       
      if (heating && current_temp > (desired_temp + 5.0)) {
        ESP_LOGW("safety", "Temperature runaway detected (%.1f°C > %.1f°C + 5°C) - forcing heating OFF",
                 current_temp, desired_temp);
        gazebo_relay->turn_off();
        heating_state->value() = false;
        last_heating_change->value() = now;
        return;
      }
      
       
      if (!heating && current_temp < (desired_temp - hysteresis_val)) {
         
        if ((now - last_change) < min_heating_off_time->value()) {
          ESP_LOGD("safety", "Minimum off time not met - waiting %.1f more seconds",
                   (min_heating_off_time->value() - (now - last_change)) / 1000.0);
          return;
        }
      
         
        ESP_LOGD("thermostat", "Temperature %.1f°C < %.1f°C (target-%.1f°C), turning ON heating",
                 current_temp, desired_temp - hysteresis_val, hysteresis_val);
        gazebo_relay->turn_on();
        heating_state->value() = true;
        heating_start_time->value() = now;
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
  automation_id_17->add_actions({lambdaaction_id_21});
  interval_intervaltrigger_id_2->set_update_interval(10000);
  interval_intervaltrigger_id_2->set_startup_delay(0);
  nextion_display->set_writer([=](nextion::Nextion & it) -> void {
      #line 556 "gazebo-thermostat.yaml"
       
      auto temp_str = to_string(gazebo_temp->state);
      auto desired_str = to_string(temp_desired->state);
      auto mode_str = thermostat_mode->state;
      auto heating_status = heating_state->value() ? "ON" : "OFF";
      
       
      std::string sensor_status;
      if (sensor_malfunction->value()) {
        sensor_status = "MALFUNCTION";
      } else if (sensor_bad_reads->value() > 0) {
        sensor_status = "ERRORS: " + to_string(sensor_bad_reads->value());
      } else {
        sensor_status = "OK";
      }
      
       
      if (!std::isnan(gazebo_temp->state)) {
        it.send_command_printf("temp.val=%.0f", gazebo_temp->state);
      }
      it.send_command_printf("desired.val=%.0f", temp_desired->state);
      it.send_command_printf("mode.txt=\"%s\"", mode_str.c_str());
      it.send_command_printf("heating.txt=\"%s\"", heating_status);
      it.send_command_printf("hysteresis.val=%.1f", hysteresis->state);
      
       
      it.send_command_printf("sensor_status.txt=\"%s\"", sensor_status.c_str());
      it.send_command_printf("bad_reads.val=%d", sensor_bad_reads->value());
      it.send_command_printf("last_valid.val=%.1f", sensor_last_valid->value());
  });
  nextion_display->set_auto_wake_on_touch(true);
  nextion_display->set_update_interval(5000);
  nextion_display->set_component_source("display");
  App.register_component(nextion_display);
  nextion_setuptrigger_id = new nextion::SetupTrigger(nextion_display);
  automation_id_18 = new Automation<>(nextion_setuptrigger_id);
  lambdaaction_id_22 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Nextion display initialized");
  });
  automation_id_18->add_actions({lambdaaction_id_22});
  lambdaaction_id_2 = new LambdaAction<>([=]() -> void {
      #line 11 "gazebo-thermostat.yaml"
      ESP_LOGD("boot", "Thermostat mode at boot: %s", thermostat_mode->state.c_str());
      ESP_LOGD("boot", "Desired temp at boot: %.1f", temp_desired->state);
      ESP_LOGD("boot", "Hysteresis at boot: %.1f", hysteresis->state);
       
      last_heating_change->value() = millis();
  });
  automation_id->add_actions({lambdaaction_id, delayaction_id, updatecomponentaction_id, delayaction_id_2, lambdaaction_id_2});
  lambdaaction_id_8 = new LambdaAction<>([=]() -> void {
      #line 69 "gazebo-thermostat.yaml"
       
      if (heating_state->value()) {
        ESP_LOGI("ota", "Turning off heating for OTA safety");
        gazebo_relay->turn_off();
        heating_state->value() = false;
      }
  });
  automation_id_4->add_actions({lambdaaction_id_7, lambdaaction_id_8});
  ota_otaprogresstrigger_id = new ota::OTAProgressTrigger(esphome_esphomeotacomponent_id);
  automation_id_5 = new Automation<float>(ota_otaprogresstrigger_id);
  lambdaaction_id_9 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "OTA progress: %0.0f%%", x);
  });
  automation_id_5->add_actions({lambdaaction_id_9});
  ota_otaendtrigger_id = new ota::OTAEndTrigger(esphome_esphomeotacomponent_id);
  automation_id_6 = new Automation<>(ota_otaendtrigger_id);
  lambdaaction_id_10 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA update completed successfully");
  });
  automation_id_6->add_actions({lambdaaction_id_10});
  ota_otaerrortrigger_id = new ota::OTAErrorTrigger(esphome_esphomeotacomponent_id);
  automation_id_7 = new Automation<uint8_t>(ota_otaerrortrigger_id);
  lambdaaction_id_11 = new LambdaAction<uint8_t>([=](uint8_t x) -> void {
      ESP_LOGE("main", "OTA update failed with error: %s", x);
  });
  lambdaaction_id_12 = new LambdaAction<uint8_t>([=](uint8_t x) -> void {
      #line 87 "gazebo-thermostat.yaml"
      ESP_LOGE("ota", "OTA update failed - system will reboot to safe firmware");
       
  });
  automation_id_7->add_actions({lambdaaction_id_11, lambdaaction_id_12});
  lambdaaction_id_16 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temperature updated: %.1f\302\260C (Bad reads: %d, Malfunction: %s)", x, sensor_bad_reads->value(), sensor_malfunction->value() ? "YES" : "NO");
  });
  automation_id_11->add_actions({lambdaaction_id_16});
  gazebo_temp->set_update_interval(10000);
  gazebo_temp->set_component_source("template.sensor");
  App.register_component(gazebo_temp);
  gazebo_temp->set_template([=]() -> esphome::optional<float> {
      #line 150 "gazebo-thermostat.yaml"
       
      float raw_temp = 20.0 + temp_correction->state;
      
       
      bool is_valid = true;
      
       
      if (std::isnan(raw_temp)) {
        ESP_LOGW("sensor", "NaN temperature reading detected");
        is_valid = false;
      }
      
       
      if (raw_temp < -40.0 || raw_temp > 80.0) {
        ESP_LOGW("sensor", "Temperature reading %.1f°C outside valid range (-40°C to 80°C)", raw_temp);
        is_valid = false;
      }
      
      if (!is_valid) {
         
        sensor_bad_reads->value() = sensor_bad_reads->value() + 1;
        ESP_LOGW("sensor", "Bad read count: %d", sensor_bad_reads->value());
      
         
        if (sensor_bad_reads->value() >= 10 && !sensor_malfunction->value()) {
          ESP_LOGE("sensor", "Sensor malfunction detected after %d consecutive bad reads", sensor_bad_reads->value());
          sensor_malfunction->value() = true;
        }
      
         
        ESP_LOGW("sensor", "Using last valid temperature: %.1f°C", sensor_last_valid->value());
        return sensor_last_valid->value();
      } else {
         
        if (sensor_bad_reads->value() > 0) {
          ESP_LOGI("sensor", "Sensor recovered after %d bad reads", sensor_bad_reads->value());
          sensor_bad_reads->value() = 0;   
          sensor_malfunction->value() = false;   
        }
      
         
        float temp_diff = raw_temp - temp_smoothed->value();
        if (abs(temp_diff) > 1.0) {
           
          float smoothed = temp_smoothed->value() + (temp_diff > 0 ? 1.0 : -1.0);
          ESP_LOGD("sensor", "Temperature smoothing: %.1f°C -> %.1f°C (limited from %.1f°C)",
                   temp_smoothed->value(), smoothed, raw_temp);
          temp_smoothed->value() = smoothed;
        } else {
          temp_smoothed->value() = raw_temp;
        }
      
         
        sensor_last_valid->value() = temp_smoothed->value();
      
        return temp_smoothed->value();
      }
  });
  sensor_bad_read_count->set_template([=]() -> esphome::optional<float> {
      #line 244 "gazebo-thermostat.yaml"
      return sensor_bad_reads->value();
  });
  sensor_last_valid_temp->set_template([=]() -> esphome::optional<float> {
      #line 254 "gazebo-thermostat.yaml"
      return sensor_last_valid->value();
  });
  sensor_malfunction_status->set_template([=]() -> esphome::optional<bool> {
      #line 267 "gazebo-thermostat.yaml"
      return sensor_malfunction->value();
  });
  sensor_status_text->set_template([=]() -> esphome::optional<std::string> {
      #line 374 "gazebo-thermostat.yaml"
      if (sensor_malfunction->value()) {
        return {"<<< SENSOR MALFUNCTION >>>"};
      } else if (sensor_bad_reads->value() > 0) {
        return {"Sensor errors: " + to_string(sensor_bad_reads->value())};
      } else {
        return {"Sensor OK"};
      }
  });
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
