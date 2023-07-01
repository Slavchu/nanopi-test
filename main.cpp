/*
################################################
#              02.07.2023                      #
#         Welcome to my shitcode               #
#           Written by Slavchoo                #
################################################
*/
#include <iostream>
#include <wiringPi.h>
#include <chrono>
#include <thread>

int main(){
    wiringPiSetup();
    pinMode(7, OUTPUT);
    pinMode(0, INPUT);
    bool statement = false;
    while(1){
        analogWrite(analogRead(0), 7);
        
    }
}



