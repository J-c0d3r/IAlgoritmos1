#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float iluminacao,area, m1, m2;
	
	cout << "Entre com a largura" << endl; 
	cin >> m1;
	cout << "Entre com o comprimento" << endl;
	cin >> m2;
	
	area=m1*m2;
	iluminacao=area*18;
	
	cout << "A �rea � " << area << endl;
	cout << "A iluminacao que dever� ser utiliza ser� " << iluminacao << endl;		
	
	return 0;
}