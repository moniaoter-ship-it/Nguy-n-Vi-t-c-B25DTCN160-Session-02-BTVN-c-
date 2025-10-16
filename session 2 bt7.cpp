#include <stdio.h>

int main () {
    // khai bao va khoi tao gia tri cho mot bien number
    int number = 12345;
    // Khai bao bien luu tru tong cac chu so
     int tong = 0;
      // Bien temp de thao tac voi number
        int temp = number;
    // Su dung phep chia lay du (%) va chia nguyen (/) de tach tung chu so
    // lay chu so nam
	// con 1234;	
    tong += temp % 10;
    temp = temp / 10; 
    // lay chu so bon
    // con 123;
    tong += temp % 10;
    temp = temp / 10; 
    // lay chu so ba
    // con 12;
    tong += temp % 10;
    temp = temp / 10;
    // lay chu so hai
    // con 1;
    tong += temp % 10;
    return 0;
}
     
    
    
    
