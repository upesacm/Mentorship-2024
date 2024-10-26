#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");    //size of array or no. of letters
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);    // entering the letters in array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort 

    for (int i = 0; i < n - 1; i++) {              
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j + 1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
