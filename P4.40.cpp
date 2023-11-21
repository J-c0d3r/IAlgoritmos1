#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float pi,S=0;
	float num=1, den=1;
	int sinal=1;
	
	for(int i=0;i<51;i++){
		
	S=S+((num/pow(den,3))*sinal);
	den=den+2;
	sinal=sinal*-1;
	}
	pi=pow(S*32,1.0/3.0);
	cout<<"Resultado final: "<< pi <<endl;
	
	return 0;
}