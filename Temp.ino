#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(h) || isnan(t)) {
    Serial.println("Sensor Error could not read");
    lcd.clear();
    lcd.print("Sensor Error");
  }
  Serial.print("The temperature is: ");
  Serial.print(t);
  Serial.println("C");
  Serial.print("The humidity is: ");
  Serial.print(h);
  Serial.println("%");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t, 1);
  lcd.write(223);
  lcd.print("C");
  float f = ((t * 1.8) + 32);
  lcd.print("/");
  lcd.print(f, 1);
  lcd.write(223);
  lcd.print("F");
  lcd.setCursor(0, 1);
  lcd.print("Humidity:");
  lcd.print(h, 1);
  lcd.print("%");
  delay(2000);
}
