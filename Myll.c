#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head,*temp;

struct node * create()
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    if(!new_node)
    {
        printf("memory allocation failed");
        return NULL;
    }
    return new_node;

}

void insert_beg()
{
    int d;
    printf("enter the data  to be inserted");
    scanf("%d",&d);
    struct node* new =create();
    new ->data=d;
    new ->next=head;
    head=new;

}

void insert_end()
{
    int d;
    printf("enter the data to be inserted:");
    scanf("%d",&d);
    struct node* new=create();
    new->data=d;
    new->next=NULL;

    if(head==NULL)
    {
        head=new;
        return;
    }

    temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=new;
 }

 void InsertAtPos()
 {
    int d,pos;
    int i=1;
    printf("enter the data to be inserted: ");
    scanf("%d",&d);
    printf("enter the position tobe inserted: ");
    scanf("%d",&pos);
    if(pos<0)
    {
        printf("invalid position");
        return;
    }
    struct node* newnode= create();
    newnode->data=d;
    if(head==NULL || pos==1)
    { 
        newnode->next=head;
        head=newnode;
        return;

    }
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }    
        newnode->next=temp->next;
        temp->next=newnode;       
  }
 

 void display()
 {
    if(head==NULL)
    {
        printf("empty linked list");

    }
    else
    {
        printf("your linkedlist is......");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;

        }
    }
 }

 void search()
 {
    int d;
    printf("enter the data to search: ");
    scanf("%d",&d);
    
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data=d)
        {
            printf("node with data is present");
            return;
        }
        temp=temp->next;

    }
    if(temp==NULL)
    {
        printf("node is not present");
        return;
    }
    
     
 }

 void DeleteBeg()
 {
    if(head==NULL)
    {
        printf("empty linkedlist");
    }
    
    head=temp;
    head=head->next;
    free(temp);
 }

 void DeleteFromEnd()
 {
    struct node* prevnode;
    if(head==NULL)
    {
        printf("empty");
        return;
    }

    temp=head;
    while(temp->next!=NULL)
    {   
        prevnode=temp;
        temp=temp->next;
    }
    if(head==temp)
    {
        head=0;
        free(temp);
    }
    else
    {
        prevnode->next=0;
        free(temp);

    }



 }
 void DeleteFromPos()
 {
    struct node* nextnode;
    int pos,i=1;
    printf("enter the possition to delete ");
    scanf("%d",&pos);
    
    if(head==0)
    {
        printf("empty");
        return;
    }
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;   //pos
    temp->next=nextnode->next;
    free(nextnode);
   


 }

 void main()
 {
 int ch;
 while(1)
 {
    printf("\n1.insert at beginning \n 2.insert at end \n3.insert at position \n4.display  \n5.delete from beginning \n6.delete from end \n7.delete from pos \n8.search \n9.exit");
    printf("\nenter your choice :  ");
    scanf("%d",&ch);
    if(ch==9)
    {
        return;
    }
    switch(ch)
    {
    case 1:
            insert_beg();
            
            break;
    case 2:
            insert_end();
            
            break;
    case 3:
            InsertAtPos();
            
            break;
    case 4:
            display();
            break;

    case 5:
            DeleteBeg();
            display();
            break;
            
    case 6:
            DeleteFromEnd();
            break;

    case 7:
            DeleteFromPos();
            break;
    case 8: 
            search();



    default:
            printf("\ninvalid choice: ");
 }
 }
    
 
 } 