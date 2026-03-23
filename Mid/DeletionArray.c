#include <stdio.h>
int main()
{
    int n, i, j, k;
    int a[100];

    printf("Insert the position: ");
    scanf("%d", &k);

    printf("Insert the no of Elements: ");
    scanf("%d", &n);

    printf("Insert the array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    j = k;
    while (j < n - 1)
    {
        a[j] = a[j + 1];
        j = j + 1;
    }

    n = n - 1;

    printf("The new Array:\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}