#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout << fixed << setprecision(2);
	int X,Y;
	double A,B,dol=3.9123,eur=4.4859, total;
	
	cin >> X >> Y >> A >> B;
	
	A=A/7;//pego o valor e divido por 7
	A=A*X;//multiplico pelo numero de dias
	A=A*dol;//converto para reais
	
	B=B/7;
	B=B*Y;
	B=B*eur;
	
	total=(A+B)*1.25;
	
	cout << total << endl;
	
	return 0;		
}