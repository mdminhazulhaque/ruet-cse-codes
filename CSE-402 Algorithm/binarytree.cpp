#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <list>
#include <queue>
#include <cstdio>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
#define CLEAR(A, x) ( memset(A,x,sizeof(A)) )
#define MAX 110
#define pii pair <int, int>
#define S(x) scanf("%d", &x)
#define pf(x) printf("%d\n", x);
#define inf 1000000000
 
struct node{
    int data;
    node* left; /// saves less than or equal values
    node* right;    /// saves greater than values
};
node *root=0;
 
void inOrder(node *parent);
void preOrder(node *parent);
void postOrder(node *parent);
void inserting(int value);
int findMax(node *parent);
int findMin(node *parent);
 
main()
{
    int nodeNumber;
    printf("Enter how many nodes: ");
    S(nodeNumber);
    printf("Enter values: ");
    int value;
    for(int i=0; i<nodeNumber; i++)
    {
 
        S(value);
        inserting(value);
    }
    int option;
    cout<<"root: "<<root->data<<endl;
    while(true)
    {
        printf("Select any option below\n");
        printf("  To exit: 0\n To see preOrder: 1\n  To see inOrder: 2 \n  To see postOrder: 3\n\
 To insert another element: 4\n  To find maximum value: 5\n  To find minimum value: 6\n");
        printf("\nYour option: ");
        S(option);
        puts("");
        if(option == 0) /// To exit
        {
            printf("Ta Ta\n");
            break;
        }
        else if (option== 1)    ///To see preOrder
        {
            cout<<"Preorder : ";
            preOrder(root);
            cout<<endl;
        }
        else if (option== 2)    ///inOrder
        {
            cout<<"Inorder : ";
            inOrder(root);
            cout<<endl<<endl;
        }
        else if (option== 3)    /// postOrder
        {
            cout<<"Postorder : ";
            postOrder(root);
            cout<<endl<<endl;
        }
        else if (option== 4)    /// To insert another element
        {
            printf("Enter the value:\n");
            S(value);
            inserting(value);
            cout<<endl<<endl;
        }
        else if (option== 5)    /// To find maximum value
        {
            if(root!=NULL)
            printf("Maximum: %d\n",findMax(root));
            cout<<endl<<endl;
        }
        else if (option== 6)    /// To find minimum value
        {
            printf("Minimum: %d\n",findMin(root));
            cout<<endl<<endl;
        }
 
    }
}
 
void inserting(int value)
{
    node* N = new node;
    if(root == NULL)
    {
        N->data = value;
        N->left = NULL;
        N->right = NULL;
        root = N;
    }
    else
    {
        node* temp = new node;
        temp = 0;
        temp = root;
        while(true)
        {
            if(temp==NULL)
            {
                break;
            }
            N = temp;
            if(temp->data >= value)
            {
                if(temp->left==NULL)
                {
                    temp->left = new node;
                    temp = temp->left;
                    temp->data = value;
                    N = temp;
                    N->left = NULL;
                    N->right = NULL;
                    return;
                }
                if(temp->data == value)
                {
                    printf("%d is a Duplicate data. (Ignored)\n", value);
                    break;
                }
                temp = temp->left;
            }
            else
            {
                if(temp->right==NULL)
                {
                    temp->right = new node;
                    temp = temp->right;
                    temp->data = value;
                    N = temp;
                    N->left = NULL;
                    N->right = NULL;
                    return;
                }
                temp = temp->right;
            }
        }
    }
}
 
void inOrder(node *parent)
{
    if(parent!=NULL)
    {
        inOrder(parent->left);
        printf("%d ", parent->data);
        inOrder(parent->right);
    }
}
void preOrder(node *parent)
{
    if(parent!=NULL)
    {
        printf("%d ", parent->data);
        preOrder(parent->left);
        preOrder(parent->right);
    }
}
void postOrder(node *parent)
{
    if(parent!=NULL)
    {
        postOrder(parent->left);
        postOrder(parent->right);
        printf("%d ", parent->data);
    }
}
int findMax(node *parent)
{
    if(parent->right == NULL)
        return parent->data;
    else
        return findMax(parent->right);
}
int findMin(node *parent)
{
    if(parent->left == NULL)
        return parent->data;
    else
        return findMax(parent->left);
}