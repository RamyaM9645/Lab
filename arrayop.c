#include<stdio.h>
#include<stdlib.h>
#define size 50

int arr[size],n,i;

void insertbeg()
{
    int data;
    if(n==size)
    {
        printf("array is full ");
    }
    else{
        printf("enter data to insert: ");
        scanf("%d",&data);
        for(i=n-1;i>=0;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=data;
        n++;
    }

    printf("after insertion: ");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
void insertend()
{
    int data;
    printf("enter the data to insert: ");
    scanf("%d",&data);
    if(n==size)
    {
        printf("array is full");
    }
    else{
        arr[n]=data;
        n++;
        printf("array after insertion :");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
    }
}

void insertpos()
{
    int data,pos;
    if(n==size)
    {
        printf("array full");
    }
    else
    {
        printf("enter the data to i9nsert:");
        scanf("%d",&data);
        printf("enter the possition to insert:");
        scanf("%d",&pos);

        if(pos<0 || pos>n)
        {
            printf("not possible ");
        }
        else
        {
            for(i=n-1;i>=pos - 1;i--)
            {
                arr[i+1]=arr[i];
            }
                arr[pos-1]=data;
                n++;
            }
            
        
        printf("array after insertion :");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }

    }
}

void deletebeg()
{
    int data;
    if(n==0)
    {
        printf("array empty");
    }
    else{
        data=arr[0];
        for(i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }
    printf("array after deletion :");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }

}

void deleteend()
{
    int data;
    if(n==0)
    {
        printf("not possible");
    }
    else
    {
        data=arr[n];
    }
    n--;
    printf("array after deletion :");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }


}

void deletepos()
{
    int pos,data;
    printf("enter the possition to delete:");
    scanf("%d",&pos);

        if(pos>n || pos<0)
        {
            printf("deleteion notpossibele\n");
        }
        else{
            data=arr[pos-1];
            for(i=pos-1;i<n;i++)
            {
                arr[i]=arr[i+1];
            }
            n--;
        }
        printf("array after deletion :");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }


}
void main()
{
    int ch;
    printf("enter array limit:");
    scanf("%d",&n);
    printf("enter the array elements");
    {
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    }

    while(1)
    {

    printf("\n1.insertbeg\n 2.insertpos\n  3.insertend\n \n4.deletebeg\n  \n5.deleteend  \n6.delete pos" );
    printf("\nenetr your choice: ");
    scanf("%d",&ch);
    if(ch==7)
    {
        return;
    }
    switch(ch)
    {
        case 1:
        insertbeg();
        break;

        case 2:
        insertpos();
        break;


        case 3:
        insertend();
        break;

        case 4:
        deletebeg();
        break;

        case 5:
        deleteend();
        break;

        case 6:
        deletepos();
        break;



        





        default:
        printf("invalid choice");

    }
    
    
    }
    
}