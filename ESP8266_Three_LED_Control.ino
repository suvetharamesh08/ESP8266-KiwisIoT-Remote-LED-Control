```cpp
#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi Credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

// LED Pin Configuration
#define LED1 D1
#define LED2 D2
#define LED3 D3

// Create KiwisIoT Object
KiwisIoT kiwisiot(ssid, pass, topic);

// LED Control Callback Function
void onControl(String ch, String val) {

  val.trim();

  // LED 1 - Channel 0
  if (ch == "0") {
    if (val == "1") {
      digitalWrite(LED1, HIGH);
      Serial.println("LED 1 ON");
    }
    else if (val == "0") {
      digitalWrite(LED1, LOW);
      Serial.println("LED 1 OFF");
    }
  }

  // LED 2 - Channel 1
  else if (ch == "1") {
    if (val == "1") {
      digitalWrite(LED2, HIGH);
      Serial.println("LED 2 ON");
    }
    else if (val == "0") {
      digitalWrite(LED2, LOW);
      Serial.println("LED 2 OFF");
    }
  }

  // LED 3 - Channel 2
  else if (ch == "2") {
    if (val == "1") {
      digitalWrite(LED3, HIGH);
      Serial.println("LED 3 ON");
    }
    else if (val == "0") {
      digitalWrite(LED3, LOW);
      Serial.println("LED 3 OFF");
    }
  }
}

void setup() {

  // Initialize Serial Communication
  Serial.begin(115200);

  // Configure LED Pins
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  // Initially Turn OFF All LEDs
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  // Initialize KiwisIoT
  kiwisiot.begin();

  // Register Dashboard Control Callback
  kiwisiot.onReceive(onControl);

  Serial.println("KiwisIoT Three LED Control Ready");
}

void loop() {

  // Maintain Cloud Communication
  kiwisiot.run();
}
```
