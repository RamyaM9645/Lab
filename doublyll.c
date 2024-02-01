#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;

}*head,*temp,*tail;

struct node* create()
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    if(!new_node)
    {
        printf("memeory allocation failed");
        return NULL;
    }
    new_node->next=NULL;
    new_node->prev=NULL;
    return new_node;
}

void insert_beg()
{
    int d;
    printf("enter the data to insert: ");
    scanf("%d",&d);
    struct node * new = create();
    new->data=d;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
    head->prev=new;
    new->next=head;
    head=new;
    }


}

void InsertAtPos()
{
    int d;
    int pos;
    int i=1;
    struct node* new=create();
    printf("enter the data to insert : ");
    scanf("%d",&d);
    printf("enter the position: ");
    scanf("%d",&pos);
    if(pos<1 )
    {
        printf("invalid possition");
    }
    else if(pos==1  || head==NULL )
    {
        insert_beg();
    }
    new->data=d;
    temp=head;
    while(i<pos-1 && temp!=0)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL)
    {
        printf("invalid possition");
        return;

    }
    new->prev=temp;
    new->next = temp->next;
    
    if (temp->next != NULL)
    {
        temp->next->prev = new;
    }
    
    temp->next = new;
}

    



void insertEnd()
{
    int d;
    printf("enter the data : ");
    scanf("%d",&d);
    struct node* newnode = create();
    newnode->data=d;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;   
        newnode->prev=tail;
        tail=newnode;

    }



}

void delete_beg()
{
    if(head==NULL)
    {
        printf("empty ");
    }
    else{
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);

    }
}

void delete_pos()
{
    int pos;
    int i=1;
    printf("enter the possition to delete : ");
    scanf("%d",&pos);
    if(pos==1)
    {
        insert_beg();
        return;
    }
    temp=head;
    while(i<pos)    
    {
        temp=temp->next;
        i++;
    }

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);

}

void delete_end()
{
    if(head==NULL)
    {
        printf("empty");
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        free(temp);

    }
}

void display()
{
    if(head==NULL)
    {
        printf("linkedlist is empty");

    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
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

void main()
{
    int ch;
    head = NULL;
    while(1)
    {
    
    printf("\n1.insert at beginning  \n2.insert at pos \n3.insert at end \n4.delete from beg \n5,delete from pos \n6.delet from end \n7.display \n8.search ");
    printf("\n enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        insert_beg();
        printf("\nlinkedlist is....\n");
        display();
        break;

        case 2:
        InsertAtPos();
        display();
        break;

        case 3:
        insertEnd();
        display();
        break;

        case 4:
        delete_beg();
        display();
        break;

        case 5:
        delete_pos();
        display();
        break;

        case 6:
        delete_end();
        display();
        break;

        case 7:
        display();
        break;

        case 8:
        search();
        break;

        default:
        printf("invalid choice");

    }
}
}