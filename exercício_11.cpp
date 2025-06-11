#include<iostream>
using namespace std;

int main(){
	int cont,num1,num2,n,numMax,numMin,tot,totP,totN,n1;
	cout << "Digite a quantidade de numeros: ";
	cin >> n;	
	n1 = n;   
	cont = n;	
	while(n < 1 || n > 20){
	   cout << "Digite a quantidade de numeros(entre 1 e 20): ";
	   cin >> n;	
	   n1 = n;
	   cont = n;
	};
	
	while(cont >= 1){
	num2 = num1;	
	cout << "Digite o valor do numero: ";
	cin >> num1;
	
	if(num1 >= num2){
		numMax = num1;
	}else if (num2 >= num1){
		numMax = num2;
	}
	
	if(num1 < num2){
		numMin = num1;
	}else if (num2 <= num1){
		numMin = num2;
	}
	
	tot = tot + num1;
		
	if(num1 > 0){
		totP++;
	}else if(num1 < 0){
		totN++;
	}
	cont = cont - 1;;
	}
	cout << "O maior valor eh: " << numMax << endl;
	cout << "O menor valor eh: " << numMin << endl;
	cout << "A soma dos valores eh: " << tot << endl;
	cout << "A media aritmetica eh: " << (tot/n1) << endl;
	cout << "A porcentagem dos valores positivos: " << (tot/totP) * 100 << endl;
	cout << "A porcentagem dos valores negativos: " << (tot/totN) * 100 << endl;
}