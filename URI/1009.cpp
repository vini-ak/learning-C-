#include <iostream>
using namespace std;

int main(){
	string nome;
	double salario, vendas, salario_final;
	cin >> nome;
	cin >> salario;
	cin >> vendas;
	salario_final = salario + (0.15 * vendas);
	printf("TOTAL = R$ %.2f\n", salario_final);
	return 0;
}