#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	//comprimento C=2*pi*R
	//Area A=4*piR^2
	//Volume V=4*pi*R^3/3
	float raio, comp, area, vol, pi=3.14;
	cout << "Entre com o valor do raio" << endl;
	cin >> raio;
	
	comp=2*raio*pi;
	area=4*pi*pow(raio,2);
	vol=(4*pi*pow(raio,3))/3;
	
	cout << "O comprimento da esfera é: " << comp << endl;
	
	cout << "A área da esfera é: " << area << endl;
	
	cout << "O volume da esfera é: " << vol << endl;		
	
	return 0;
}