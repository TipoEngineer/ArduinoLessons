/*
Лучше всего использовать структуры, при использовании переменных

Было
float tempRaw;
float tempFilter;
int filterPeriod;
bool btnState;
bool btnFlag;
int btnPeriod;

void setup() {

}
void loop() {

}
*/
//Стало

struct
{
    float a;
    int b;
    /* data */
} var;


void setup() {

}
void loop() {
    var.a = digitalRead(12);
}