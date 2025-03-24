/* Challenge: Matrix Spiral Traversal
 * Write a program that takes an N x M matrix as input and prints it elements in spiral order (clockwise, starting from the top-left corner)
 *
 * Requirements:
 * 1. Read the dimensions N (rows) and M (columns)
 * 2. Read an N X M matrix from user input
 * 3. Traverse the matrix in a spiral order (right -> down -> left -> up -> repeat)
 * 4. Print th elements in order
 */

#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
void spiral_order(int *matrix, int rows, int columns) {
    int top=0,bottom=rows-1,left=0,right=columns-1;

    while(top<=bottom&&left<=right) {
        for(int i=left;i<=right;i++) 
            printf("%d ", matrix[top*columns+i]);
        top++;

        for(int i=top;i<=bottom;i++) 
            printf("%d ", matrix[i*columns+right]);
        right--;

        if(top<=bottom) {
            for(int i=right;i>=left;i--) 
                printf("%d ",matrix[bottom*columns+i]);
            bottom--;
        }

        if(left<=right) {
            for(int i=bottom;i>=top;i--)
                printf("%d ", matrix[i*columns+left]);
            left++;
        }
    }
}


int main() {
/*    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("%d\n",matrix[i][j]);
        }
    }
*/
    int rows=0,columns=0;
    printf("Enter row: ");
    scanf("%d",&rows);
    printf("Enter column: ");
    scanf("%d",&columns);
    
    int *matrix = (int *)malloc(rows * columns *sizeof(int));
    if(!matrix) {
        perror("malloc failed\n");
        return 1;
    }


    printf("Enter %d X %d matrix\n", rows, columns);
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            scanf("%d",&matrix[i*columns+j]);
        }
    }

    printf("Spiral Order:\n");
    spiral_order(matrix,rows,columns);

    free(matrix);
    return 0;
}

