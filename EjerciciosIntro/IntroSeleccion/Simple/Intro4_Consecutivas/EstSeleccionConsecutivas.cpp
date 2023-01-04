#include <iostream>

using namespace std;

int main()
{
	int nro, resto;
	
	//INGRESO.
	cout<<"Ingrese un numero entero:";
	cin>>nro;
	
	resto = nro % 2;
	
	//ESTRUCTURA DE SELECCIÓN 1.
	if(resto == 0 ) 
	  {
	    //BLOQUE VERDADERO.
	    cout<<endl<<"El numero es par"<<endl;
	  } 
	
	resto = nro % 5;//SE REUTILIZA LA VARIABLE nro PORQUE NO SE PRECISA DEL VALOR ANTERIOR.
	
	//ESTRUCTURA DE SELECCIÓN 2.
	if (resto == 0)
	   {//BLOQUE VERDADERO.
	    cout<<endl<<"El numero es multiplo de 5"<<endl;
	   }
    else
	   {//BLOQUE FALSO.
		cout<<endl<<"El numero no es multiplo de 5"<<endl;   
	   }
	
	return 0;	
	
}



