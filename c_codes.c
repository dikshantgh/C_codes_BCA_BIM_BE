
// One Dimensional Array

//it can also be done using sort then printf("%d", array[1])
//second largest
#include<stdio.h>
#include<limits.h>
 
int main()
{
  int n, array[20];
 
  printf("Enter the size: ");
  scanf("%d",&n);
 
  printf("Enter the elements: ");
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
  
  int max = INT_MIN;
  int secondmax = INT_MIN;
  
  for(int i=0; i<n; i++){
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
  return 0;
}



//WAP in c to find the maximum and minimum from the given 1D integer array





// Multidimensional Array

// add two 2D array
// sum of all the elements of two 3D array
//2D array multiplication
//2D matrix diagonal elements sum
//sum of all the elements of 2D array(2D matrix)
//sum of all the elements of two 2D matrix
#include <stdio.h>

int main() {
    
    
    puts("Enter the row and column size of a mtrix");
    int row,col,sum=0;
    scanf("%d%d",&row,&col);
    int a[row][col];
    
    printf("Enter the elements of array for size %d X %d",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    puts("DIsplaying the given matrix");
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum = sum+a[i][j];
        }
    }
    
    printf("The sum of all the elements of the given array is %d",sum);
    return 0;
}


