#include <iostream>
#include <conio.h>

using namespace std;

//PROTOTIPO DE LAS FUNCIONES.
int devolverNumeroEntero();


//PROGRAMA PRINCIPAL.
int main()
{
   //DECLARACI�N DE VARIABLES LOCALES.
   int numero;
   
   numero = devolverNumeroEntero();//LLAMADO O INVOCAR A LA FUNCI�N devolverNumeroEntero. 
   
   cout<<"El numero ingresado fue : "<<numero<<endl;
   
   getch();
   return 0;
}

//DEFINCI�N O DESARROLLO DE FUNCIONES.
int devolverNumeroEntero()
{
	//VARIABLES LOCALES.
	int numero;
	
	cout<<"Ingrese un n�mero entero: ";
	
	cin>>numero;
	
	return numero;
}


