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

    void InOrder(struct node* root){
        if(root!=NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
        }
    }

    int BST(struct node* root){
        static struct node* prev = NULL;
        if(root!=NULL){
            if(!BST(root->left)){
                return 0;
            }
            if(prev != NULL && root->data <= prev->data){
                return 0;
            }
            prev = root;
            return BST(root->right);
        }
        else{
            return 1;
        }
    }
int main(){
    tree *p = createNode(5);
    tree *p1 = createNode(3);
    tree *p2= createNode(6);
    tree *p3 = createNode(1);
    tree *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
 
    InOrder(p);
    printf("\n");
    printf("%d ",BST(p));
 
return 0;
}