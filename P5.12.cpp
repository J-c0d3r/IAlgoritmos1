#include <iostream>
#include <locale>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Portuguese");
	int Iden = 0, dese = 0;
	int qntd[37];

	for(int i = 0; i < 37; i++)
	{

		cout << "Entre com a quantidade de lugares disponiveis no " << i + 1 << "� v�o" << endl;
		cin >> qntd[i];

	}

	cout << "Entre com o n�mero da identidade" << endl;
	cin >> Iden;

	while(Iden != 9999)
	{

		cout << "Qual o n�mero do v�o desejado?(de 0 a 36)" << endl;
		cin >> dese;
		if(qntd[dese] > 0)
		{
			cout << "Seu n�mero de identidade: " << Iden << endl;
			cout << "Seu n�mero de v�o: " << qntd[dese] << endl;
			qntd[dese]--;
		}
		else
		{
			cout << "N�o existe mais lugares disponiveis!" << endl;
		}

		cout << "Entre com o n�mero da identidade" << endl;
		cin >> Iden;

	}

	return 0;
}
