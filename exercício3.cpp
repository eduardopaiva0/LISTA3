#include<iostream>
using namespace std;

int main(){
	char sexo;
	do{
		cout << "Digite o seu sexo[M/F]: ";
		cin >> sexo;	
	}while((sexo != 'M') && (sexo != 'F'));
	return 0;
}