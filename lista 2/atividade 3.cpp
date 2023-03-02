#include <iostream> 

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	cout << "Números primos menores ou iguais a: " << num << endl;
	
	for (int i = 2; i <= num; i++){
	
		bool is_primo = true;
		
		for (int num = 2; num < i; num++) {
			if (i % num == 0) {
				is_primo = false;
				
				break;
			}
		}
		
		if (is_primo) {
			cout << i << endl;
		}
	}
	
	return 0;
}
