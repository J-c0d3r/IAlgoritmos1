#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float tempo, velmedia, distancia, qntdlitros;
	
	cout << "Qual foi o tempo gasto na viagem?" << endl;
	cin >> tempo;
	cout << "Qual foi a velocidade média?" << endl;
	cin >> velmedia;
	
	distancia=tempo*velmedia;
	qntdlitros=distancia*11;
	
	cout << "Velocidade média é: " << velmedia << endl;
	cout << "O tempo gasto é: " << tempo << endl;
	cout << "A distância percorrida é: " << distancia << endl;
	cout << "A quantidade de litros que foi: " << qntdlitros << endl;			
	
	return 0;
}