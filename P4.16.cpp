//Juan - GEC - 1530


#include <iostream> //inclui a biblioteca de input e ouput do c++

using namespace std; //para nao ter quer ficar usando std::cout

int main()  //main principal
{

	float peso = 0, maiorP = 0, menorP = 7000; //maiorP é o maior peso; menorP é o menor peso
	int iden = 0, idenM = 0, idenm = 0; //iden= identificação; idenM= identificação do maior; idenm= identificação do menor

	for(int i = 0; i < 90; i++) 	//for para contar os noventas bois
	{

		cin >> iden;   //pede a identificação
		do
		{
			cin >> peso; //pede o peso
		}
		while(peso <= 0); //verifica se o peso é menor ou igual a 0, para crítica

		if(peso >= maiorP)  //verifica se o maior peso
		{
			maiorP = peso; //atribui o peso atual a variavel maiorP
			idenM = iden; //atribui a identificação atual para a variavel idenM
		}

		if(peso <= menorP) //menorP==0 serve para a primeira verificação,verifica se o peso atual é menor que o anterior
		{
			menorP = peso; //menorP recebe o valor do peso atual
			idenm = iden; //idenm recebe a identidade do menor
		}
	}



	cout << "Maior peso: " << idenM << " com " << maiorP << "@"  << endl; //imprime o peso e a identificação do maior
	cout << "Menor peso: " << idenm << " com " << menorP << "@" << endl;  //imprime o peso e a identificação do menor


	return 0; //returna para o sistema 0
}
