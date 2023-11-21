#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1;
	
	cout << "Entre com um número" << endl;
	cin >> num1;
	
	cout << "O número inteiro é " << floor(num1) << endl;
	cout << "O número fracionario é " << num1 << endl;
	cout << "O número arrendondado para cima é " << ceil(num1) << endl;
	
	return 0;
}