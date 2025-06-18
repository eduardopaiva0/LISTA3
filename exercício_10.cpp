#include<iostream>
using namespace std;

int main(){
	int num1,num2,maiorPosi,cont;
	double somaValor;
	cont = 1;
	maiorPosi = 0;
	somaValor = 0;
	while(cont <= 10){
		num2 = num1;
		do{
		   	cout << "Digite o valor do numero: ";
		   	cin >> num1;
			if(num1 < 1){
			   	cout << "Valor invalido, digite valores apenas positivo. " << endl;
  	   		}
   		}while(num1 < 1);
   		
   		if(num1 >= num2){
			maiorPosi = num1;		   
		}
		somaValor = somaValor + num1;
   		cont++;
	}
		cout << "O maior valor eh: " << maiorPosi << endl;
		cout << "A soma dos valores digitados eh: " << somaValor << endl;
		cout << "A media aritimetica eh: " << (somaValor/10) << endl;
		return 0;
}