//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int a, b, hcf, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i; 
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);

    return 0;
}
