#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, velmedia, distancia, qntdlitros;
	
	cout << "Qual foi o tempo gasto na viagem?" << endl;
	cin >> tempo;
	cout << "Qual foi a velocidade m�dia?" << endl;
	cin >> velmedia;
	
	distancia=tempo*velmedia;
	qntdlitros=distancia*11;
	
	cout << "Velocidade m�dia �: " << velmedia << endl;
	cout << "O tempo gasto �: " << tempo << endl;
	cout << "A dist�ncia percorrida �: " << distancia << endl;
	cout << "A quantidade de litros que foi: " << qntdlitros << endl;			
	
	return 0;
}