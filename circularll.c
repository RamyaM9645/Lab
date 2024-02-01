#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}  *tail,*temp;
struct node* create()   //to create a new node in likedlist
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    if(!new_node)
    {
        printf("\n memory allocation failed! liked list overflow");
        return NULL;
    }
    return new_node;
    
}
void insert_beg()
{
    int d;
    printf("enter the element to insert:  ");
    scanf("%d",&d);
    struct node* new=create();
    new->data=d;
    new->next=0;
    if(tail==0)
    {
        tail=new;
        tail->next=new;
    }
    else{
        new->next=tail->next;
        tail->next=new;
    }

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
    else if(pos==1)
    {
        insert_beg();
    }
    else{

    struct node* newnode= create();
    newnode->data=d;
    newnode->next=0;
    temp=tail->next;    //tail next == first node

    while(i<pos-1)
    {
        temp=temp->next;
        i++;

    }
    newnode->next=temp->next;
    temp->next=newnode;

 }
 }
void InsertEnd()
{
    int d;
    printf("enter the element to insert");
    scanf("%d",&d);
    struct node* new=create();
    new->data=d;
    new->next=0;
    if(tail==0)
    {
        tail=new;
        tail->next=new;
    }
    else{
        new->next=tail->next;
        tail->next=new;
        tail=new;
    }

}

 void DeleteBeg()
{
    temp=tail->next;
    if(tail==NULL)
    {
        printf("empty");

    }
    else if(temp==tail)   //only one node in thre list
    {
        tail=NULL;
        free(temp);
    }
    else{

    tail->next=temp->next;
    free(temp);
}
}

void DeleteEnd()
{
    struct node *current,*previous;
    current=tail->next ; //first node
    if(tail==NULL)   //no node in list
    {
        printf("empty");
    }
    else if(current->next=current)   // one one node is present
    {
        tail=NULL;
        free(current);
    }
    else{
        while(current->next!=tail->next)
        {
            previous=current;
            current=current->next;
        }
        previous->next=tail->next;
        previous=tail;
        free(current);

    }
}

void DeletePos()
{
    int pos;
    int i=1;
    struct node*current,*nextnode;
    printf("enter the possition to delete : ");
    scanf("%d",&pos);
    current=tail->next ;  // set current as first node
    if(pos<1)
    {
        printf("invalid pos");
    }
    else if(pos==1)
    {
        DeleteBeg();
        return;
    }
    else{
        while(i<pos-1)
        {
            current=current->next;
            i++;
        }
        nextnode=current->next;
        current->next=nextnode->next;
        free(nextnode);
    }
}


void display()
{
    if(tail==NULL)
    {
        printf("empty");
    }
    temp=tail->next;
    while(temp->next != tail->next)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("data is...");
    printf("%d",temp->data);
}

void main()
 {
 int ch;
 while(1)
 {
    printf("\n1.insert at beginning \n 2.insert at pos \n3.insert at end \n4.display  \n5.delete from beginning \n6.delete from end \n7.delete from pos \n8.search \n9.exit");
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
       // printf("\nlinkedlist is....\n");
        //display();
        break;

        case 2:
        InsertAtPos();
        //display();
        break;

        case 3:
        InsertEnd();
       // display();
        break;

        case 4:
        display();
        break;

        case 5:
        DeleteBeg();
        break;

        case 6:
        DeleteEnd();
        break;

        case 7:
        DeletePos();
        break;

    }
 }
 }