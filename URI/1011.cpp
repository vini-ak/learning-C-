#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double raio, vol;
	cin >> raio;
	vol = 4.0/3 * 3.14159 * pow(raio, 3);
	printf("VOLUME = %.3f\n", vol);
	return 0;
}