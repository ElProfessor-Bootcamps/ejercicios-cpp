/* 15 . Realice un programa que solicite al usuario que piense un número entero
entre el 1 y el 100. EL programa debe generar un numero aleatorio en ese mismo
rango [ 1-100 ] , e indicarle al usuario si el numero que digito es menor o mayor
al numero aleatorio , así hasta que Lo adivine . y por ultimo mostrarle el numero
de intentos que le llevo .
variable = Limite inferior + rand ( ) % ( Limite superior +1 Limite_inferior ) ;

*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador=0;
	
	
	srand(time(NULL));   // Generar un numero aleatorio
	
	dato= 1+ rand()% (100);
	
	do {
		cout<<"Digite un numero";
		cin>>numero;
		if (numero<dato){
			cout<<"\nEl numero que pusiste es menor\n";
			
		} if (numero>dato){
			cout<<"\nEl numero que pusiste es mayor\n";
		}
		contador ++;
		
	} while(numero!=dato);
	
	cout<<"Finalmente el numero que pusiste "<<numero<<" es igual a \n"<<dato;
	cout<<"\nEl numero de intentos que te llevo fueron "<< contador;
	
	system("pause");
	
	return 0;
	
	
	
	
}
