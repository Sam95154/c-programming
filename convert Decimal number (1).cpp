#include <iostream>
using namespace std;
 
long decimalToOctal(long n);
int main() {
    long decimal;
    cout << "Enter a decimal number\n";
    cin >> decimal;
    cout << "Octal number : " << decimalToOctal(decimal);
     
    return 0;
}
 
// Function to convert a decinal number to octal number
long decimalToOctal(long n) {
    int remainder; 
    long octal = 0, i = 1;
  
    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    return octal;
}
