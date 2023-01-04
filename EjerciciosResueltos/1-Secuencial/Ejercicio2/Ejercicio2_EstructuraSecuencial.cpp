/*
  CODIFICACIÓN DEL EJERCICIO NRO. 2 DE LA GUÍA PRÁCTICA
  DE ESTRUCTURA SECUENCIAL
*/

//DIRECTIVAS AL PROCESADOR.
#include <iostream>

using namespace std;//HACER USO DEL ESPACIO DE NOMBRES ESTÁNDAR DE C++. 

int main()//INICIO DEL PROGRAMA PRINCIPAL.
{
  //BLOQUE DECLARATIVO DE VARIABLES.
  int numero1,numero2,resultado,resta,producto,division,resto;
  
  //BLOQUE EJECUTIVO O CUERPO.
  
  //INGRESO DE DATOS.
  //endl -> SALTO DE LÍNEA O ENTER.
  cout<<"Ingrese el primer numero entero:";
  cin>>numero1;
  
  cout<<endl<<"Ingrese el segundo numero entero:";
  cin>>numero2;
  
  //OPERACIONES - PROCESO.
  resultado=numero1 + numero2;
  resta = numero1-numero2;
  producto=numero1 * numero2;
  division=numero1/numero2;
  resto=numero1%numero2;
  
  //SALIDA - INFORME.
  cout<<endl<<endl<<"La sumatoria es = "<<resultado<<endl<<endl<<"La diferencia es = "<<resta;
  cout<<endl<<endl<<"La multiplicacion es = "<<producto<<endl<<endl<<"La division es = "<<division;
  cout<<endl<<endl<<"El resto o modulo es = "<<resto;
  
  //FIN DEL PROGRAMA PRINCIPAL.
  return 0;
  
	
}

