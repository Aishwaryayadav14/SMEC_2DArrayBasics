/*

    A matrix with 0s and 1s where each row & column is sorted, return  (min/fastest)row'th number which has highest Sum

    i.e.,  sorted ---------------------> row


            &&

            sorted |
                   |
                   |
                   |
                   |
                   |
                   colum wise


    Ex:

		0 0 0 0 1
                0 0 0 1 1
                0 0 1 1 1
                0 1 1 1 1
                1 1 1 1 1

      return 5, as last 5th row has the  highest sum


                0 0 0 0 1
                0 0 0 1 1
                0 0 1 1 1
                0 1 1 1 1
                0 1 1 1 1

      return 4, as 4 & 5 row has highest sum, return minimum of those is 4.

                        
*/


#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 3


int rowWithHighestSum(int matrix[ROW][COLUMN])
{
	//Wrtie your actual solution here...  return  (min/fastest)row'th number which has highest Sum
	
	
}


int main()
{
	//Do write code that works for all inputs (Different row and column sizes 4,5....)
	
	int matrix[ROW][COLUMN] = { { 0, 0, 0 }, 
                      		    { 0, 1, 1 }, 
                                    { 1, 1, 1 } }; 
	
	/* 
	int i,j;
	for (i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&matrix[i][j]);
	}
	*/
	
	int result = rowWithHighestSum(matrix);
	printf("\n Result = %d",result);

    	return 0;
}

