#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{

	//cout << fixed << setprecision(2);

	int N=0, X=0, in=0 , out=0;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		cin >> X;
		if(X >= 10 && X <= 20)
		{
			in++;
		}
		else
		{
			out++;
		}
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;

	return 0;
}
