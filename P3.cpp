#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int main(){
	
       setlocale(LC_ALL, "Portuguese");
	   float altura, peso;
	   char sx;
	   	
	   cout << "Entre com altura(metros)" << endl;
	   cin >> altura;	   
	   cout << "Entre com o sexo(F/M)" << endl;
	   cin >> sx;
	   
	   if(sx=='M'){
		   peso=(72.7*altura)-58;
	   }else{
		   peso=(62.1*altura)-44.7;
	   }
	
	   cout << "O seu peso ideal é: " << peso << endl;
	   
	
	return 0;
}