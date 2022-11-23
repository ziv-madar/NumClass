#include "NumClass.h"
#include <math.h>

/*
get a num and his num of digits
take the unity digit from the number and power of his num of digit
then divide the num by 10 and call recorsy
sum the result evry time
*\
int armstrong(int n, int digits) {
    return (n > 0) ? pow(n % 10, digits) + armstrong(n / 10, digits) : 0;
}

/*
take the result from armstrong and check if the same with original num
*\
int isArmstrong(int n) {
    return n == armstrong(n, ((int)log10(n)) + 1);
}

int reverseNumber(int n) {
    return (n < 10) ? n : (n % 10) * pow(10, (int)log10(n)) + reverseNumber(n/10);
}

int isPalindrome(int n) {
    return n == reverseNumber(n);
}
