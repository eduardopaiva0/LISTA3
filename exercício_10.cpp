#include<iostream>
using namespace std;

int main(){
	int cont,fat,fatorial;
	char s_n = 's';
	fat = 0;
	
	while(s_n == 's' || s_n == 'S'){
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
		while(s_n == 's' || s_n == 'S'){
			cout << "Quer fazer outro calculo? (S/N): ";
			cin >> s_n;
		}
	}
}
