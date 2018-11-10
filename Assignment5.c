/* 

	Given a matrix, print the elements of matrix in L shape. 

	EX :
		1 2 3                   | 1 | 2  | 3
		4 5 6    ===========>   |   |    ---->       ============>    1 4 7 8 9 2 5 6 3
		7 8 9			| 4 | 5    6
		                        |   --------->
					| 7   8    9
					------------->

		
	Output : 1 4 7 8 9 2 5 6 3
	

*/


#include <stdio.h>
#define ROW 3
#define COL 3

void traverseL (int matrix[ROW][COLUMN])
{
    // Write your actual solution here..  Given, a square matrix, print the elements of matrix in L shape.  


}

int main() 
{ 

    //Make sure your code accepts matrix of different dimensions
  
    int mat[ROW][COLUMN] = { { 1, 2, 3 }, 
                             { 4, 5, 6 }, 
                             { 7, 8, 9 } }; 

    /* 
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
    */
  
    traverseL(mat); 
    return 0; 


} 
