#include<iostream>
using namespace std;

int main(){
	int cont, soma;
	cont = 1;
	soma = 0;
	while(cont <= 100){
		soma = soma + cont;
		cont = cont + 1;
	}
	cout << "A soma dos valores dos numeros inteiros positivos de um a 100 eh: " << soma;
	return 0;
}