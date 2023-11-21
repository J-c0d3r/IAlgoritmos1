#include <iostream>
#include <locale>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");
	string nome;
	int nDiaria = 0, totalHp=0, totalHt=0, totalD=0;;

	for(int i = 0; i < 200; i++)
	{
		cout << "Entre com o seu nome" << endl;
		cin >> nome;
		cout << "Entre com número de diárias" << endl;
		cin >> nDiaria;
		while(nDiaria == 0)
		{
			cout << "Entre com uma diária maior que 0" << endl;
			cin >> nDiaria;
		}
		
		if(nDiaria<15){
			totalHp=((300*nDiaria)+20)*1.0;
		}
		if(nDiaria==15){
			totalHp=((300*nDiaria)+14)*1.0;
		}
		if(nDiaria>15){
			totalHp=((300*nDiaria)+12)*1.0;
		}
		
		cout << "Nome: " << nome << endl;
		cout << "Total a pagar: R$ " << totalHp << endl;		
		totalHt=(totalHt+totalHp)*1.0;
		totalD=totalD+nDiaria;
	}

	cout << "Ganho total pelo hotel: " << totalHt << endl;
	cout << "Total de diárias: " << totalD << endl;
	

	return 0;
}

