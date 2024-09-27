
/* 3 . Realice un programa que Lea un valor entero y determine si se trata de un
número par o impar . * /

*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	
	int valor;
	
	cout<<"Entra un valor entero: ";
	cin>>valor;
	
	if (valor%2==0){
		cout<<"El numero es par";
	} else {
		cout<<"El numero es impar";
	}
	
	return 0;
	
} 
