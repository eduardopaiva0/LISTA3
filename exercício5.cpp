#include<iostream>
using namespace std;

int main(){
	double num1, cont;
	cont = 1;
	do{
		cout << "Digite um valor positivo: ";
		cin >> num1;
	}while(num1 <= 0);
	
	while(cont <= 10){
		cout << num1 << " X " << cont << " = " << (num1*cont) << endl;
		cont = cont + 1;
	}
	return 0;
}