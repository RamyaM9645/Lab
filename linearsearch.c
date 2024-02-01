#include<stdio.h>

int a[50],n,i,item;
int main()
{
printf("enter the limit of array");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("enter elelmeent to be searched");
scanf("%d",&item);
int found=0;
for(i=0;i<n;i++)
{
    if(a[i]==item)
    {
        printf("item found at %d",i);
        return 0;
        
    }
}
    printf("item not found");
    return 0;
    }


        
    




