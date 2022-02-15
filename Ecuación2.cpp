#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main ()
{
	float a,b,c;
	float x1,x2;
	cout<<"Para obtener las soluciones de tu ecuacion de segundo grado, por favor llena los siguientes valores."<<endl;
	cout<<" Introduce el coeficiente de 2do grado:  ";
	cin>>a;
	cout<<"Introduce el coeficiente de 1er grado:  ";
	cin>>b;
	cout<<"Introduce el término independiente: ";
	cin>>c;
	
	if(a!=0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		cout<<"Las soluciones de la ecuacion son:"<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
	}
	system ("pause");
	
}
