#include<stdio.h>
int a[50],n,i,j,temp;
void main()
{
printf("enter the limit of array");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements before sorting......");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("enter elemenst after sorting..");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}