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


int rowWithHighestSum(int matrix[][])
{
	//Wrtie your actual solution here...  return  (min/fastest)row'th number which has highest Sum
	
	
}


int main()
{
    /*
    Allocate 2d array dynamically
    */
	
	
	
	int result = rowWithHighestSum(matrix);
	printf("%d",result);

    return 0;
}

