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

    pinMode(0, OUTPUT);
    pinMode(2, INPUT);
    while(1){
        analogWrite( 0, 100);

        sleep(1);
        analogWrite( 0, 0);
        sleep(1);
        std::cout <<(digitalRead(2)) << std::endl;
    }
}



