#include<iostream>

using namespace std;

int main(){
	
	int z1;
	//float z#;
	
	cout << "Escreva um numero inteiro" << endl;
	cin >> z1;
	
	if((z1 % 2 != 0) && (z1 % 3 == 0)){
		cout << " True " << endl;
	}
	else{
		cout << " False " << endl;
	}
	return 0;
}

