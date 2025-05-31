#include<iostream>
using namespace std;

int main(){
	int cont, num1, num2;
	cont = 1;
	num1 = 1;
	num2 = 0;
	
	while(cont <= 30){
		cout << num1 << endl;
		num1 = num1 + num2;
		num2 = num1 - num2;
		cont = cont + 1;
	}
	return 0;
}