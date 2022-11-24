#include "NumClass.h"
#include <math.h>

int isArmstrong(int n) {
    /*
    sum = sum of the uniuty after rais it by its num of digit
    original = save the original num to compare later
    digits = the number of digits
    */
    int sum = 0,
        original = n,
        digits = ((int) log10(n)) + 1;
    
    /*
    take the unity digit from num rais it by digits
    do it again to num/10 till num = 0
    */
    while (n > 0) {
        sum += pow(n % 10, digits);
        n = n / 10;
    }
    return original == sum;
}

/*

*/
int isPalindrome(int n) {
    /*
    remainder = the curent digit
    sum = the revers num
    */
    int remainder, temp = n, sum = 0;
    
    /*
    take the unity digit in to the sum
    Multiply the number by 10 and sum with current unity digit
    divide the num by 10 and do all over again
    till the num = 0
    */
    while (temp > 0) {
        remainder = temp % 10;
        sum = (sum * 10) + remainder;
        temp = temp / 10;
    }

    return sum == n;
};
