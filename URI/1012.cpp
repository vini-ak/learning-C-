#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a,b,c,triangulo,circulo,trapezio,quadrado, retangulo;
	cin >> a >> b >> c;
	triangulo = (a * c)/2;
	printf("TRIANGULO: %.3f\n", triangulo);
	circulo = 3.14159 * pow(c, 2);
	printf("CIRCULO: %.3f\n", circulo);
	trapezio = ((a+b)*c)/2;
	printf("TRAPEZIO: %.3f\n", trapezio);
	quadrado = pow(b,2);
	printf("QUADRADO: %.3f\n", quadrado);
	retangulo = a*b;
	printf("RETANGULO: %.3f\n", retangulo);
	return 0;
}