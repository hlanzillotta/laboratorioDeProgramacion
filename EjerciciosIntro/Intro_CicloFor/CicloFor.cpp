#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//Declaración de variables.
	int i, suma, nro;
	
	suma = 0; //Inicialización de la variable de tipo acumulador.
	
	/*
	  i++ -> i = i + 1;
	
	*/
	
	//Estructura de iteración definida.
	for ( i = 1 ; i <= 5; i++ )
	{
		cout<<"Ingrese el "<<i<< " numero entero : ";
		
		cin>>nro;
		
		suma+=nro; //suma = suma + nro;
	}
	
	cout<<endl<<"La sumatoria de los cinco numeros es = "<<suma;
	
	getch();
	return 0;
	
}
