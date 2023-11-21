#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float pe, polegada, jarda, milha;	
	
	cout << "Entre com a medida dos pés" << endl;
	cin >> pe;
	
	polegada=pe*12;
	jarda=pe/3;
	milha=jarda/1760;
	
	cout << "Polegadas: " << polegada << endl;
	cout << "Jardas: " << jarda << endl;
	cout << "Milha: " << milha << endl;
	
	return 0;
}