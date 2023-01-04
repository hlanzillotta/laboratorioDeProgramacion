#include <iostream>
#include <conio.h>

using namespace std;

//PROTOTIPO DE LAS FUNCIONES.
int devolverNumeroEntero();


//PROGRAMA PRINCIPAL.
int main()
{
   //DECLARACIÓN DE VARIABLES LOCALES.
   int numero;
   
   numero = devolverNumeroEntero();//LLAMADO O INVOCAR A LA FUNCIÓN devolverNumeroEntero. 
   
   cout<<"El numero ingresado fue : "<<numero<<endl;
   
   getch();
   return 0;
}

//DEFINCIÓN O DESARROLLO DE FUNCIONES.
int devolverNumeroEntero()
{
	//VARIABLES LOCALES.
	int numero;
	
	cout<<"Ingrese un número entero: ";
	
	cin>>numero;
	
	return numero;
}


