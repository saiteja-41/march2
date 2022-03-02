#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=19,b=20;
    printf("before swap: %d %d\n ",a,b);
     swap(&a,&b); //passing func
}
  void swap(int*x,int*y)
  {
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping :%d %d",*x,*y);
}



#include<stdio.h>
void swap(int*a,int*b);
int main()
{
    int a=20,b=30;
    printf("before swapping: %d %d\n",a,b);
    swap(&a,&b);
}
void swap(int *x,int*y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("after swapping: %d %d",*x,*y);
}
