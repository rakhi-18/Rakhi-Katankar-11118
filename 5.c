// Program demonstrating data types and format specifiers
#include <stdio.h>

int main() {
    // Basic Numeric Types
    int a = 25;
    float b = 1500.75;
    double c = 3.1415926535;
    
    // Character Types
    char d = 'A';

    // Long long for big integers
    long long e = 98765432102345;

    printf("Format specifier %%d   Integer:          %d\n", a);
    printf("Format specifier %%f   Float (Default):  %f\n", b);
    printf("Format specifier %%.xf Float (Custom):   %.2f\n", b); // to only print 2 decimal places
    printf("Format specifier %%lf  Double:           %lf\n", c);
    
    printf("Format specifier %%c   Character:        %c\n", d);

    printf("Format specifier %%lld Long Integer:     %lld\n", e);

    return 0;
}