#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	   string nit,nombre,apellidos,puesto;
	   int codigo,sueldo;
	   
	   cout<<"Ingrese Codigo: ";
	   cin>>codigo;
	   cout<<"Ingrese Nombre: ";
	   cin>>nombre;
	   cout<<"Ingrese Apellidos: ";
	   cin>>apellidos;
	   cout>>"Ingrese Puesto: ";
	   cin>>puesto;
	   cout<<"Ingrese Sueldo: ";
	   cin>>sueldo;
	   
	   Empleado obj = Empleado(nombre,apellidos,puesto,sueldo,codigo);
	   obj.mostrar();
	   cout<<"Ingrese Codigo:";
	   cin>>codigo;
	   obj.setCodigo(codigo);
	   obj.mostrar():
	   
	   
}      
