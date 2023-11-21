//Juan

#include <iostream>

using namespace std;

int main()
{

	char mat[26][26];
	char a = 'A', b, d;
	int l = 0, c = 0;

	cin >> b;
	cin >> d;

	for(int i = 0; i < 26; i++)
	{
		if(i > 0)
		{
			a = mat[i - 1][0];
			a++;
		}
		for(int j = 0; j < 26; j++)
		{

			mat[i][j] = a;
			a++;
			if(a > 'Z')
			{
				a = 'A';
			}
		}

	}

	int k = 0;

	do
	{
		l++;
		k++;

	}
	while(b != mat[k][0]);

	k = 0;
	do
	{

		c++;
		k++;

	}
	while(d != mat[0][k]);

	for(int i = 0; i < 26; i++)
	{
		for(int j = 0; j < 26; j++)
		{

			cout << mat[i][j];

		}
		cout << endl;
	}

	cout << mat[l][c];

	return 0;
}
