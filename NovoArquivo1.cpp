#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double x, gamma=3.2, y, w, resul; 
	
	cout << "entre com x" << endl; 
	cin >> x;
	cout << "entre com y" << endl;
	cin >> y; 
	cout << "entre com  w" << endl;
	cin >> w;
	
	resul = sqrt(pow((abs(x)+gamma)*y, w));
	
	cout << "o resultado é " << resul << endl;
	
	return 0;
}