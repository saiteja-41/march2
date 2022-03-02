#include<stdio.h>
void swap(int a,int b);
void main()
{
 int a=25,b=40;
 printf("before swapping: %d %d\n ",a,b);
 swap(a,b);
}
void swap(int x,int y)
{
  x=x+y;
  y=x-y;
  x=x-y;
    printf("after swapping:%d %d \n",x,y);
}
