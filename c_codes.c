
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

// adding two 2D array


// Primary and secondary diagonal sum in 2D array
//primary and seconday diagonal sum
#include <stdio.h>

int main() {
    int row=3,col=3,sum=0, sum_s=0;
    int a[row][col];
   
    
    printf("Enter the elements of first array for size %d X %d",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    puts("DIsplaying the given matrix1");
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
            if(i==j)
                sum = sum+a[i][j];
            if(i+j ==row-1)
                sum_s = sum_s+a[i][j];
        }
    }
  printf("THe sum of primary diagonal is %d \nThe sum of secondary diagonal is %d",sum,sum_s);
    return 0;
}



//primary and seconday diagonal sum (next method)
#include <stdio.h>

int main() {
    int row=3,col=3,sum=0, sum_s=0;
    int a[row][col];
   
    
    printf("Enter the elements of first array for size %d X %d",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    puts("DIsplaying the given matrix1");
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
                sum = sum+a[i][i];
                sum_s = sum_s+a[i][row-i-1];
    }
  printf("THe sum of primary diagonal is %d \nThe sum of secondary diagonal is %d",sum,sum_s);
    return 0;
}



/*

a	
b	b	
c	c	c	
e	e	e	e


*/
#include <stdio.h>

int main() {
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==3)
                printf("%c\t",'a'+i+1);
            else
                printf("%c\t",'a'+i);
        }
        printf("\n");
    }
    
    return 0;   
}
    
    


//sum of all the elements of 3D array and display the 3D array 
#include <stdio.h>

int main() {
    int sum=0;
    int a[2][3][3]={
        {{1,12,3},
        {1,22,3},
        {1,23,3}},
        
        {{1,25,3},
        {1,26,3},
        {1,27,3}}
    };
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum = sum+a[i][j][k];
            }
        }
    }
    printf("\nthe sum of all the elements is %d", sum);
    
        return 0;
}



//Q. WAP in c to read 3*3 square matrix , find the minimum //elements, and replace the diagonal by minimum elements and //display it 

#include <stdio.h>

int main() {
    
    int a[3][3]={
        {10,12,3},
        {10,22,3},
        {10,23,3},
    };
    int min=a[0][0];
    puts("displaying matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                if(a[i][j]<min)
                {
                    min=a[i][j];
                }
        }
    }
    
    
     for(int i=0;i<3;i++)
    {
                a[i][i]=min;
                a[i][3-i-1]=min;
    }
    
    puts("displaying matrix after replacing diagonal with min");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   
        return 0;
}


//2D array matrix multiply
#include <stdio.h>

int main() {
    
    int a[2][3]={
        {10,12,3},
        {10,22,3}
    };
    
     int b[3][3]={
        {10,12,3},
        {10,22,3},
        {10,23,3}
    };
    int c[2][3];
    puts("displaying first matrix");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
     puts("displaying second matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    //multiply
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for (int k = 0; k < 3; ++k) {
                c[i][j] += a[i][k] * b[k][j];
         }
        }
    }
    
    puts("displaying matrix multiplying");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
                printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
   
        return 0;
}


//WAP in C to add two distances given in feet and inch using //structure.
#include <stdio.h>

struct Distance
{
    float inch;
    int feet;
}d[2],result;

int main() {
    for(int i=0;i<2;i++)
    {
        printf("Enter the details for distance_%d as follows\n",i);
       
        puts("Enter the feet:");
        scanf("%d",&d[i].feet); 
        puts("Enter the inch:");
        scanf("%f",&d[i].inch);
    }
    //display record
    puts("\nDisplaying all records\n");
    for(int i=0;i<2;i++)
    {
        printf("\nDistance_%d\n",i);
        printf("inch: %.2f\nfeet: %d\n",d[i].inch,d[i].feet);
    }
    
    result.inch=0;
    result.feet=0;
    for(int i=0;i<2;i++)
    {
        result.inch = result.inch + d[i].inch; 
        result.feet = result.feet + d[i].feet;
    }
    
    
    while(result.inch>=12)
    {
        result.inch = result.inch-12;
        result.feet++;
    }
    
    printf("\nThe sum of both the distance is %d feet and %.2f inches",result.feet, result.inch);
    
    return 0;
}


//WAP in C to display the following pattern
/*

a	
b	b	
c	c	c	
e	e	e	e

*/

#include <stdio.h>

int main() {
  for(int i=0;i<4;i++)
  {
      for(int j=0;j<=i;j++)
      {
          if(i==3)
            printf("%c\t",'a'+i+1);
          else
            printf("%c\t",'a'+i);
      }
      printf("\n");
  }
    return 0;
}



//
