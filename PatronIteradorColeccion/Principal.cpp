#include "Coleccion.h"
using namespace std;

int main() {
	cout << "----------Declarar un Iterador-----------" << endl;
	Iterador* iter = NULL;
	cout << "Crear un contenedor..." << endl;
	Coleccion COA(10); //Objeto automatico

	cout << "Crear personas..........................." << endl;
	Persona* per1 = new Persona("1111", "Juan", 12);
	Persona* per2 = new Persona("2222", "Ana", 23);
	Persona* per3 = new Persona("3333", "Pedro", 34);
	Persona* per4 = new Persona("4444", "Cristina", 45);
	Persona* per5 = new Persona("5555", "Fulano", 56);
	Persona* per6 = new Persona("6666", "Georges", 66);

	cout << "Ingresar estas personas a la Coleccion " << endl;
	COA.agregar(per1);
	COA.agregar(per2);
	COA.agregar(per3);
	COA.agregar(per4);
	COA.agregar(per5);
	COA.agregar(per6);

	cout << "Crear un iterador para recorre la Coleccion" << endl;
	iter = COA.obtenerIterador(); //ya iter esta viendo la primera posicion
								 //del contenedor
	cout << "Se puede utilizar el Iterador construido.." << endl;
	while (iter->masElementos()) {
		cout << iter->proximoElemento()->toString() << endl;
	}

	cout << "------------------FIN----------------------------" << endl;
	delete iter;
	system("pause");
	return 0;
}
