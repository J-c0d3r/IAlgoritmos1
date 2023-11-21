#include <iostream>

using namespace std;

int main(){
	
	int n1,n2,n3,n4,n5;
	float media;
	
	cout << "Entre com as 4 notas do aluno" << endl;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	media=(n1+n2+n3+n4)/4;
	
	if(media>=7){
		cout << "Aprovado" << endl;
	}else if(media<7){
		cout << "Entre com a nota do exame" << endl;
		cin >> n5;
		media=(media+n5)/2;
		if(media>=5){
			cout << "Aprovado em exame" << endl;
		}else{
			cout << "Reprovado em exame" << endl;
		}
	}
	
	return 0;
}