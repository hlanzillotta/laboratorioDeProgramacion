#include <iostream>
#include <conio.h>

using namespace std;


//PROTOTIPO DE FUNCIONES.
void funcionpunto3 (int,float, string , char );

//PROGRAMA PRINCIPAL.
int main()
{
  int numeroint;
  float numerofloat;
  char caracter;
  string cadena;
 
  cout<<"Ingrese un valor entero:";
  cin>>numeroint;
  cout<<"Ingrese un valor decimal:";
  cin>>numerofloat;
  cout<<"Ingrese un caracter:";
  cin>>caracter; 
  cin.ignore(50,'\n');
  cout<<"Ingrese una cadena de caracteres:";
  getline(cin,cadena);
  
  //INVOCAR A LA FUNCIÓN CON DIFERENTES PARÁMETROS.
  funcionpunto3 (numeroint, numerofloat , cadena, caracter); 
  funcionpunto3 (5, 10.3, "Hernán", ' $');
  funcionpunto3 (50, 800.70, "Diego", '%');    
    
  
  getch();
  return 0; 
}

//DEFINICIÓN DE FUNCIONES.
void funcionpunto3 (int vi ,float vf , string vs, char  vc)
{
	cout<<endl<< "Valor entero :"<<vi<<endl<<"Valor decinal:"<<vf<<endl<<"Cadena de caracteres"<<vs<<endl;
	cout<<"Caracter: "<<vc<endl;
}

