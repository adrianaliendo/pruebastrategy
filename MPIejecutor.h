
#ifndef MPIEJECUTOR_H
#define MPIEJECUTOR_H
#include "ejecutor.h"
#include <iostream>
using namespace std;


#include <string>
class MPIejecutor : public ejecutor {
public:
	//MPIejecutor ( );

	//virtual ~MPIejecutor ( );

	virtual int ejecutar (int x, int y ){
            cout << x << "+" << y << "=" << x+y << endl;
            return x+y;            
        }

};

#endif // MPIEJECUTOR_H
