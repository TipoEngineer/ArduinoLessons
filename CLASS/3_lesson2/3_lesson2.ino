/*
Работа с Классами на примере мигания светодиода по таймеру
Пример хорошо подходит для морагния 2 светодиодами, но если их нужно 10 или 15. Можно сделать CLASS

byte pin = 13;
uint32_t tmr;
uint16_t prd = 500;
bool flag;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  if (millis() - tmr >= prd) {
    tmr = millis();
    flag = !flag;
    digitalWrite(pin, flag);
  }
}

*/


class LED {
  public:
  LED(byte pin, uint16_t prd){
    _pin = pin;
    _prd = prd;
    pinMode(_pin, OUTPUT);
  }

void blink(){
  if (millis() - _tmr >= _prd){
    _tmr = millis();
    _flag = !_flag;
    digitalWrite(_pin, _flag);
  }
}

void setPrd(uint16_t prd){
  _prd = prd;
}

  private:
  byte _pin;
  uint32_t _tmr;
  uint16_t _prd;
  bool _flag;
};

LED led1(12, 500);
LED led2(13, 1000);

void setup() {
  led1.setPrd(500);
}

void loop() {
  led1.blink();
  led2.blink();
}