/*
Программа для управления реле по кнопке

#define PIN_BUTTON 12
#define PIN_RELAY 13

bool flag = false;

void setup()
{
    pinMode(PIN_BUTTON, INPUT);
    pinMode(PIN_RELAY, OUTPUT);
}

void loop()
{
    bool state = digitalRead(PIN_BUTTON); 
    if (state && !flag){
        digitalWrite(PIN_RELAY, HIGH);
        flag = !flag;
    }
    if (!state && flag){
        digitalWrite(PIN_RELAY, LOW);
        flag = !flag;
    }
}

}
*/

class RELAYCONTROL{
    public:
    RELAYCONTROL(byte pin_button, byte pin_relay){
        _pin_button = pin_button;
        _pin_relay = pin_relay;
        pinMode(_pin_button, INPUT);
        pinMode(_pin_relay, OUTPUT);
    }

    void work(){
    _state = digitalRead(_pin_button); 
    if (_state && !_flag){
        digitalWrite(_pin_relay, HIGH);
        _flag = !_flag;
    }
    if (!_state && _flag){
        digitalWrite(_pin_relay, LOW);
        _flag = !_flag;
    }
    } 

    private:
    bool _flag;
    byte _pin_button;
    byte _pin_relay;
    bool _state;

};

RELAYCONTROL relay1(10, 20);

void setup() {

}

void loop() {
    relay1.work();
}