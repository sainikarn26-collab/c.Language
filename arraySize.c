#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("Enter %d elements of first array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter %d elements of second array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < n; i++)
        sum[i] = arr1[i] + arr2[i];

    printf("Sum of corresponding elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", sum[i]);

    return 0;
}
