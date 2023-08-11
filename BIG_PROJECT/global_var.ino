/*
Необходимо избавляться от глобальных переменных

Было:

uint32_t tmr1;         // переменная таймера

void setup() {}

void loop() {
  if (millis() - tmr1 >= 1000) {
    tmr1 = millis();
    // выполнить действие
  }
}
*/

//Стало

void setup() {

}

void loop() {
    void SensorTimer();
    void getTimer();
}

void SensorTimer(){
    uint32_t tmr1;  // Переменная тут тоже названы одинаково
      if (millis() - tmr1 >= 1000) {
    tmr1 = millis();
    // выполнить действие
  }
}

void getTimer(){
        uint32_t tmr1;  //Переменная тут и там названы одинаково
      if (millis() - tmr1 >= 1000) {
    tmr1 = millis();
    // выполнить действие
  }
}