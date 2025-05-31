#include<iostream>
using namespace std;

int main(){
	double num1, num2;
	cout << "Digite o primeiro valor: ";
	cin >> num1;
	cout << "Digite o segundo valor maior que o primeiro: ";
	cin >> num2;
	while(num1 >= num2){
		cout << "O segundo valor tem que ser maior que o primeiro: ";
		cin >> num2;
	}
	return 0;
}