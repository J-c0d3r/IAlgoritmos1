#include<iostream> 
#include<iomanip> 
#include<cmath> 

using namespace std;

int main(){
	
	char nome[40];
	double sal_fixo, total_vendas,total;
	
	cin >> nome;
	cin >> sal_fixo;
	cin >> total_vendas;
	
	total = sal_fixo + (total_vendas * 0.15 );
	
	cout << fixed << setprecision(2) << "TOTAL = R$ " <<  total << endl;
	
	return 0;
	
}