
#ifndef OPENMPEJECUTOR_H
#define OPENMPEJECUTOR_H
#include "ejecutor.h"

#include <string>
/******************************* Abstract Class ****************************
OpenMPejecutor does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class OpenMPejecutor : public ejecutor {
public:
	virtual int ejecutar (int x, int y );

};

#endif // OPENMPEJECUTOR_H
