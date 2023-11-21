#include <iostream>
#include <iomanip>

using namespace std;

int main()
{


	double sal, nsal , reaju;
	int porc;

	cin >> sal;

	if(sal >= 0 && sal <= 400.00 )
	{
		nsal = sal * 1.15;
		reaju = sal * 0.15;
		porc = 15;
	}
	else if(sal > 400.00 && sal <= 800.00)
	{
		nsal = sal * 1.12;
		reaju = sal * 0.12;
		porc = 12;
	}
	else if(sal > 800.00 && sal <= 1200.00)
	{
		nsal = sal * 1.10;
		reaju = sal * 0.10;
		porc = 10;
	}
	else if(sal > 1200.00 && sal <= 2000.00)
	{
		nsal = sal * 1.07;
		reaju = sal * 0.7;
		porc = 7;
	}
	else if(sal > 2000.00)
	{
		nsal = sal * 1.04;
		reaju = sal * 0.04;
		porc = 4;
	}
	cout << fixed << setprecision(2);
	cout << "Novo salario: " << nsal << endl;
	cout << "Reajuste ganho: " << reaju << endl;
	cout << "Em percentual: " << porc << " %" << endl;

	return 0;
}
