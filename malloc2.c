#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("enter the number of intergers");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr == NULL){
    printf("no memory");
    exit(1);
}
for(i=0;i<n;i++)
{
    printf("enter integers");
    scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
    printf("%d\n",&*(ptr+i));

    return 0;
}
