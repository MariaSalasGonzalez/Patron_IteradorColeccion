#pragma once
#include "Persona.h"

class Iterador {

private:
	Persona* *vec; //vector de personas
	int i; // i==> subindice del vector, empieza desde 0
	int k; //k==> cantidad de valores validos

public:
	Iterador(Persona* *vector, int can);
	virtual ~Iterador();
	bool masElementos(); //si hay mas elementos?
	Persona* proximoElemento(); //nos pasa de elementos a elemento
};

Iterador::Iterador(Persona* *vector, int can) {
	vec = vector;
	k = can;
	i = 0;
}

Iterador::~Iterador() {
}

bool Iterador::masElementos(){
	return i < k;
}

Persona* Iterador::proximoElemento() {
	Persona* r = NULL; //variable puntero comodin
	if (masElementos()) {
		r = vec[i++]; //en r cae la persona de la posicion i del vector
	}
	return r;
}


