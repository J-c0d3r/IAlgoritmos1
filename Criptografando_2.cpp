//Juan
#include <iostream>

using namespace std;

int main()
{

	int N = 0;
	char a;

	cin >> N;
	cin >> a;

	for(int i = 0; i < N; i++)
	{

		cout << a;
		a++;
		if(a > 'Z')
		{
			a = 'A';
		}

	}



	return 0;
}
