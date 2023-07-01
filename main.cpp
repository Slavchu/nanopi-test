#include <iostream>
#include <wiringPi.h>
#include <chrono>
#include <thread>
int main(){
    wiringPiSetup();
    pinMode(7, OUTPUT);
    bool statement = false;
    while(1){
        digitalWrite(7, statement = !statement);
        std::cout << statement << std::endl;
        sleep(1);
        digitalWrite(7, statement = !statement);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        digitalWrite(7, statement = !statement);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        digitalWrite(8, statement = !statement);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        
    }
}



