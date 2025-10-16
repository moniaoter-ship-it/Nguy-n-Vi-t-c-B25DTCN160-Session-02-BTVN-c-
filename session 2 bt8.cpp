#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien number
    int number = 12345;
    // Bien luu ket qua sau khi dao nguoc
    int result = 0;
    // Bien tam de thao tac voi number
    int temp = number;
    // Su dung phep chia lay du (%) va chia nguyen (/) de dao nguoc so
    while (temp > 0) {
    int digit = temp % 10;       
    result = result * 10 + digit; 
    temp = temp / 10;            
    }
    return 0;
}
