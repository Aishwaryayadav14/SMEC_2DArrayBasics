/*
    Given a matrix(2D array), return transpose of that matrix


    Ex:

          1 2 3                          1 4 7
     1)   4 5 6     ------------->       2 5 8
          7 8 9                          3 6 9


     2)   6 4 5     ------------->      6 1
          1 8 9                         4 8
                                        5 9





*/


#include<stdio.h>
#include<stdlib.h>
void transpose(int *,int ,int );
int main()
{
/*
Allocate memory dynamically
*/
 int Matrix[][3]={1,2,3,4,5,6,7,8,9},row=3,column=3;//Make sure your code accepts matrix of different dimensions
 transpose(Matrix,row,column);
return 0;
}
void transpose(int *Arr,int row,int col)
{
    //Get Transpose
}
