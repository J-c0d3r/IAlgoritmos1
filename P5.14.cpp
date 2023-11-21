#include <iostream>

using namespace std;

int main(){
	
	int matA[3][5], matB[3][5], matC[3][5], l=0,c=0;
	
	cout << "Primeira matriz" << endl;
	for(l=0;l<3;l++){
		for(c=0;c<5;c++){
			cout << "Entre com o valor" << endl;
			cin >> matA[l][c];
		}	
	}
	
	cout << "Segunda matriz" << endl;
	for(l=0;l<3;l++){
		for(c=0;c<5;c++){
			cout << "Entre com o valor" << endl;
			cin >> matB[l][c];
		}	
	}
	
	for(l=0;l<3;l++){
		for(c=0;c<5;c++){
			matC[l][c]=matA[l][c]+matB[l][c];
			cout << "Resultado da soma: " << matC[l][c] << endl;
		}	
	}
	
	return 0;
}