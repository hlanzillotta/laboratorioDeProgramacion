#include <iostream>
#include <conio.h>
#include <locale.h> //BIBLIOTECA PARA EL IDIOMA.

using namespace std;

int main()
{
 int codprod, bandera;
 float venta,importetotalventa;
 char  operacion;
 string descripcion;

 //INICIO DEL PROGRAMA
 setlocale(LC_ALL,"spanish");//SETEAR IDIOMA ESPAÑOL.
 
 bandera = 0;
 
 cout<<"Ingrese el código de producto:"<<endl;
 cin>>codprod;
 
 cout<<"Ingrese la descripción:"<<endl;
 cin.ignore();//LIMPIAR EL BUFFER DE TECLADO.
 
 //getline (entrada estándar, variable string); //LEE UNA CADENA DE CARACTERES DE TECLADO Y LA ALMACENA EN UNA VAR. string.
 getline(cin, descripcion);  //PARA QUE EL STRING TOME LOS ESPACIOS.
  
 cout<<"Ingrese el importe de la venta:"<<endl;
 cin>>venta;
 
 cout<<"Ingrese el código de operación (a,b,c,X,Y,Z,D,d):"<<endl;
 cin>>operacion;
 
 //ESTRUCTURA DE SELECCIÓN MÚLTIPLE EN CASCADA (EN CADA RÓTULO EXISTE MÁS DE UN VALOR).
 switch (operacion)
 {
  //RÓTULO 1
  case 'a': 
  case 'b':
  case 'c':
           importetotalventa = venta;
           break;
  //RÓTULO 2
  case 'X': 
  case 'Y':
  case 'Z':
           importetotalventa = venta*1.15; //importetotalventa = venta + (venta*15)/100;
           break;
  //RÓTULO 3
  case 'D': 
  case 'd':
           importetotalventa = venta*0.9; //importetotalventa = venta - (venta * 10)/100;
           break;
           
  //DEFAULT (OPCIONAL).
  default: 
           bandera=1;//EL CÓDIGO DE OPERACIÓN INGRESADO ES ERRÓNEO.  
                     
 }//FIN DE LA EST. DE SELECCIÓN MÚLTIPLE EN CASCADA.
 
 if(bandera == 0)
    {
      cout<<endl<<endl<<"Resultado:"<<endl<<"----------"<<endl;
      cout<<"Código de producto: "<<codprod<<endl<<"Descripción:"<<descripcion<<endl<<"Importe total de la venta : $"<<importetotalventa;
    }
 else
   {
      cout<<endl<<endl<<"Error de Código de operación";
   } 
 
 getch();
 return 0;
     
    
}
