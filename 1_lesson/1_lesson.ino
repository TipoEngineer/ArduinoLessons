

// Для создания переменных нужно руководствоваться Верблюжим 
// стилем или стилем Паскаля
// getVal - Верблюжий
// GetVal - Паскаль
//
// Имена типов данных и классов принято писать с большой буквы. Пример: Signal, Servo
// Имена констант принято писать в верхнем регистре, разделение – подчеркивание. Пример: MOTOR_SPEED

//Как писать код
// 1. Описание прошивки, ссылки, заметки
// 2. Константы-настройки (define и обычные)
// 3. Служебные константы (которые следует менять только с полным осознанием дела)
// 4. Подключаемые библиотеки и внешние файлы, объявление соответствующих им типов данных и классов
// 5. Глобальные переменные
// 6. setup()
// 7. loop()
// 8. Свои функции

/*
  Данный скетч плавно крутит
  сервопривод туда-обратно
  между мин. и макс. углами
  by AlexGyver
*/

// -------- НАСТРОЙКИ ---------
#define SERVO_PIN 13    // сюда подключена серво
#define SERVO_SPEED 3   // скорость серво
#define MIN_ANGLE 50    // мин. угол
#define MAX_ANGLE 120   // макс. угол

// ------- БИБЛИОТЕКИ -------
#include <Servo.h>
Servo myservo;

// ------- ПЕРЕМЕННЫЕ -------
uint32_t servoTimer;
boolean servoDirection;
int servoAngle;

// --------- SETUP ----------
void setup() {
  myservo.attach(SERVO_PIN);
}

// ---------- LOOP ----------
void loop() {
  turnServo();
}

// --------- ФУНКЦИИ --------
void turnServo() {
  if (millis() - servoTimer >= 50) {  // каждые 50 мс
    servoTimer = millis();
    if (servoDirection) {
      servoAngle += SERVO_SPEED;
      if (servoAngle >= MAX_ANGLE) {
        servoAngle = MAX_ANGLE;
        servoDirection = false;
      }
    } else {
      servoAngle -= SERVO_SPEED;
      if (servoAngle <= MIN_ANGLE) {
        servoAngle = MIN_ANGLE;
        servoDirection = true;
      }
    }
    myservo.write(servoAngle);
  }
}