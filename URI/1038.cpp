#include <iostream>

using namespace std;

double menu(int opcao){
	if (opcao == 1) {
		return 4.00;
	}
	else if (opcao == 2){
		return 4.50;
	}
	else if(opcao == 3){
		return 5.00;
	}
	else if(opcao == 4){
		return 2.0;
	}
	else if(opcao == 5){
		return 1.50;
	}
}

int main(){
	int a,b;
	double total, preco;
	cin >> a >> b;
	preco = menu(a);
	total = b*preco;
	printf("Total: %.2f\n", total);
}