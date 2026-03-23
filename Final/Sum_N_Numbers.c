#include <stdio.h>

int sum(int n) {
    if (n == 1)
        return 1;               // base case
    else
        return n + sum(n - 1);  // recursive case
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}
