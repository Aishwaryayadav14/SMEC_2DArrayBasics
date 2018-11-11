
#include <stdio.h>
void getDiagonalSum(int arr[][3],int r ,int c);
void learned();


int main()

{

    int i,a[10]={0};

    printf("\n%d\n",*(a+i));//a[i] or i[a] or *(a+i) or *(i+a) indicate the same address
   
    printf("%d\n",*(a+i));

    printf("%d\n",i[a]);

    for(i=0;i<10;i++)

    {
        
		// print address of each and observe how the memory is getting allocated

    }
    
    int j,arr[3][3]={1,2,3,4,5,6,7,8,9},r=3,c=3;
    printf(" \n Starting address %u\n",arr[0][0]);
    printf(" \n Next address %u\n",arr[0][1]);
	//What will be the address of arr[2][1] && arr[1][0](Try before executing the below code
/*
   for(i=0;i<r;i++)
   {
	for(j=0;j<c;j++)
	{
	// Print value n address of each element in array and understand how memory is being allocated	
	}
   }
 */
    getDiagonalSum(arr,r,c);
	
    //What does below code do? Before uncommenting and running try to traceout what happens.
    /*
    int arr[2][2] = {{1,2},{3,4}};
    printf("Before \n" );
    printArr(test,2,2);
    changeArr(test,2,2);
    printf("After \n");
    printArr(test,2,2);
    */
    return 0;

}

void getDiagonalSum(int arr[][3],int r ,int c)
{
	/*
	 return sum of diagonal
	 
	  	1 2 3
		4 5 6
		7 8 9
		
		return 25( 1+5+9+3+7)
	*/
	
}

void changeArr(int arr[][2],int r ,int c)
{
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++){
            arr[i][j]+=100;
        }
    }
	
	
}
void printArr(int arr[][2],int r ,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}


void learned()
{
    

    //Fill what you have learnt in this lesson( Below comments)



}
