#include <iostream>  // padrão de entrada e saída no C++
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída
using namespace std;

int main()
{

	float mat[3][3], qntdI = 0;  
	int m,l, c;

	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 3; c++)
		{

			do
			{
				cout << "Entre com o valor" << endl;
				cin >> mat[l][c];
			}
			while(mat[l][c] != floor(mat[l][c]));

		}
	}

	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 3; c++)
		{
			m = mat[l][c];
			if(m % 2 != 0)
			{
				qntdI++;
			}
		}
	}

	cout << "Quantidade de valores impares: " << qntdI << endl;

	return 0;
}
