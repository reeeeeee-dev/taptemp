#include <LiquidCrystal.h>
#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    dht.begin();
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
    float hum = dht.readHumidity();
    float temp = dht.readTemperature(true);
}
