#include <iostream>

using namespace std;

int main(){
	double r;
	cin >> r;
	if (r >= 0.0 && r <= 25.0){
		cout << "Intervalo [0,25]\n";
	}
	else if (r > 25.0 && r <= 50.0) {
		cout << "Intervalo (25,50]\n";
	}
	else if (r > 50.0 && r <= 75.0) {
		cout << "Intervalo (50,75]\n";
	}
	else if (r > 75.00 && r <= 100.0) {
		cout << "Intervalo (75,100]\n";
	}
	else{
		cout << "Fora de intervalo\n";
	}
}