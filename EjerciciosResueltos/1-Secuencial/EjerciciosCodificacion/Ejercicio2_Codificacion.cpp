#include <iostream>
#include <math.h> /*pow - Potencia
                   
				    pow (base, exponente);
					
					pow( 2,3) -> 2^3 = 8
					pow (4,2) -> 4^2 = 16    
				 */

#define PI 3.14159 //NO OCUPA ESPACIO EN LA MEMORIA PRINCIPAL.

//const float H = 0.5; // ESPACIO EN LA MEMORIA PRINCIPAL.

using namespace std;

int main()
{
	float radio, superficie, perimetro;
	
	cout<<"Ingrese el valor del radio del circulo:";
	cin>>radio;
	
	superficie = PI * pow(radio ,2) ;//radio * radio.
	perimetro= 2 * PI * radio;
	
	cout<<"La superficie de la circunferncia es:"<<superficie<<endl<<"Y el perímetro es: "<<perimetro;
	
	return 0;
}

