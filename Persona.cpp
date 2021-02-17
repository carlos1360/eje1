#include <iostream>
using namespace std;
class Persona{
	
	protected : string nombre,apellidos,puesto;
				int codigo;
				int sueldo;
	
	protected : 
		Persona(){
		}
		Persona(string nom,string ape,string pues,int sue){
			nombre = nom;
			apellidos = ape;
			puesto = pues;
			sueldo = sue;
		}
	
	
	void mostrar();
	
};
