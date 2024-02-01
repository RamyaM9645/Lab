#include<stdio.h>

#include<string.h>
#define size 40

 char arr[size][40];
 int n;
int main()
{
   
    
    printf("array size : ");
    scanf("%d",&n);

    printf("enter string array elements..");
    for(int i=0;i<n;i++)
    {
    scanf("%s",arr[i]);
    }

printf("array elements are...");
for(int i=0;i<n;i++)
{
    printf("%s\n",arr[i]);
}
printf("array reverse...");
for(int i=n-1;i>=0;i--)
{
    printf("%s\n",arr[i]);
}
return 0;
}