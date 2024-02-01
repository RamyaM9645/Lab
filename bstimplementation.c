#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;


}*root,*temp;

struct node *addNode()
   {
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to new node: ");
    scanf("%d", &new->data);
    new->left = NULL;
    new->right = NULL;
    return new;
}

struct node *insert(struct node *root, struct node *new)
{
    if (root == NULL)
        return new;

    if (new->data > root->data)
        root->right = insert(root->right, new);
    else
        root->left = insert(root->left, new);

    return root;
}
void in_traverse(struct node *root)
{

    if (root != NULL)
    {
        in_traverse(root->left);
        printf("%d ", root->data);
        in_traverse(root->right);
    }
}
void main()
{
    int n, v;
    do
    {
        printf("\n----------------\n 1: Insertion\n 2: Deletion\n 3: Traversal\n 4: Search\n 5: Exit\n----------------\n Enter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            root = insert(root, addNode());
            printf("\n NODE ADDED!!! ");
            break;

     

        case 2:
            in_traverse(root);
            break;

      
        }
    } while (n < 3);
}