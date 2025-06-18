#include<iostream>
using namespace std;

int main(){
	int n;
	do{
		cout << "Digite a quantidade de numeros: ";
		cin >> n;
		if(n < 1 || n > 20){
			cout << "Valor menor que 20 e que seja positivo. " << endl;
		}
	}while(n < 1 || n > 20);
	int nums[n];
	for(int i = 1;i <= n;i++){
		cout << "Digite o valor do " << i << ". numero: ";
		cin >> nums[i];
	}
	return 0;
}