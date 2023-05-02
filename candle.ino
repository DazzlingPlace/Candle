constexpr uint8_t LED1pin = 9;
constexpr uint8_t LED2pin = 10;
constexpr uint8_t LED3pin = 11;

void setup(){
  pinMode(LED1pin, OUTPUT);
  pinMode(LED2pin, OUTPUT);
  pinMode(LED3pin, OUTPUT);
}

void loop(){
  static uint32_t tmr;
  if (millis() - tmr >= random(10, 100)){
    tmr = millis();
    analogWrite(LED1pin, random(50, 255));
    analogWrite(LED2pin, random(10, 50));
    analogWrite(LED3pin, random(75, 150));
  }
}