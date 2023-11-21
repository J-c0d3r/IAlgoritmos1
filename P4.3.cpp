#include <iostream>
using namespace std;

int main()
{

	int num = 0, maior = 0, menor = 0;

	cout << "Entre com um número(-9999 para sair)" << endl;
	cin >> num;

	while(num != -9999)
	{

		if(num >= maior)
		{
			maior = num;

		}

		if(menor == 0 && (num >= 0 || num < 0))
		{
			menor = num;
		}
		else if(menor >= num)
		{
			menor = num;
		}


		cout << "Entre com um número(-9999 para sair)" << endl;
		cin >> num;
	}

	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;

	return 0;
}
