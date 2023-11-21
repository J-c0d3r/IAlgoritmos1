#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[50] , cont; //cont = continuação da repetição
	double qtotal, v1, v2, v3, v4, v5, vtot, qvend, qb; //quantidade total, valor total 1,2,3,4,5,valor total de todos, quantidades de vendas e quantidade de brigadeiros
	int qtt, qt, cod, qbj, qm, qtort, qcup; //quantidade de produtos, quantidade de cada produto, quantidade de beijinho, macaron,torta e cupcake
	qb = qtotal = v1 = v2 = v3 = v4 = v5 = vtot = qbj = qvend = qm = qtort = qcup = 0;
	
	do
	{	cout << "Você deseja entrar com os dados? (S para Sim e N para Não)" << endl;
		cin >> cont;
	}
	while(!(cont == 'S' || cont == 'N'));
	while(cont == 'S')
	{
		cout << "Entre com o nome." << endl;
		cin >> nome;
		cin.getline(nome, 50);
		cin.ignore(0);
		cout << "Entre com a quantidade de produtos:" << endl;
		cin >> qtt;
		for(int i = 1; i <= qtt; i++)
		{

			cout << "1- Brigadeiro, R$2,20" << endl;
			cout << "2- Beijinho, R$2,20" << endl;
			cout << "3- Macarons, R$4,50" << endl;
			cout << "4- Tortinha de Morango, R$3,95" << endl;
			cout << "5- Cupcake, R$5,00" << endl;
			cout << "Entre com o código dos produtos:" << endl;
			do
			{
				cin >> cod;
			}
			while(cod < 1 || cod > 5);
			cout << "Entre com a quantidade de cada produto:" << endl;
			do
			{
				cin >> qt;
			}
			while(qt < 0);
			if(cod == 1)
			{
				qb = qb + qt;
				v1 = v1 + 2.20 * qt;

				qtotal = qtotal + qt;
			}
			if(cod == 2)
			{
				qbj = qbj + qt;
				v2 = v2 + 2.20 * qt;
				qtotal = qtotal + qt;
			}
			if(cod == 3)
			{
				qm = qm + qt;

				qtotal = qtotal + qt;
				v3 = v3 + 4.50 * qt;
			}
			if(cod == 4)
			{
				qtort = qtort + qt;
				v4 = v4 + 3.95 * qt;
				qtotal = qtotal + qt;
			}
			if(cod == 5)
			{
				qcup = qcup + qt;
				v5 = v5 + 5.00 * qt;
				qtotal = qtotal + qt;
			}
		}
		cout << "Você deseja entrar com os dados? (S para Sim e N para Não)" << endl;
		do
		{
			cin >> cont;
		}
		while(!(cont == 'S' || cont == 'N'));
	}
	vtot = vtot + v1 + v2 + v3 + v4 + v5;
	qvend = qvend + qbj + qm + qtort + qcup;
	cout << fixed << setprecision(2);
	if(qvend != 0)
		cout << "O percentual de venda de brigadeiros foi de: " << (100.0 * qb) / qvend << "%" << endl;
	else cout << "Não houve vendas" << endl;
	if(qtotal != 0)
		cout << "A média de macarons comprados foi de: " << qm / qtotal << endl;
	else cout << "Não houve vendas" << endl;
	if(vtot != 0)
		cout << "O valor total arrecadado nas vendas foi de: " << vtot << endl;
	else cout << "Não houve vendas" << endl;
	if(qb > qbj && qb > qm && qb > qtort && qb > qcup)
		cout << "O codigo de maior pedido foi 1" << endl;
	if(qbj > qb && qbj > qm && qbj > qtort && qbj > qcup)
		cout << "O codigo de maior pedido foi 2" << endl;
	if(qm > qb && qm > qbj && qm > qtort && qm > qcup)
		cout << "O codigo de maior pedido foi 3" << endl;
	if(qtort > qb && qtort > qbj && qtort > qm && qtort > qcup)
		cout << "O codigo de maior pedido foi 4" << endl;
	if(qcup > qb && qcup > qbj && qcup > qm && qcup > qtort)
		cout << "O codigo de maior pedido foi 5" << endl;


	return 0;
}
