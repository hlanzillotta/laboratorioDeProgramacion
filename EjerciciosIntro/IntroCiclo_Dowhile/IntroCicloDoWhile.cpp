//DIRECTIVAS.
#include<iostream>
#include<conio.h>

//CONSTANTES.

//ESPACIO ESTÁNDAR.
using namespace std;

//PROGRAMA PRINCIPAL.
int  main()
{
  //BLOQUE DECLARATIVO DE VARIABLES.
  int numero;
  
  //CICLO do-while.
  do{
     //INGRESO DEL NÚMERO.
	 cout<<"Ingrese un numero comprendido entre 1 y 10: ";
     cin>>numero;
    
	}while (numero <1 || numero >10);
	
  //MENSAJE FINAL.
  cout<<endl<<"El doble del numero es "<< numero * 2;
    	
  getch();//GENERAR UNA PAUSA.
  
  return 0;
  	 
}
 
