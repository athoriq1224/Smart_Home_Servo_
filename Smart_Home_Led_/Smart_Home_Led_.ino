
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial 

#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "sQeEH3KqkxNM_wUyGNt9SwpasjVU4tMn"; // token yang dikirim dari blynk ke email masing2

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Realme3";
char pass[] = "12345678";

void setup() // fungsi utama, dijalankan sekali
{
  // Debug console
  Serial.begin(9600); //untuk monitor di serial print

  Blynk.begin(auth, ssid, pass); // menjalan blynk sesuai token, wifi, dan passwordnya 

}

void loop() // fungsi utama, dijalanakan sekali
{
  Blynk.run(); // perintah untuk menjalakan blynk
}
