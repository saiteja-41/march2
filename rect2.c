#include<stdio.h>
int find_area(int*,int*); 
int main()
{
	int l,w;
	printf("Enter the length:");
	scanf("%d",&l);
	printf("Enter the width:");
	scanf("%d",&w);
	find_area(&l,&w);  //Call by reference
    }
int find_area(int* l,int* w)
{
	int area=l *w;
	printf("Area of rectangle: %d\n",area);
	return 0;
}
