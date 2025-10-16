#include <stdio.h>

#include <math.h>  
int main() {
    float a = 2, b = 3, c = 4; 
    float S;                  
    S = (a * a + sqrt(b * b + 4 * a * c)) / (2 * a) - (pow(b, 3) / pow(c, 2)) + sqrt(fabs(a - b));
    printf("Gia tri cua S la: %.4f\n", S);
    return 0;
}
