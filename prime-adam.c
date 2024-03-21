#include <stdio.h>
#include "Functions/util.h"
#include <math.h>
#include <stdbool.h>

bool primeAdam(int x) {
    bool isPrimeX = isprime(x);
    bool isPrimeRevX = isprime(rev(x));
    bool isPrimeXSquared = isprime(pow(x, 2));
    bool isPrimeRevXSquared = isprime(pow(rev(x), 2));

    if (isPrimeX && isPrimeRevX && isPrimeXSquared && isPrimeRevXSquared && (x == rev(x))) {
        return true;
    }

    return false;
}

int main() {
    int numberToCheck = 11;
    printf("%d\n",isprime(6));
    if (primeAdam(numberToCheck)) {
        printf("%d is a prime Adam number.\n", numberToCheck);
    } else {
        printf("%d is not a prime Adam number.\n", numberToCheck);
    }

    return 0;
}
