#include <iostream>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	string nome;
	float n1,n2,n3, media;
	
	cout << "Entre com o nome" << endl;
	cin >> nome;
	cout << "Entre com as 3 notas separadas por espaço" << endl;
	cin >> n1 >> n2 >> n3;
	
	media=(n1+n2+n3)/3;
	
	if(media>=8){
		cout << nome << endl;
		cout << media << endl;
		cout << "APROVADO" << endl;
	}else{
		cout << nome << endl;
		cout << media << endl;
		cout << "NÃO APROVADO" << endl;
	}
	
	
	return 0;
}
