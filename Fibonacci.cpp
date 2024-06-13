#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, i;
	cout<<"SERIE FINOBACCI"<<endl;
	cout<<"Introduzca el tope: ";
	cin>>n;
	i=1;
	a=0;
	b=1;
	while (i<=n){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
	
}