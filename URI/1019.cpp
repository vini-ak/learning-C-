#include <iostream>

using namespace std;

int main(){
	int tempo, horas, minutos, segundos;
	cin >> tempo;
	horas = tempo / 3600;
	tempo = tempo % 3600;
	minutos = tempo / 60;
	segundos = tempo % 60;
	cout << horas << ":" << minutos << ":" << segundos << "\n";
}