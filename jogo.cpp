#include<iostream>
using namespace std;

int main(){
	int in1,in2,numOcult,numMax,numMin,cont;
	numMax = 100;
	numMin = 1;
	numOcult = 0;
	while((numOcult != in1) || (numOcult != in2)){
		if(numOcult == in1){
			cout << "Jogador 1 perdeu";
		}else if (numOcult == in2){
			cout << "Jogador 2 perdeu";
		}
		while((numOcult < numMin) || (numOcult > numMax)){
		cout << "Digite o valor oculto entre 1 e 100: ";
		cin >> numOcult;
		}
		while((numOcult > numMin) || (numOcult < numMax)){
		cout << "Jogador 1 digite um valor entre " << numMin << " e " << numMax << " : ";
		cin >> in1;
		}
		if(in1 > numOcult){
			numMax = in1;
		}else if(in1 < numOcult){
			numMin = in1;
		}else{
			cout << "Jogador 1 perdeu";
			numOcult = 0;
		}
		
		while(((numOcult > numMin) || (numOcult < numMax))){
		cout << "Jogador 2 digite um valor entre " << numMin << " e " << numMax << " : ";
		cin >> in2;
		}
		if(in2 > numOcult){
			numMax = in2;
		}else if(in2 < numOcult){
			numMin = in2;
		}else{
			cout << "Jogador 2 perdeu";
			numOcult = 0;
		}
		
	}
}