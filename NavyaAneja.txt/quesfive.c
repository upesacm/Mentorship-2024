#include <stdio.h>

int main() {
    int a[2][2], det;
    printf("Enter 4 elements of 2x2 matrix: ");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("Determinant: %d", det);
    return 0;
}
