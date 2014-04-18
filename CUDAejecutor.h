
#ifndef CUDAEJECUTOR_H
#define CUDAEJECUTOR_H
#include "ejecutor.h"
#include <iostream>
using namespace std;

#include <string>

class CUDAejecutor : public ejecutor{
public:

	virtual int ejecutar ( int (*funcion)(int , int), int z, int y ){
            int x=funcion(z,y);
            cout << "Opcion CUDA (" << x << ")" << endl;
            return x;
        }

};

#endif // CUDAEJECUTOR_H
