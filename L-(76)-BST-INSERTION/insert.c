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
    
    void insert(struct node* root,int key){
        struct node* prev = NULL;
        while(root!=NULL){
            prev = root;
            if(root->data==key){
                printf("Cannot Be Inserted Duplicate Values: %d",key);
                return;
            }
            else if(root->data > key){
                root = root->left;
            }
            else {
                root = root->right;
            }
        }
        // After Traversing The Root Node Will Be NULL That's Why We Point Previous Which Is Just Previous Node Pointer
        struct node* new = createNode(key);
        if(prev->data > key){
            prev->left = new;
        }
        else{
            prev->right = new;
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
    
    insert(p,90);
    printf("Inserted: %d ",p->right->right->data);
return 0;
}
