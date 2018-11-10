/*

    Given, a square matrix  return absolute difference of sum of diagonals(left and right)

        Ex:
                1 2 3
                4 5 6
                7 8 9
            Here,
                (L)left diagonal sum is (1+5+9)=12
                (R)right diagonal sum is (3+5+7)=15
                Absolute difference(|L-R|)=|12-15|=3


*/

#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 3

int diffOfSum(int matrix[ROW][COLUMN])
{
	// Write your actual solution here..  Given, a square matrix  return absolute difference of sum of diagonals(left and right)




}


int main()
{
    /*
        Do write code that works for all inputs(Different size 3,4,5....)
    */

	int matrix[ROW][COLUMN] = { { 1, 2, 3 }, 
                      		    { 4, 5, 6 }, 
                                    { 7, 8, 9 } }; 
	
	/* 
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
	*/
	
	
	int result = diffOfSum(matrix);
	print("\nResult = %d",result);
    	return 0;
}
