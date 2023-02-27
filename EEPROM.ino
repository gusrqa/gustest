
  #include <EEPROM.h>

int Address = 0;
int Value = 50;

void setup() {

      Serial.begin(9600);
      EEPROM.write(Address, Value);
           
      Serial.print(Address);
      Serial.print(" ");
      Serial.println(Value);
      
}

void loop() {

}
