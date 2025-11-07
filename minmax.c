#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the number of number of elements:");
    scanf("%d",&n);
    int arr[n];
     printf("Enter %d element /n",n);
     for(i = 0; i< n; i++) {
        scanf("%d",&arr[i]);
     }
     int min = arr[0];
     int max = arr[0];
     for(i = 1; i < n; i++){
        if( arr[i] < min) {
            min = arr[i];

        }
        if(arr[i] >max) {
            max = arr[i];
        }
     }
     printf("Minimum element: %d\n", min);
     printf("Maximum element: %d\n", max);
     return 0;
}