#include "NumClass.h"
/*
do factorial.. Multiply the number by all the numbers smaller than it
*/
int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

/*

*/
int isPrime(int n) {
    
    /*Extreme case*/
    if (n == 0 || n == 1)
        return 1;
    
    /*
    Passes over half of the first members that are smaller than it
    and chek if one of them divide the original num without a remainder
    */
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*
send evry digits to factorial
take the sum of the digits after use factorial
check if equal to original num
*/
int isStrong(int n) {
    int sum = 0, original = n;
    while (n > 0) {
        sum += factorial(n % 10);
        n = n / 10;
    }
    return sum == original;
}
