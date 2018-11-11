#include<stdio.h>

void Test1(int *,int ,int);

void Test2(int Arr2[][2],int r,int c);

/*
In this lesson you will learn how to declare a 2D Array and how to pass it to various methods. 
-> Also how contigious allocation of 2d Arrays work.

*/
int main()

{
    
	int r=5,c=2,sample_2DArray_Way1[5][2]={1,2,3,4,5,6,7,8,9,10};
 
	int sample_2DArray_Way2[5][2] =
   
				 {
   
					{ 11, 12 },
			    
            				{ 13, 14 },
			    
            				{15, 16 },
				
        				{ 17,18 },
				
        				{ 19,20 }

				 };

    
    int sample_2DArray_Way3[][2]={21,22,23,24,25,26,27,28,29,30};

    
    
    printf("%d\n",sample_2DArray_Way1[0][0]);

    printf("%d\n",*(sample_2DArray_Way1[0]+1));

    printf("%d\n",*(*(sample_2DArray_Way1+0)+2));

    printf("\n\nMethod 1\n\n");

    Test1(sample_2DArray_Way1,r,c);

    printf("\n\nMethod 2\n\n");

    Test2(sample_2DArray_Way2,r,c);

        /*
	Task - 1
    	Print the addresses of each element of all the above 3  2dArray
		
    	*/
    return 0;

}



void Test1(int *Arr1,int r,int c)
{

    int i,j;

    for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
        {
		printf("%d\t",*(Arr1+i*c+j));
        }
	printf("\n");
    }
	 
    /*
    How did the above notation worked ? 
    -->
    */

}



void Test2(int Arr2[][2],int r,int c)
{

    int i,j;

    for(i=0;i<r;i++)
    {
	for(j=0;j<c;j++)
        {
             printf("%d\t",Arr2[i][j]);
        }
	printf("\n");
    }
    /*
    How did the above notation worked ? 
    -->
    */
 
}

/*
Assume an array of rows r and cols c is given. Ex arr[5][4]
You need to print first element, skip K elements, and print the next element , skip K elements and print next element
and so on.
Ie assume arr is arr[5][4] and K = 2
Arr 
 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16
You will print 1,4,7,10,13,16.
Ie (print 1, (2,3 will be skipped), print 4 , (5,6 skip), 7 print, (8,9 skip) ... 

This code should be written in a single loop.
*/
void task2(int *arr,int r,int c,int k) {
	
	
}



void learned()
{
    //Fill what you have learnt in this lesson( Below comments)
 
    /*
    Sample1: Got to know how contiguous memory allocation is done
    
    */


}
