#include <iostream>

using namespace std;

int main(){
	int dist;
	double litros, rend;
	cin >> dist;
	cin >> litros;
	rend = dist/litros;
	printf("%.3f km/l\n", rend);
	return 0;
}