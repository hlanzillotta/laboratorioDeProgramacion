//DIRECTIVAS AL PROCESADOR.
#include <iostream>
#include <conio.h>

//DEFINICIÓN DE CONSTANTE.
#define VALOR_CONSTANTE 1024

using namespace std;

//PROGRAMA PRINCIPAL.
int main()
{
	//DECLARACIÓN DE VARIABLES.
	float cantbytes,cantkilobytes,cantmegabytes,cantgigabytes;
	
	//INGRESO DE DATOS.
	cout<<"Ingrese la cantidad de bytes:";
	cin>>cantbytes;
	
	//PROCESO.
	cantkilobytes = cantbytes/VALOR_CONSTANTE;
	cantmegabytes = cantkilobytes/VALOR_CONSTANTE;
	cantgigabytes = cantmegabytes/VALOR_CONSTANTE;
	
	//SALIDA.
	cout<<endl<<"La cantidad de Kilobytes son : "<<cantkilobytes<<endl;
	cout<<"La cantidad de Gigabytes son: " <<cantgigabytes;  
	
	//FIN.
	getch();//GENERA UNA PAUSA.
	return 0;
}


