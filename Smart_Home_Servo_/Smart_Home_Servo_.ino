
#define BLYNK_PRINT Serial

//seting libary
#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk
#include <Servo.h>


char auth[] = "sQeEH3KqkxNM_wUyGNt9SwpasjVU4tMn"; // token yang dikirim dari blynk ke email masing2
char ssid[] = "Realme3";
char pass[] = "12345678";


Servo gerak_servo;

BLYNK_WRITE(V1)
{
  gerak_servo.write(param.asInt());
  // Fungsi Blynk untuk mengatur nilar servo dengan pin virtual V! yang ada pada aplikasi blynk
}

void setup()
{
  // Debug console
  Serial.begin(9600); // memualai serial monitor dengan baudrate 9600

  Blynk.begin(auth, ssid, pass); // menjalan blynk sesuai token, wifi, dan passwordnya 

  gerak_servo.attach(2); // setting pin gpio 2 ke servo, D4 = 2
}

void loop()
{
  Blynk.run(); //memulai blynk
}
