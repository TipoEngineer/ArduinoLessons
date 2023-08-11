/*
Класс – это просто независимая подпрограмма, в которой есть свой набор 
переменных и функций (обязательно изучи урок про функции). 
В основной программе мы можем создать экземпляр класса (он же называется объект) и 
пользоваться теми инструментами, которые имеются в классе.

class Имя_класса {
  член1;
  член2;
};

#include <Servo.h>  // подключаем заголовочный ФАЙЛ библиотеки, Servo.h
Servo myservo;  // создаём ОБЪЕКТ myservo КЛАССА Servo
int potpin = 0;
int val;
void setup() {
  myservo.attach(9);  // применяем МЕТОД attach к ОБЪЕКТУ myservo
}
void loop() {
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);      // применяем МЕТОД write к ОБЪЕКТУ myservo
  delay(15);
}

public – члены класса в этой области доступны для взаимодействия из основной программы (скетча), в которой будет создан объект. Например write() у серво.
private – члены класса в этой области доступны только внутри класса, то есть из программы к ним обратиться нельзя.

class Имя_класса {
  public:
  // список членов, доступных в программе

  private:
  // список членов для использования внутри класса
};

*/

void setup() {

}
void loop() {

}