#include <iostream>
using namespace std;

int main(){
	int valor, cem, cinq, vinte, dez, cinco, dois, um;
	cin >> valor;
	cout << valor << '\n';
	cem = valor / 100;
	valor = valor % 100;
	printf("%d nota(s) de R$ 100,00\n", cem);
	cinq = valor / 50;
	valor = valor % 50;
	printf("%d nota(s) de R$ 50,00\n", cinq);
	vinte = valor / 20;
	valor = valor % 20;
	printf("%d nota(s) de R$ 20,00\n", vinte);
	dez = valor / 10;
	valor = valor % 10;
	printf("%d nota(s) de R$ 10,00\n", dez);
	cinco = valor / 5;
	valor = valor % 5;
	printf("%d nota(s) de R$ 5,00\n", cinco);
	dois = valor / 2;
	valor = valor % 2;
	printf("%d nota(s) de R$ 2,00\n", dois);
	um = valor / 1;
	printf("%d nota(s) de R$ 1,00\n", um);
}