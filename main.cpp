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
    wiringPiSetupGpio();
    pinMode(0, OUTPUT);

    while(1){
        digitalWrite( 0, 1);

        sleep(1);
        digitalWrite( 0, 0);
        sleep(1);
        std::cout <<(analogRead(2)) << std::endl;
    }
}



