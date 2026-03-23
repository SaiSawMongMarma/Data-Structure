#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // traverse & print elements
    printf("Traversing the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}
/*
Enter the size of the array: 4
Enter 4 elements:
5
10
15
20
Traversing the array:
Element at index 0 = 5
Element at index 1 = 10
Element at index 2 = 15
Element at index 3 = 20
*/