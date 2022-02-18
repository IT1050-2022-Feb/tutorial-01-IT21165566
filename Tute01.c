/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int m1,m2,sum;
  float avg;

  printf("enter mark 1:  ");
  scanf("%d",& m1);

  printf("enter mark 2:  ");
  scanf("%d",&m2);


  sum=m1+m2;
  avg=sum/2;
  printf("avarage marks: %.2f",avg);
  
  return 0;
}

