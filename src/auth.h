#if defined(ESP8266)
//wife connect
const char* ssid = "SAMKANG_3F1";
const char* password = "Skmt300!";
#else
const char* ssid = "hyunwoki";
const char* password = "test1234";
#endif


//mqtt server connect
const char* mqtt_server = "211.180.34.58";
const char* MQTTUSER = "hyunwoki";
const char* MQTTPASSWORD = "2520012";

//clientId
#define MQTTCLIENTID          "ESP8266Client-"
#define MQTTDOMAIN            "SKMT"
#define MQTTCLIENTNODE        "HYUNWOKI"


//TOPIC
#define TOPICBASE             "/SKMT/TEST/"
#define TOPIC1                "/SKMT/TEST/sensor"
#define TOPIC2                "/SKMT/TEST/sensor"


#define HUMIDITY_TOPIC        "sensor/humidity"
#define TEMPERATURE_TOPIC     "sensor/temperature"
#define HEATINDEX_TOPIC       "sensor/heatindexValue"



//#define MQTTCLIENTNODE        "NODE2"
//#define MQTTDOMAIN            "SKMT"
//#define MQTTTOPIC             "/SKMT/TEST"
//#define MQTTLWTTOPIC          "/SKMT/TEST/LWT"
//#define HUMIDITY_TOPIC        "sensor/humidity"
//#define TEMPERATURE_TOPIC     "sensor/temperature"
//#define FIRMWARE              "v17.210"

//boolean connect(const char* id, const char* user, const char* pass, const char* willTopic, uint8_t willQos, boolean willRetain, const char* willMessage);

//const char* clientId           "ESP8266Client"
//const char* username           "hyunwoki"
//const char* password           "2520012"
//const char* mqttLwtTopic       "lwt/LwtTopic"
//uint8_t     mqttLwtQos         "lwt/LwtQos"
//boolean     mqttLwtRetain      "lwt/LwtRetain"
//const char* willMessage        "DEAD"



//const char* server = "api.thingspeak.com";
//WiFiClient client;

// replace with your channel's thingspeak API key,
//String apiKey = "8JIOUYKF34WE5SZ0";
