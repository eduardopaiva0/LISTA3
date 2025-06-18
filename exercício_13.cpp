#include<iostream>
using namespace std;

int main(){
	int cont,fat,fatorial;
	char s_n;
	s_n = 'S';
	fat = 0;
	
	while(s_n == 'S'){
		fat = 0;
		while(fat <= 0){
			cout << "Digite o valor positivo a ser calculado: ";
			cin >> fat;
			fatorial = fat;
			cont = fat;
		}
		while(fat > 1){
			fatorial = fatorial * (fat - 1);
			fat = fat - 1;
			
		}
		cout << fatorial << endl;
		do{
		cout << "Quer fazer outro calculo?(S/N): ";
		cin >> s_n;
		}while(s_n != 'S' && s_n != 'N');
		}
		return 0;
}