#include <iostream>
#include <wiringPi.h>
int main(){
    wiringPiSetup();
    pinMode(7, OUTPUT);
    bool statement = false;
    while(1){
        digitalWrite(7, statement = !statement);
        std::cout << statement << std::endl;
        sleep(1);
    }
}