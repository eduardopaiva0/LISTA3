#include<iostream>
using namespace std;

int main(){
	double maiorVal,menorVal,quantValPosit,quantValNegat,somaVal,mediaArit;
	int n;
	somaVal = 0;
	quantValPosit = 0;
	quantValNegat = 0;
	do{
		cout << "Digite a quantidade de numeros: ";
		cin >> n;
		if(n < 1 || n > 20){
			cout << "Valor menor que 20 e que seja positivo. " << endl;
		}
	}while(n < 1 || n > 20);
	n--;
	int nums[n];
	for(int i = 0;i <= n;i++){
		cout << "Digite o valor do " << ++i << ". numero: ";
		cin >> nums[--i];
	}
	menorVal = nums[0];
	maiorVal = nums[0];
	
	for(int i = 0;i <= n;i++){
		if(nums[i] >= maiorVal){
			maiorVal = nums[i];
		}
	}
	
	for(int i = 0;i <= n;i++){
		if(nums[i] <= menorVal){
			menorVal = nums[i];
		}
	}

	for(int i = 0;i <= n;i++){
		somaVal = somaVal + nums[i];
	}
	
	for(int i = 0;i <= n;i++){
		if(nums[i] > 0){
			quantValPosit++;
		}
	}
	
	for(int i = 0;i <= n;i++){
		if(nums[i] < 0){
			quantValNegat++;
		}
	}
	
	cout << "O maior valor dos numeros digitados eh: " << maiorVal << endl;
	cout << "O menor valor dos numeros digitados eh: " << menorVal << endl;
	cout << "A soma dos valores digitados eh: " << somaVal << endl;
	cout << "A media aritmetica dos valores digitados eh: " << (somaVal/++n) << endl;
	cout << "A Porcentagem de valores positivos digitados eh: " << (quantValPosit/n) * 100 << "%" << endl;
	cout << "A Porcentagem de valores negativos digitados eh: " << (quantValNegat/n) * 100 << "%" << endl;
	return 0;
}