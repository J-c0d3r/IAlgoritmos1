#include <iostream>

using namespace std;

int main(){
	
	int idade, mI=0, nC=0;
    //string estado;
	char curso;
	char estado[3];
	//string curso;
	
	cout << "Entre idade do candidato" << endl;
	cin >> idade;
	
	while(idade!=0){
		cin.ignore();
		cout << "Entre com o estado de origem(MG, SP, RJ...)" << endl;
		//cin >> estado;
		cin.getline(estado,2);
		cout << "Entre a sua formação(T-Técnico, M-Médio, S-Supletivo)" << endl;
		cin >> curso;
		//cin >> curso;
		if(idade>mI){
			mI=idade;
		}
		if((estado=='MG') && (curso=='T')){
			nC++;
		}
		cout << "Entre idade do candidato" << endl;
		cin >> idade;
		
	}
	cout << "Maior idade: " << mI << endl;
	cout << "Numero de candidatos: " << nC << endl;
	
	return 0;
}