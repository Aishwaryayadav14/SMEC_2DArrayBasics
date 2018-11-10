/*

	Given a mtrix, return Sum of all maximum frequency elements in Matrix.
	
	Input : mat[3][3] = {{1, 1, 1},
                	     {2, 3, 3},
                             {4, 5, 3}}
	
	Output : 12

	The max occurring elements are 3 and 1
	
	Therefore, sum = 1 + 1 + 1 + 3 + 3 + 3 = 12

	Note  : The elements in the matrix lie between 0 to 9 only i.e., 0<=mat[i][j]>=9.

*/


#include <stdio.h>
#define ROW 3
#define COL 3

int sumOfMaxFreq(int matrix[ROW][COLUMN])
{
    // Write your actual solution here..  Given, a square matrix  return Sum of all maximum frequency elements in Matrix.


}

int main() 
{ 

    //Make sure your code accepts matrix of different dimensions
  
    int mat[ROW][COLUMN] = { { 1, 2, 2 }, 
                             { 1, 3, 2 }, 
                             { 1, 2, 6 } }; 

    /* 
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
    */
  
    int result = sumOfMaxFreq(mat); 
    printf("Result = %d",result);
    return 0; 


} 

