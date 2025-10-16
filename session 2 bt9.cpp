#include <stdio.h>

#include <math.h>
int main() {
	int a = 3;
	int b = 4; 
	int c = 5; 
	double A;
	A = ( pow(a, 3) + pow(b, 2) + 2 * c) + sqrt(a + b - c );
	printf("Ket qua cua bieu thuc A la : %2f", A);
	return 0; 
}
