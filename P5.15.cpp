#include <iostream>  // padr�o de entrada e sa�da no C++
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da
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
