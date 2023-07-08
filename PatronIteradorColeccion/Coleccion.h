#pragma once
#include "Iterador.h"

class Coleccion {

private:
	Persona* *vec; //vector de objetos dinamicos
	int cant; //cantidad de elementos validos
	int tama; //tamaño del vector

public:
	Coleccion(int n); //n es el tamaño en tiempo de ejecucion
	Coleccion(Coleccion*); //constructor copia
	virtual ~Coleccion();
	bool vacia();
	int getCantidad();
	Persona* obtener(int pos);
	void agregar(Persona*);
	void agregar(Coleccion);
	bool eliminar(int pos);
	Persona* eliminar(Persona*);
	Iterador* obtenerIterador();
	string toString() const;
};

Coleccion::Coleccion(int n) {
	tama = n;
	cant = 0;
	vec = new Persona*[tama];
	for (int i = 0; i < tama; i++)
		vec[i] = NULL;
}

Coleccion::Coleccion(Coleccion*) {
	//Realizar trabajo en casa
}

Coleccion::~Coleccion() {
	//Realizar trabajo en casa
}

bool Coleccion::vacia() {
	return (cant == 0);
}

int Coleccion::getCantidad() {
	return cant;
}

Persona* Coleccion::obtener(int pos) {
	return vec[pos];
}

void Coleccion::agregar(Persona* p) {
	if (cant < tama) 
		vec[cant++] = p;
}

void Coleccion::agregar(Coleccion) {
	//Realizar en casa
}

bool Coleccion::eliminar(int pos) {
	//Realizar en casa
	return true;
}

Persona* Coleccion::eliminar(Persona*) {
	//Realizar en casa
	return NULL;
}

Iterador* Coleccion::obtenerIterador() {
	return new Iterador(vec, cant);
}

string Coleccion::toString() const {
	stringstream s;
	s << "----------LISTADO--------" << endl;
	for (int i = 0; i < cant; i++)
		s << vec[i]->toString() << endl;
	s << "\n-----------------------" << endl;
	return s.str();
}