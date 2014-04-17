
#ifndef OPENMPEJECUTOR_H
#define OPENMPEJECUTOR_H
#include "ejecutor.h"
#include <iostream>
using namespace std;

#include <string>
/******************************* Abstract Class ****************************
OpenMPejecutor does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class OpenMPejecutor : public ejecutor {
public:
	virtual int ejecutar (int x, int y ){
            cout << x << "*" << y << "=" << x*y << endl;
            return x*y;            
        }

};

#endif // OPENMPEJECUTOR_H
