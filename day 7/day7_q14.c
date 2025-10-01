//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Convert to lowercase for simplicity
    ch = tolower(ch);

    // Check vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||ch == 'u')
        printf("%c is a Vowel\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a Consonant\n", ch);
    else
        printf("%c is not an alphabet\n", ch);

    return 0;
}
