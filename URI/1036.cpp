#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a, b, c, r1, r2, delta;
	cin >> a >> b >> c;
	delta = pow(b,2) - 4*a*c;
	if ((delta < 0) || (a == 0)) {
		cout << "Impossivel calcular\n";
	}
	else {
		r1 = (-b+sqrt(delta))/(2*a);
		printf("R1 = %.5f\n", r1);
		r2 = (-b-sqrt(delta))/(2*a);
		printf("R2 = %.5f\n", r2);
	}
}