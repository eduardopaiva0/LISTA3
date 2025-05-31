#include<iostream>
using namespace std;

int main(){
	double num1, interv, fim, cont;
	do{
		cout << "Digite um valor positivo: ";
		cin >> num1;
	}while(num1 <= 0);
	cout << "Digite o valor que a tabuada deve parar: ";
	cin >> fim;
	
	do{
		cout << "Digite o valor o intervalo (esse valor deve ser menor que o numero final): ";
		cin >> interv;
	}while(interv >= fim);
	cont = interv;
	while(cont <= fim){
		cout << num1 << " X " << cont << " = " << (num1*cont) << endl;
		cont = cont + interv;
	}
	return 0;
}