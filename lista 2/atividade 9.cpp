#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int nTabuada,nMaximo;
	
	cout <<"Escolha o n�mero para a tabuada que deseja:";
	cin>>nTabuada;
	cout<<"At� quanto quer multiplicar?";
	cin>>nMaximo;
	for(int i = 0; i <= nMaximo; i++){
	cout << nTabuada << "x" << i << "=" << (i*nTabuada) << endl;
	}
}
