
#ifndef EJECUCION_H
#define EJECUCION_H

#include <string>
#include "ejecutor.h"
#include <iostream>
using namespace std;


class ejecucion{
private:
	ejecutor *m_estrategia;

public:

	// Constructors/Destructors
	ejecucion ( ejecutor *estrategia ) : m_estrategia(estrategia){
        
        }

	//virtual ~ejecucion ( );

	void setEjecutor ( ejecutor *estrategia/*, int op*/ ) {//string jsonfilename
            /*switch (op){
                case 0: MPIejecutor concreteStrategyA;
                case 1: CUDAejecutor concreteStrategyB;
                case 2: OpenMPejecutor concreteStrategyC;
            }*/
            m_estrategia=estrategia;
        }

	void Ejecuta ( ){
            m_estrategia->ejecutar(3,4);
        }

     
};

#endif // EJECUCION_H
