#include <iostream>
#include "misclases.h"

using namespace std;
int main(){
	ISSS *d=new ISSS();
	Renta *r=new Renta();
	AFP *afp=new AFP();
	float s;
	
	cout<<"Ingrese su salario: "<<endl; 
	cin>>s;
	
	cout<<"*********DESCUENTOS************"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"Total ISSS: $"<<d->getCalculo(s)<<endl;;
	cout<<"Total renta: $"<<r->getCalculo(s)<<endl;;
	cout<<"Total AFP: $"<<afp->getCalculo(s)<<endl;;
	return 0;
}