#include <stdio.h>


int sudokuoChecker(int);

int main()
{
//This is an invalid sudoku matrix
int matrix1[9][9]={{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}};
//This is an invalid sudoku matrix
int matrix2[9][9]={{1,1,1,1,1,1,1,1,1},{2,2,2,2,2,2,2,2,2},
{3,3,3,3,3,3,3,3,3},{4,4,4,4,4,4,4,4,4}, {5,5,5,5,5,5,5,5,5},{6,6,6,6,6,6,6,6,6}, {7,7,7,7,7,7,7,7,7},{8,8,8,8,8,8,8,8,8}, {9,9,9,9,9,9,9,9,9}};
//This is a valid sudoku matrix
int matrix3[9][9]={{2,5,8,1,3,7,6,4,9},{1,4,6,9,8,5,3,2,7},
{7,9,3,2,4,6,8,5,1},{4,7,2,8,6,3,1,9,5}, {5,8,1,4,9,2,7,3,6},{6,3,9,5,7,1,4,8,2}, {3,1,5,7,2,8,9,6,4},{8,2,4,6,1,9,5,7,3}, {9,6,7,3,5,4,2,1,8}};
if(sudokuChecker(matrix1)) printf(‘‘yes\n’’); else printf(‘‘no\n’’); if(sudokuChecker(matrix2)) printf(‘‘yes\n’’); else printf(‘‘no\n’’); if(sudokuChecker(matrix3)) printf(‘‘yes\n’’); else printf(‘‘no\n’’); }

int sudokueChecker(int matrix[9][9])
{
	block = 0;
	iblock = 0;
	jblock = 0;
	sum = 0; # 
	int i;
	int j;


	while (i < 9) // rows
		while (j < 9) // column
		{
			if (j != i)
				j++
				i++
			printf("\nInput element [%d][%d] : ", i, j);
		}
}