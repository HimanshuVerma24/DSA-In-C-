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
    
    struct node* search(struct node* root,int key){
        while(root!=NULL){
            if(root->data==key){
                return root;
            }
            else if(root->data > key){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        return NULL;
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
 
    tree* x = search(p,4);
    if(x!=NULL){
    printf("Found: %d ",x->data);
    }
    else
    printf("Element Not Found");
    
    
return 0;
}
