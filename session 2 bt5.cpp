#include<stdio.h>

int main() {
    // khai bao va khoi tao gia tri cho ba bien
    // bien so nguyen thu nhat
    int a = 5;
    // bien so nguen thu hai
    int b = 10;
    // bien so thuc
    float c = 3.5;
    // tinh tong cua ca ba so va luu tru vao mot bien kieu float
    float sum = a + b + c;
    // tinh tong phan nguyen cua ba so va luu tru vao mot bien kieu int
    int tongnguyen = a + b + (int)c;	
    return 0;
}
