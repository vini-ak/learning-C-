#include <iostream>
using namespace std;

int main(){
	int numero, horas;
	double valor_hora, salario;
	cin >> numero;
	cin >> horas;
	cin >> valor_hora;
	cout << "NUMBER = " << numero << '\n';
	salario = valor_hora * horas;
	printf("SALARY = U$ %.2f\n", salario);
	return 0;
}