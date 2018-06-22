#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

const int PinLed =D6;

ESP8266WebServer server(80);

const char* ssid     = "shine";//WIFI 이름
const char* password = "12345678";//WIFI 비밀번호
void setup() {
  Serial.begin(115200);
  delay(1000);
  WiFi.disconnect();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);  //wifi 연결하는함수
  Serial.println(WiFi.SSID());
  WiFi.setAutoConnect(true); //자동 접속 설정
  WiFi.setAutoReconnect(true); //자동 재접속 설정 
  WiFi.waitForConnectResult();
  Serial.println(WiFi.localIP());

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }


 pinMode(PinLed, OUTPUT);
  digitalWrite(PinLed, LOW);
  Serial.begin(115200);

  // 연결 완료 까지 대기
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(WiFi.SSID());
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    Serial.println("MDNS responder started");
  }

  //접속별 동작 설정

  server.on("/", [](){
    server.send(200, "text/html", "<h1>ESP8266 LED</h1><a href=\"/off\"><button>OFF</button></a><a href=\"/on\"><button>ON</button></a>");
  });

  server.on("/on", [](){//ON 으로 접속시 LED를 켭니다.
    digitalWrite(PinLed, HIGH);
    server.send(200, "text/html", "<a href=\"/off\"><button>OFF</button></a>");
  });

  server.on("/off", [](){//OFF 으로 접속시 LED를 끕니다.
    digitalWrite(PinLed, LOW);
    server.send(200, "text/html", "<a href=\"/on\"><button>ON</button></a>");
  });
  
  //서버 사용을 시작합니다.

  server.begin();
  Serial.println("HTTP server started");

}

void loop() {
  server.handleClient();}

