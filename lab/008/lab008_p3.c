// m to read two matrices of order 3 * 2, add them and display the resultant
// matrix in matrix form. Also, a function to transpose this matrix

#include <stdio.h>

void readMatrix(int *arr, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", ((arr + i * n) + j));
    }
  }
}

void printMatrix(int *arr, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d\t", *((arr + i * n) + j));
    }
    printf("\n");
  }
}

void transposeMatrix(int *original, int *modified, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int t =  *((original + j * m) + i);
      *((modified + i * n) + j) = t;
    }
  }
}

int main() {
  int mat1[3][2];
  readMatrix((int *)mat1, 3, 2);
  printf("Matrix 1: \n");
  printMatrix((int *)mat1, 3, 2);

  int mat2[3][2];
  readMatrix((int *)mat2, 3, 2);
  printf("Matrix 2: \n");
  printMatrix((int *)mat2, 3, 2);
  
  int sum[3][2];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      sum[i][j] = mat2[i][j] + mat1[i][j];
    }
  }


  printf("Sum: \n");
  printMatrix((int *)sum, 3, 2);

  printf("Transposed Sum: \n");

  int transposedSum[2][3];
  transposeMatrix((int *)sum, (int *)transposedSum, 2, 3);
  printMatrix((int *)transposedSum, 2, 3);
}
