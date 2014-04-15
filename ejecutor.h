
#ifndef EJECUTOR_H
#define EJECUTOR_H

#include <string>



/******************************* Abstract Class ****************************
ejecutor does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class ejecutor{
public:

	virtual void ejecutar ( ) = 0;

};

#endif // EJECUTOR_H
