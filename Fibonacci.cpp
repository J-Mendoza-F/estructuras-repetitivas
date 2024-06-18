#include <iostream>
using namespace std;

int main(){
	int num, a, b, c, i;
	// i es un iterador para que el "mientras" (while) no se repita infinitamente
	cout<<"SERIE FINOBACCI"<<endl;
	cout<<"Introduzca el tope de la serie: ";
	cin>>num;
	i=1;
	a=0;
	// apoyo para copiar el número anterior de la serie
	b=1;
	// segundo apoyo
	while (i<=num){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
	
}