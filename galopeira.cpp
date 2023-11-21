#include <iostream>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	
	cout << fixed << setprecision(2);
	int C=0;
	char pala[10000];
	clock_t Ini=0, Fim=0, Dec=0,Time=0;   
	   	
	cin >> C;
	
	for(int i=0;i<C;i++){
		
		cin >> pala;
		for(int j=0;j<strlen(pala) - 1;j++){
			Time += (1.0 / 100.0);
		}
		cout << Time << endl;
		
	}
	
	return 0;
}