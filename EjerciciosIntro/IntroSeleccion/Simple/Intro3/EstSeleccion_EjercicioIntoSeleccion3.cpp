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
  
  //Estructura de selecci�n/decisi�n.
  if (nroent > 0)
     {//Bloque verdadero.
  		cout<<endl<<"El numero ingresado es positivo."<<endl;
     }
  else
    {//Bloque Falso.
       //Estructura de selecci�n/decisi�n anidada.
       if (nroent < 0)
          {//Bloque verdadero.
             cout<<endl<<"El numero ingresado es  negativo."<<endl;	
		  }
	   else
	      {//Bloque falso.
	       cout<<endl<<"El numero ingresado es cero."<<endl;
		  }
	}
	
  return 0;
}
