#include <iostream>

using namespace std;

int main()
{
  //Bloque declarativo de variables.
  int nroent;
  
  //Cuerpo del programa / Bloque ejecutivo.
  //Ingreso.
  cout<<"Ingrese un numero entero:";
  cin>>nroent;
  
  //Estructura de selección/decisión.
  if (nroent > 0)
     {//Bloque verdadero.
       cout<<endl<<"El numero ingresado es positivo"<<endl;
     }
 
 
  return 0;
   	

}
