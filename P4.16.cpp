//Juan - GEC - 1530


#include <iostream> //inclui a biblioteca de input e ouput do c++

using namespace std; //para nao ter quer ficar usando std::cout

int main()  //main principal
{

	float peso = 0, maiorP = 0, menorP = 7000; //maiorP � o maior peso; menorP � o menor peso
	int iden = 0, idenM = 0, idenm = 0; //iden= identifica��o; idenM= identifica��o do maior; idenm= identifica��o do menor

	for(int i = 0; i < 90; i++) 	//for para contar os noventas bois
	{

		cin >> iden;   //pede a identifica��o
		do
		{
			cin >> peso; //pede o peso
		}
		while(peso <= 0); //verifica se o peso � menor ou igual a 0, para cr�tica

		if(peso >= maiorP)  //verifica se o maior peso
		{
			maiorP = peso; //atribui o peso atual a variavel maiorP
			idenM = iden; //atribui a identifica��o atual para a variavel idenM
		}

		if(peso <= menorP) //menorP==0 serve para a primeira verifica��o,verifica se o peso atual � menor que o anterior
		{
			menorP = peso; //menorP recebe o valor do peso atual
			idenm = iden; //idenm recebe a identidade do menor
		}
	}



	cout << "Maior peso: " << idenM << " com " << maiorP << "@"  << endl; //imprime o peso e a identifica��o do maior
	cout << "Menor peso: " << idenm << " com " << menorP << "@" << endl;  //imprime o peso e a identifica��o do menor


	return 0; //returna para o sistema 0
}
