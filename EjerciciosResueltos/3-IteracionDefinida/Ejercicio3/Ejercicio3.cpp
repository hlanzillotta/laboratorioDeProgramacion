#include <iostream>
#include <conio.h>

//DECLARACI�N DE CONSTANTE (NO OCUPA ESPACIO EN MEMORIA).
#define CANTIDAD 20 /*DECLARAR LA CONSTANTE CANTIDAD = 2*/

using namespace std;

int main()
{
	//Declaraci�n de variables.
	int nro;
	//const int CANT=20; DECLARACI�N DE CONSTANTE CANT=20, OCUPA ESPACIO EN MEMORIA.
	float temperatura,suma,promedio;
	
    //Programa. 	
	suma=0;
	
	for(nro=1;nro<=CANTIDAD;nro++)
	   {
	     cout<<"Ingrese la temperatura"<<nro<<":";
	     cin>>temperatura;
		 suma+=temperatura; //suma = suma + temperatura;   
	   }
	
	promedio = suma / CANTIDAD; //promedio = suma / (nro-1);
	
	cout<<endl<<"El promedio es = "<<promedio;
	
	//Fin.
	getch();
	return 0;
	
}
