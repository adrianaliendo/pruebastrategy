
#ifndef EJECUCION_H
#define EJECUCION_H

#include <string>
#include "ejecutor.h"

class ejecucion{
private:
	ejecutor *m_estrategia;

public:

	// Constructors/Destructors
	ejecucion ( ejecutor *estrategia );

	//virtual ~ejecucion ( );

	void setEjecutor ( ejecutor *estrategia );//string jsonfilename

	void Ejecuta ( );

     
};

#endif // EJECUCION_H
