#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float area, r, pi=3.14159;
	
	cout << "Entre com o valor do raio" << endl;
	cin >> r;
	
	area= pi*(pow(r,2));
	
	cout << "O resultado eh " << endl << area;
	
	
	return 0;
}