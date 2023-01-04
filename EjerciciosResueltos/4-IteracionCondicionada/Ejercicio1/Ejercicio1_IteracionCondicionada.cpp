#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int contador, numero;
	
	//a)
	cout<<"Ingrese un número entero (0 para finalizar) :";
	cin>>numero;
	
	contador=0;
	
	//d)
	while (numero !=0) //b)
	      {
		    contador++; //c)
		    
		    //a)
			cout<<"Ingrese un número entero (0 para finalizar) :";
  	        cin>>numero;
		    
	      }
	
	//e)
	cout<<"Se ingresaron "<<contador<<" numeros.";
	
	getch();
	return 0;
	
	
}

