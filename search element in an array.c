#include <stdio.h>
int main() 
{
    int n,arr[n],target,i,pos=-1;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter the number to be searched:");
    scanf("%d",&target);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(target == arr[i])
        pos=i+1;
    }
    if(pos ==-1)
    printf("number not found");
    else
    printf("position=%d",pos);
    return 0;
}
