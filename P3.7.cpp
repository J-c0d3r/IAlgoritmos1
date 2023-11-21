#include <cctype>
#include <iostream>

using namespace std;

int main(){
	
	char letra;
	
	cout << "Entre com uma letra" << endl;
	cin >> letra;
	
	letra=toupper(letra);
	if((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U')){
		cout << "Vogal" << endl;
	}else{
		cout << "Consoante" << endl;
	}
	
	
	return 0;
}
