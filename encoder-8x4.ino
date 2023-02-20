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
    if(number1 == 1){
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, LOW);
        digitalWrite(output4, HIGH);
    } else if(number2 == 1) {
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, LOW);
    } else if(number3 == 1) {
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, HIGH);
    } else  if(number4 == 1) {
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, LOW);
        digitalWrite(output4, LOW);
    } else if(number5 == 1) {
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, LOW);
        digitalWrite(output4, HIGH);
    } else if(number6 == 1) {
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, LOW);
    } else if(number7 == 1) {
        digitalWrite(output1, LOW);
        digitalWrite(output2, HIGH);
        digitalWrite(output3, HIGH);
        digitalWrite(output4, HIGH);
    } else if(number8 == 1) {
        digitalWrite(output1, HIGH);
        digitalWrite(output2, LOW);
        digitalWrite(output3, LOW);
        digitalWrite(output4, LOW);
    } else {
        digitalWrite(output1, LOW);
        digitalWrite(output2, LOW);
        digitalWrite(output3, LOW);
        digitalWrite(output4, LOW);
    }
}