#include <iostream>

using namespace std;

int main(){
	int tempo, anos, meses, dias;
	cin >> tempo;
	anos = tempo / 365;
	cout << anos << " ano(s)\n";
	tempo = tempo % 365;
	meses = tempo / 30;
	cout << meses << " mes(es)\n";
	dias = tempo % 30;
	cout << dias << " dia(s)\n";
}