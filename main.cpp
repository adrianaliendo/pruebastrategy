/* 
 * File:   main.cpp
 * Author: aliendo
 *
 * Created on 9 de abril de 2014, 06:31 PM
 */

#include <cstdlib>
#include <iostream>
#include "ejecucion.h"
#include "ejecutor.h"

using namespace std;

int main(int argc, char** argv) {
   
    MPIejecutor concreteStrategyA;
    CUDAejecutor concreteStrategyB;
    OpenMPejecutor concreteStrategyC;
 
    ejecucion contextA(&concreteStrategyA);
    ejecucion contextB(&concreteStrategyB);
    ejecucion contextC(&concreteStrategyC);
 
    contextA.Ejecuta();
    contextB.Ejecuta();
    contextC.Ejecuta();
 
    contextA.setEjecutor(&concreteStrategyB);
    contextA.Ejecuta();
    contextA.setEjecutor(&concreteStrategyC);
    contextA.Ejecuta();
 
    return 0;   
    
}

