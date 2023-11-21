#include <iostream>

using namespace std;

int main(){
	
	double sal, sm;
	
	cout << "Entre com os salarios atual e minimo" << endl;
	
	cin >> sal >> sm;
	
	if(sal<sm*10)
		cout << "Salario novo R$ " << sal*1.05 << endl; 				 		
	else if((sal<sm*20))
		cout << "Salario novo R$ " << sal*1.02 << endl;
	else
		cout << "Salario novo R$ " << sal*1.015 << endl;
	
	
	cout << "teste"<< endl;
	
	return 0;
}