#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1;
	
	cout << "Entre com um n�mero" << endl;
	cin >> num1;
	
	cout << "O n�mero inteiro � " << floor(num1) << endl;
	cout << "O n�mero fracionario � " << num1 << endl;
	cout << "O n�mero arrendondado para cima � " << ceil(num1) << endl;
	
	return 0;
}