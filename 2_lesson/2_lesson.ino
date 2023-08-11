/*
Урок про структуры

Структура (struct) - это набор переменных с разыми типами данных

struct ярлык {
  тип_данных имя_переменной_1;
  тип_данных имя_переменной_2;
  тип_данных имя_переменной_3;
};

*/

//-----ПРИМЕР СТРУКТУРЫ------

struct myStruct
{
    boolean a;
    int b;
    float c;
    byte arr{3};
};

myStruct kek; // Создаём структуру kek

void setup(){
    kek.a = true;
    kek.b = 123;
    kek.c = 1.2;
    kek.arr[0] = 10;
    kek.arr[1] = 20;
    kek.arr[2] = 30;
}

void loop(){
    
}