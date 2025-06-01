#include<iostream>
using namespace std;

int main(){
	int cont1 = 1;
	int cont2 = 1;
	char tecla = 'a';
	while(cont1 <= 20){
		cout << "Aperte 'a' e 'enter' para ver a tabuada: ";
		cin >> tecla;
		if(tecla != 'a'){
			cont1 = 21;
			cont2 = 11;
		}
		while(cont2 <= 10){
			cout << cont1 << " X " << cont2 << " = " << (cont1 * cont2) << endl;
			cont2 = cont2 + 1;
		}
		cont1 = cont1 + 1;
		cont2 = 1;
	}
	return 0;
}