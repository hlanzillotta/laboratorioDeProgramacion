
//DIRECTIVAS AL PROCESADOR.
#include <iostream>
#include <conio.h>

//USO DE FUNCIONES ESTÁNDAR DE ENTRADA/SALIDA.
using namespace std;

//PROGRAMA PRINCIPAL.
int main ()
{
	//BLOQUE DECLARATIVO DE VARIABLES.
	int numero1, numero2, suma, resta, producto, division, resto;
	
	//INGRESO DEL PRIMER NÚMERO..
	cout<<"Ingrese el primer numero:"; //EMITIR EL MENSAJE EN LA PANTALLA.
	cin>>numero1; //GUARDAR EN LA MEMORIA EL PRIMER NÚMERO INGRESADO.
	
	//INGRESO DEL SEGUNDO NÚMERO..
	cout<<"Ingrese el segundo numero:"; //EMITIR EL MENSAJE EN LA PANTALLA.
	cin>>numero2; //GUARDAR EN LA MEMORIA EL SEGUNDO NÚMERO INGRESADO.
	
	//OPERACIONES
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	producto = numero1 * numero2;
	division = numero1 / numero2;
	resto = numero1 % numero2;
	
	//SALIDA POR PANTALLA.
	
	//endl : SALTO DE LÍNEA.
	cout<<"La suma es :"<<suma<<endl;
	cout<<"La resta es :"<<resta<<endl;
	cout<<"El producto es :"<<producto<<endl;
	cout<<"La division es :"<<division<<endl;
	cout<<"El resto es :"<<resto<<endl;
	
    //FINALIZAR EL PROGRAMA.
    getch();//GENERA UNA PAUSA HASTA PRESIONAR UNA TECLA.
    
    return 0; // INDICA QUE EL PROGRAMA FINALIZÓ O.K.

}


