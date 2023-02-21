#include <Arduino.h>
                                                                                            
const int output1 = 13;
const int output2 = 12;
const int output3 = 11;
const int output4 = 10;

const int number1 = 2;
const int number2 = 3;
const int number3 = 4;
const int number4 = 5;
const int number5 = 6;
const int number6 = 7;
const int number7 = 8;
const int number8 = 9;

void setup() {
    Serial.begin(9600);

    pinMode(output1, OUTPUT);
    pinMode(output2, OUTPUT);
    pinMode(output3, OUTPUT);
    pinMode(output4, OUTPUT);

    pinMode(number1, INPUT);
    pinMode(number2, INPUT);
    pinMode(number3, INPUT);
    pinMode(number4, INPUT);
    pinMode(number5, INPUT);
    pinMode(number6, INPUT);
    pinMode(number7, INPUT);
    pinMode(number8, INPUT);
}

void loop() {
    const int numberR1 = digitalRead(number1);
    const int numberR2 = digitalRead(number2);
    const int numberR3 = digitalRead(number3);
    const int numberR4 = digitalRead(number4);
    const int numberR5 = digitalRead(number5);
    const int numberR6 = digitalRead(number6);
    const int numberR7 = digitalRead(number7);
    const int numberR8 = digitalRead(number8);

    if(numberR1 == 1){
        Serial.println("Number 1 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, LOW);
        digitalWrite(output4, HIGH);
    } else if(numberR2 == 1) {
        Serial.println("Number 2 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, LOW);
    } else if(numberR3 == 1) {
        Serial.println("Number 3 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, HIGH);
    } else  if(numberR4 == 1) {
        Serial.println("Number 4 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, LOW);
        digitalWrite(output4, LOW);
    } else if(numberR5 == 1) {
        Serial.println("Number 5 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, LOW);
        digitalWrite(output4, HIGH);
    } else if(numberR6 == 1) {
        Serial.println("Number 6 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, LOW);
    } else if(numberR7 == 1) {
        Serial.println("Number 7 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, HIGH);
    } else if(numberR8 == 1) {
        Serial.println("Number 8 in display");
        digitalWrite(output1, HIGH);
        digitalWrite(output2, LOW);
        digitalWrite(output3, LOW);
        digitalWrite(output4, LOW);
    } else {
        Serial.println("Number 0 in display");
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, LOW);
        digitalWrite(output4, LOW);
    }
}