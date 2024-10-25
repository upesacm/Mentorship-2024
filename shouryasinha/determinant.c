#include <stdio.h>

#define MAX 4  // Maximum size of the matrix

// CALCULATE COFACTOR
int getCofactor(int mat[MAX][MAX], int temp[MAX][MAX], int p, int q, int n) {
int i = 0, j = 0;
for (int row = 0; row < n; row++) {
for (int col = 0; col < n; col++) {
if (row != p && col != q) {
temp[i][j++] = mat[row][col];
if (j == n - 1) {
j = 0;
i++;
                }
            }
        }
    }
}

// CALCULATE DETERMINANT OF MATRIX
int determinant(int mat[MAX][MAX], int n) {
    if (n == 1) {
        return mat[0][0];
    }

    int temp[MAX][MAX];  // Store cofactors
    int det = 0;         // Initialize determinant
    int sign = 1;        // Sign multiplier

    for (int a = 0; a < n; a++) {
        getCofactor(mat, temp, 0, a, n);
        det += sign * mat[0][a] * determinant(temp, n - 1);
        sign = -sign;  // Change sign for next cofactor
    }
    return det;
}

int main() {
    int mat[MAX][MAX], n;

    // Input the size of the matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculating the determinant
    int det = determinant(mat, n);
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}
