
#ifndef OPENMPEJECUTOR_H
#define OPENMPEJECUTOR_H
#include "ejecutor.h"
#include <iostream>
using namespace std;

#include <string>

class OpenMPejecutor : public ejecutor {
public:
    
	virtual int ejecutar ( int (*funcion)(int, int), int z, int y ){
            int x=funcion(z,y);
            cout << "Opcion OpenMP (" << x << ")" << endl;
            return x;
        }

};

#endif // OPENMPEJECUTOR_H
