#include <stdio.h>
#include "NumClass.h"

int main() {
    
    /*get 2 num from user*/
    int from, to, i;
    scanf("%d %d", &from, &to);
    
    /*
    print the result for all the function to number betwin the 2 number we get from user
    */
    printf("The Armstrong numbers are:");
    for (i = from; i <= to; i++) if (isArmstrong(i)) printf(" %d", i);
    printf("\n");

    printf("The Palindromes are:");
    for (i = from; i <= to; i++) if (isPalindrome(i)) printf(" %d", i);
    printf("\n");

    printf("The Prime numbers are:");
    for (i = from; i <= to; i++) if (isPrime(i)) printf(" %d", i);
    printf("\n");

    printf("The Strong numbers are:");
    for (i = from; i <= to; i++) if (isStrong(i)) printf(" %d", i);
    printf("\n");

    return 0;
}
