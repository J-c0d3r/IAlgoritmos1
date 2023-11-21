#include <iostream>
#include <iomanip>
using namespace std;

struct informacoes
{
	int matricula;
	string nome;
	float nota;

} info;


int main()
{
	cout << fixed << setprecision(2);
	float notaS = 0, menor = 10;
	int qntd = 0;
	string nome;

	cout << "Entre com a matricula" << endl;
	while((cin >> info.matricula) && info.matricula != -9999)
	{
		
		cout << "Entre com o nome" << endl;
		cin >> info.nome;

		cout << "Entre com a nota" << endl;
		cin >> info.nota;
		
		notaS += info.nota;
		qntd++;
		
		if(info.nota < menor)
		{
			menor = info.nota;
			nome = info.nome;
		}
		
		cout << "Entre com a matricula" << endl;
	}

	cout << "Media da turma: " << (notaS * 1.0) / (qntd * 1.0) << endl;
	cout << "Nome do aluno com menor nota: " << nome << endl;


	return 0;
}
