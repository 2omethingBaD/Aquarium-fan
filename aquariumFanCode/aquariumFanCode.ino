#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define sensor 2
#define fan 3
#define reset_pin 29
#define screen_w 128
#define screen_h 64

OneWire oneWire(sensor);
Adafruit_SSD1306 display(screen_w, screen_h, &Wire, reset_pin);
DallasTemperature sensors(&oneWire);

String message;


void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("allocation failed"));
    for (;;); // loop forever if library fails to initialize
  }

  display.setTextColor(SSD1306_WHITE);
  pinMode(sensor, INPUT);
  pinMode(fan, OUTPUT);
  digitalWrite(fan, LOW);

  display.clearDisplay();
  sensors.begin();
}


void loop() {
  delay(2000);
  display.clearDisplay();

  // Send the command to get temperatures
  sensors.requestTemperatures();  
  float temp = sensors.getTempFByIndex(0);

  if (isnan(temp)) {
    message = "No data found";
    display.setTextSize(3);
  } else {
    // controls fan
    if (temp <= 60) {
      digitalWrite(fan, LOW);
      message = String(temp) + " F" + "Fan off";
      display.setTextSize(3);
    }
    else if (temp >= 66) {
      digitalWrite(fan, HIGH);
      message = String(temp) + " F" + "Fan on";
      display.setTextSize(3);
    }
  }

  // olde dispaly configs
  delay(2);  //delay to allow byte to arrive in input buffer
  display.clearDisplay();

  Serial.println("display has been updated with: " + message); // print the message in Serial monitor for feedback
  
  display.setCursor(0, 0);//start printing at top left corner 
  display.println(message); //prints the content of the message string on the display
  display.display(); //transfers the buffer to the display
  message = ""; //reset string after each print
}
