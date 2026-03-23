#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;                  // base case
    else
        return n * fact(n - 1);    // recursive case
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));

    return 0;
}
