#include<LiquidCrystal.h>

LiquidCrystal lcd (2, 3, 4, 5, 6, 7);

#define ldr 8

int val;
int val2;
String duration;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr, INPUT_PULLUP);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("LiFi Project");
  delay(3000);
  lcd.clear();
  lcd.print("Send any message");
  lcd.setCursor(0,1);
  lcd.print("from LiFi App..");
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(ldr);
  while(val == 0)
  {
    int val2 = digitalRead(ldr);
    duration += val2;
    if(duration == "001")
    {
      Serial.println("Received message: hi");
      lcd.clear();
      lcd.print("hi");
    }
    if(duration == "0001")
    {
      Serial.println("Received message: hello");
      lcd.clear();
      lcd.print("hello");
    }
    if(duration == "00001")
    {
      Serial.println("Received message: how are you?");
      lcd.clear();
      lcd.print("how are you?");
    }
    if(duration == "000001")
    {
      Serial.println("Received message: I am fine");
      lcd.clear();
      lcd.print("I am fine");
    }
    if(duration == "0000001")
    {
      Serial.println("Received message: ok");
      lcd.clear();
      lcd.print("ok");
    }
    if(duration == "00000001")
    {
      Serial.println("Received message: good morning");
      lcd.clear();
      lcd.print("good morning");
    }
    if(duration == "000000001")
    {
      Serial.println("Received message: good afternoon");
      lcd.clear();
      lcd.print("good afternoon");
    }
    if(duration == "0000000001")
    {
      Serial.println("Received message: good evening");
      lcd.clear();
      lcd.print("good evening");
    }
    if(duration == "00000000001")
    {
      Serial.println("Received message: thank you");
      lcd.clear();
      lcd.print("thank you");
    }
    if(duration == "000000000001")
    {
      Serial.println("Received message: sorry");
      lcd.clear();
      lcd.print("sorry");
    }
    if(val2 == 1)
    {
      duration = "";
      break;
    }
    delay(200);
  }
}
