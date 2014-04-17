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
#include "CUDAejecutor.h"
#include "MPIejecutor.h"
#include "OpenMPejecutor.h"

using namespace std;

int suma(int x, int y){
    return x+y;
}

int resta(int x, int y){
    return x-y;
}

int mult(int x, int y){
    return x*y;
}

int main(int argc, char** argv) {
   
    //ejecutor prueba;
    MPIejecutor concreteStrategyA;
    CUDAejecutor concreteStrategyB;
    OpenMPejecutor concreteStrategyC;
 
    //ejecucion pruebacontext(&prueba);
    ejecucion contextA(&concreteStrategyA);
    ejecucion contextB(&concreteStrategyB);
    ejecucion contextC(&concreteStrategyC);
 
    //pruebacontext.Ejecuta();
    contextA.Ejecuta();
    contextB.Ejecuta();
    contextC.Ejecuta();
    
    //pruebacontext.setEjecutor(&prueba);
    contextA.setEjecutor(&concreteStrategyB);
    contextA.Ejecuta();
    contextA.setEjecutor(&concreteStrategyC);
    contextA.Ejecuta();
 
    return 0;   
    
}

