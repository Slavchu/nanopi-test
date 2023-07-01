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
    //pinMode(0, INPUT);
    digitalWrite( 0, 1);

    while(1){
        sleep(1);
    //    std::cout <<(analogRead(0)) << std::endl;
    }
}



