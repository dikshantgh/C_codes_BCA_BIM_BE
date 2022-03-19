

//WAP in C to find the second largest from an array
//it can also be done using sort then printf("%d", array[1])
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


//sum of all the elements of 2D matrix
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



//Add two 2D matrix
#include <stdio.h>
#define ROW 3
#define COL 2
int main() {
    int a[ROW][COL];
    int b[ROW][COL];
    int sum[ROW][COL];
    printf("Enter the elements for first matrix of size %d X %d matrix \n",ROW,COL);
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
     printf("\nEnter the elements for second matrix of size %d X %d matrix \n",ROW,COL);
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("\nb[%d][%d]:",i,j);
            scanf("%d", &b[i][j]);
        }
    }
 
 //sum
 
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            sum[i][j] = a[i][j] +  b[i][j];
        }
    }
    
    //display
     printf("Displaying the sum:\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d\t", sum[i][j]);
            
        }
        printf("\n");
    }
 
    return 0;
}






// WAP in C to tranpose a 2D matrix and store and display

#include <stdio.h>
#define ROW 3
#define COL 2
int main() {
    int a[ROW][COL];
    int transpose[COL][ROW];
    printf("Enter the elements for first matrix of size %d X %d matrix \n",ROW,COL);
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
 //displaying matrix
  printf("Displaying the given matrix:\n");
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            printf("%d\t", a[i][j]);
            
        }
        printf("\n");
    }
 
 //transpose
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    
    //display transpose matrix
     printf("Displaying the transposed matrix:\n");
    for(int i=0;i<COL;i++)
    {
        for(int j=0;j<ROW;j++)
        {
            printf("%d\t", transpose[i][j]);
            
        }
        printf("\n");
    }
 
    return 0;
}



//wap in C to print the following pattern
/*

N
N e
N e p
N e p a
N e p a L

*/

#include <stdio.h>
 int main()
 {
    char name[6]="Nepal";
    for(int k=1;k<=5;k++)
    {
            printf("%.*s", k,name); // k is number of characters to print and name is the source of character
            printf("\n");
    }
   
    return 0;
}




//WAp in C to print the following pattern
/*

N
e e
P P P
a a a a
L L L L L

*/
#include <stdio.h>
 int main()
 {
    char name[6]="NePaL";
    for(int k=0;k<5;k++)
    {
        for(int j=0;j<=k;j++)
            printf("%c\t",name[k]);
            printf("\n");
    }
   
    return 0;
}



//wap in c to display the following pattern
/*

CProgramming
CProgrammin
CProgrammi
CProgramm
CProgram
CProgra
CProgr
CProg
CPro
CPr
CP
C
CP
CPr
CPro
CProg
CProgr
CProgra
CProgram
CProgramm
CProgrammi
CProgrammin
CProgramming

*/


#include <stdio.h>

int main() {
    char name[30]="CProgramming";

     for(int i=0;name[i]!='\0';i++)
    {
        printf("%.*s",12-i,name);
        printf("\n");
    }

    for(int i=1;name[i]!='\0';i++)
    {
        printf("%.*s",i+1,name);
        printf("\n");
    }

    return 0;
}




    
/*WAP in C to check how many words starts from letter ‘d’ in the given list of words
{“apple”, “damp”, “dikshant”,”deerwalk”,”odour”,”should”}
*/


#include <stdio.h>

int main() {
    char string[6][10]={
      "apple", "damp", "dikshant","deerwalk","odour","should" 
    };
    int count=0;
    for(int i=0; i<6;i++)
    {
            if(string[i][0]=='d')
                count++;
    }
    
    printf("The total word which starts with 'd' : %d",count);
    return 0;
}


//prime or not prime check

#include <stdio.h>
int main() {
    int n;
    do{
        puts("Enter a non-negative number to check");
        scanf("%d", &n);
    }
    while(n<0);
    
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag && n>1)
        puts("Prime Number");
    else 
        puts("Not prime");
    return 0;
}


//prime or composite check

#include <stdio.h>
int main() {
    int n;
    do{
        puts("Enter a non-negative number to check");
        scanf("%d", &n);
    }
    while(n<0);
    
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag && n>1)
        puts("Prime Number");
    else if (n<2) 
        puts("Neither Composite nor Prime Number");
    else
        puts("Composite NUmber");
    return 0;
}



//print all prime numbers for a given range of two number
#include <stdio.h>
int main() {
    int n1,n2;
    do{
        puts("Enter two numbers greater than 1");
        scanf("%d%d", &n1,&n2);
    }
    while(n1<2 || n2<2);
    
    int flag;
    for(int i=n1;i<=n2;i++)
    {
        flag=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("%d\n", i);
        
    }
    return 0;
}




// fibonacci series till nth term
#include <stdio.h>
int main() {
    int number;
    puts("Enter the nth positive term");
    scanf("%d", &number);
    int a=0, b=1,c=0;
    for(int i=1;i<=number;i++)
    {   
        printf("\t%d", c);
        a=b;
        b=c;
        c=a+b;
    }
    
    return 0;
}


//sum of nth term harmonic series

#include <stdio.h>

int main() {
   int nth_term;
   float sum=0;
   scanf("%d", &nth_term);
   
   for(int i=1;i<=nth_term;i++)
   {
       sum = sum + (1/(float)i);
   }
    
    printf("the sum of harmonic series till %d term is %.2f", nth_term,sum);
    return 0;
}





//geometric series sum of nth term
#include <stdio.h>
#include<math.h>
int main() {
   int nth_term;
   float sum=0;
   scanf("%d", &nth_term);
   int a=4,r=2;
   for(int i=0;i<nth_term;i++)
   {
       sum = sum + (a*pow(r,i));
   }
    
    printf("the sum of geometric series till %d term is %.2f", nth_term,sum);
    return 0;
}





//find the square of a positive number without using pow
#include <stdio.h>
#include<math.h>
int main() {
  int base, exponent,result=1;
  base = 2, exponent =5;
   for(int i=1;i<=exponent;i++)
   {
       result = result * base; 
   }
    printf("the square is %d", result);
    return 0;
}




// return sum, subtraction and multiplication from one function 
#include <stdio.h>

void result(int *a1, int *b1, int *sum1, int *mul1, int *sub1)
{
    *sum1 = *a1 + *b1;
    *mul1 = *a1 * *b1;
    *sub1 = *a1 - *b1;
    
}

int main() {
    
    int a,b,sum,mul,sub;
    puts("ENter two numbers");
    scanf("%d%d", &a, &b);
    
    result(&a,&b,&sum,&mul,&sub);
    printf("The sum is %d\nthe sub is %d\nthe mul is %d",sum,sub,mul);
    return 0;
}





//to find the second largest among three number
#include <stdio.h>

int main() {
   
  int a=7,b=7,c=6;
  
  do{
      printf("Enter three distinct number");
      scanf("%d%d%d", &a,&b,&c);
  }while(a==b || a==c|| b==c);
  
  if(a>b && a>c)
  {
      if(b>c)
        printf("%d",b);
    else
        printf("%d",c);
  }
  else if(b>c)
    {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
  else
        {
            if(b>a)
                printf("%d",b);
            else
                printf("%d",a);
        }
    return 0;
}




//typedef example in C
#include <stdio.h>
typedef int scale;

int main() {
    scale length, breadth;
    length=2,breadth=3;
    printf("\nThe area of rectangle for length %d and breadth %d is %d", length, breadth, length*breadth);
    return 0;
}



//wap in c to take 3 student names and reverse only the second second name without using strrev() function
#include <stdio.h>
#include<string.h>
int main() {
    char name[3][40];
    for(int i=0;i<3;i++)
    {
        puts("ENter the name\n");
        fgets(name[i],40,stdin);
    }
    int len = strlen(name[1]);
    for(int i=len-1;i>=0;i--)
    {
        printf("%c", name[1][i]);
    }
    return 0;
}


//arranging the given words in ascending order
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    // printf("Hello world");
    char words[5][10]={"ball","apple","zebra","someone","knife"};
    char w[10];
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++){
            if((strcmp(words[i],words[j]))>0)
            {
               strcpy(w,words[i]);
               strcpy(words[i],words[j]);
               strcpy(words[j],w);
            }
        }
    }

    for(int i=0;i<5;i++)
        printf("%s\n", words[i]);
    return 0;
}


//Conver the given days into days, month and year
#include<stdio.h>
int main()
{
int ndays,year,month,day;

printf("Enter day\n");
scanf("%d",&ndays);

year=ndays/365;
month=(ndays%365)/30;
day=(ndays%365)%30;

printf("year=%d\nmonth=%d\nday=%d",year,month,day);
return 0;
}



//convert the given seconds into seconds, minutes and hour
#include<stdio.h>
int main()
{
int seconds,hours,minutes,input;
printf("Enter no of seconds\n");
scanf("%d",&input);

hours=input/3600;
minutes=(input%3600)/60;
seconds=(input%3600)%60;

printf("hours=%d\n",hours);
printf("minutes=%d\n",minutes);
printf("seconds=%d\n",seconds);
}

