#include <iostream>

using namespace std;

int main(){
	
	int idade;
	
	cout << "Entre com a idade do atleta" << endl;
	cin >> idade;
	
	switch(idade){
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		cout << "Maternal" << endl;		
		break;			
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		cout << "Infantil" << endl;		
		break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		cout << "Juvenil" << endl;
		break;
		case 16:
		case 17:
		case 18:
		cout << "Pleno" << endl;				
		break;
		case 19:
		case 20:
		case 21:
		cout << "Sênior" << endl;
		break;
		default:
		cout << "Não classificado!" << endl;
	}
	
	
	
	return 0;
}