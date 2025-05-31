#include<iostream>
using namespace	std;

int main(){
	double num1;
	do{
	cout << "Digite um valor positivo: ";
	cin >> num1;
	}while(num1 < 0);
	return 0;	
}