#include <iostream>
using namespace std;

int main(){
	int cod_a, cod_b, num_a, num_b;
	double valor_a, valor_b, total;
	cin >> cod_a >> num_a >> valor_a;
	cin >> cod_b >> num_b >> valor_b;
	total = (num_a * valor_a) + (num_b * valor_b);
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return 0;
}