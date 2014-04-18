
#ifndef MPIEJECUTOR_H
#define MPIEJECUTOR_H
#include "ejecutor.h"
#include <iostream>
using namespace std;

#include <string>

class MPIejecutor : public ejecutor {
public:

	virtual int ejecutar ( int (*funcion)(int, int), int z, int y ){
            int x=funcion(z,y);
            cout << "Opcion MPI (" << x << ")" << endl;
            return x;
        }

};

#endif // MPIEJECUTOR_H
