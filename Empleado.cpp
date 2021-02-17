#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
	
	private : string codigo;
	
	public :
	Empleado(){
		
	}
	Empleado(string nom,string ape,string pues,int sue,string cod) : Persona(nom,ape,pues,sue){
	codigo = cod;
	}
	
	
	void setCodigo(string cod){codigo = cod;}
	void setNombre(string nom){nombre = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setPuesto(string pues){puesto = pues;}
	void setSueldo(int sue){sueldo = sue;}
	
	string getCodigo(){   return codigo;}
	string getNombre(){   return nombre;}
	string getApellidos(){   return apellidos;}
	string getPuesto(){   return puesto;}
	int getSueldo(){   return sueldo;}
	
	void mostrar(){
		    cout<<"_______________"<<end1;
		    cout<<nit<<","<<nombre<<","<<apellidos<<","<<puesto<<","<<codigo<<","<<sueldo<<end1;
		
}
};
