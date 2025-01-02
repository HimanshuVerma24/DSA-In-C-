#include <stdio.h>
#include <stdlib.h>

 
    typedef struct node{
        int data;
        struct node* left;
        struct node* right;
    }tree;

    tree* createNode(int data){
        tree*p = (tree*)malloc(sizeof(tree));
        p->data = data;
        p->left = NULL;
        p->right = NULL;
        return p;
    }

    void postOrder(struct node* root){
        if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
        }
    }

int main(){
    tree *p = createNode(4);
    tree *p1 = createNode(1);
    tree *p2= createNode(6);
    tree *p3 = createNode(5);
    tree *p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
 
    postOrder(p);
 
 
return 0;
}