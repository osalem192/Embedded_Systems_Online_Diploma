#include <stdio.h>

int main()
{
    int row, col;
	    printf("Enter rows and columns of matrix: ");
	    scanf("%d", &row);
	    scanf("%d", &col);
	    float arr[100][100];
	    printf("Enter the elements of the matrix\n");
	    for (int r = 0; r < row; r++) {
	        for (int c = 0; c < col; c++) {
	            printf("Enter a%d%d : ", r+1, c+1);
	            scanf("%f", &arr[r][c]);
	        }
	    }
	    printf("Entered matrix\n");
	    for (int r = 0; r < row; r++) {
	        for (int c = 0; c < col; c++) {
	            printf("%.2f\t", arr[r][c]);
	        }
	        printf("\n");
	    }
	    printf("Transpose of Matrix\n");
	    for (int c = 0; c < col; c++) {
	        for (int r = 0; r < row; r++) {
	            printf("%.2f\t", arr[r][c]);
	        }
	        printf("\n");
	    }
}