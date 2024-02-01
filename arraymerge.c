#include<stdio.h>
//#define size 40

int arr1[100],arr2[100];
int main()
{
    int n1,n2,i;
    printf("enter size of arr1: ");
    scanf("%d",&n1);
    printf("enter elements of arr1: ");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&arr1[i]);
    }

    printf("enter size of arr2:  ");
    scanf("%d",&n2);
    printf("enter elements of arr2:  ");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&arr2[i]);
    }

    int size=n1+n2;

    int arr3[size];
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
        
    }
    for(i=0;i<n2;i++)
    {
        arr3[i+n1]=arr2[i];
        
    }

    printf("first array is....:  \n");
    for(i=0;i<n1;i++)
    {
    printf("%d",arr1[i]);
    }

    printf("2nd array is....:  \n");
    for(i=0;i<n2;i++)
    {
    printf("%d",arr2[i]);
    }
    printf("merged array is....");
    for(i=0;i<size;i++)
    {
    printf("%d",arr3[i]);
    }
    
}