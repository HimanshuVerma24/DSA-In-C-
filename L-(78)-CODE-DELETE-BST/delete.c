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
    
    void inOrder(struct node* root){
        if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
        }
    }

struct node* inOrderPredecessor(struct node* root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

    struct node* deleteNode(struct node* root,int value){
    struct node* iPre;
        if(root==NULL){
            return NULL;
        }
       else if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }
        // Search Node Which Is To Be Delete.
        else if(root->data > value){
            root->left =  deleteNode(root->left,value);
        }
        else if(root->data < value){
           root->right = deleteNode(root->right,value);
        }
        // Delete Strategy When The Node Is Found
        else{
            iPre = inOrderPredecessor(root);
            root->data = iPre->data;
           root->left = deleteNode(root->left,iPre->data);
        }
        return root;
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

    inOrder(p);
    printf("\n");
    deleteNode(p,1);
    inOrder(p);
    
return 0;
}
