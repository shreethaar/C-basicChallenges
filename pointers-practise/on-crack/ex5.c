// dynamic 2D arrays

#include <stdlib.h>

// allocate a 3x4 matrix
int main() {
    int **matrix = (int **)malloc(3 * sizeof(int *));
    for(int i=0; i<3; i++) {
        matrix[i]=(int *)malloc(4 * sizeof(int));
    }

    matrix[1][2]=42;

    for(int i=0;i<3;i++) {
        free(matrix[i]);
    }

    free(matrix);
}


