#include <iostream> 

using namespace std;

int main () 
{
//declaración de variables.
  int nro, cent, resto, dece, unid;
  
//Cuerpo del programa.

  //Ingreso del número.
  cout<<"Ingrese un numero entero de tres cifras:";
  cin>>nro;
  
  //Operaciones.
  cent = nro / 100;
  resto = nro % 100;
  dece = resto / 10;
  unid = resto % 10;  

  //Salida.
  cout<<"Centena :"<<cent<<endl<<"Decena:"<<dece<<endl<<"Unidad:"<<unid;
  
  return 0;

} 
