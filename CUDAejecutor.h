
#ifndef CUDAEJECUTOR_H
#define CUDAEJECUTOR_H
#include "ejecutor.h"

#include <string>
/******************************* Abstract Class ****************************
CUDAejecutor does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class CUDAejecutor : public ejecutor{
public:

	virtual int ejecutar (int x, int y );

};

#endif // CUDAEJECUTOR_H
