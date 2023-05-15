#include <iostream>
using namespace std;
int ElNumeroMayor (int a, int b);
int main ()
{
	int n1, n2;
	cout<<"Ingrese un numero: "<<endl;
	cin>>n1;
	cout<<"Ingrese un numero: "<<endl;
	cin>>n2;
	cout<<"El numero mayor es: "<<ElNumeroMayor (n1, n2);
	return 0;	
}
int ElNumeroMayor (int a, int b)
{
	int mayor=a;
	if (a<b)
	{
		mayor=b;
	}
	return mayor;
}
