#include <stdio.h>
#include  "./ejercicio.h"

int main(){

    ROBOT markovito;
    markovito.name = "Markovito";
    markovito.type = "ServiceRobot";
    markovito.height = 1.2;
    markovito.weight = 2.5;
    markovito.degreesOffreedom = 3;
    //markovito.sayHelloToRobot = sayHelloToRobot;

    ROBOT tiago;
    tiago.name = "Tiago";
    tiago.type = "ServiceRobot";
    tiago.height = 1.7;
    tiago.weight = 2.8;
    tiago.degreesOffreedom = 7;
    
    markovito.sayHelloToRobot = sayHelloToRobot;
    markovito.sayHelloToRobot(tiago);
}



