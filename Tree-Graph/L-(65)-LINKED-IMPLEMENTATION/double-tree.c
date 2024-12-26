#include <stdio.h>
#include <stdlib.h>
 
   typedef struct node{
        int data;
        struct node* left;
        struct node* right; 
    }tree;

// Creating The Node Pointer (To Avoid the Repeatative Task)
tree *nodeCreate(int data){
    tree *p;
    p = (tree*)malloc(sizeof(tree));
    p->left = NULL;
    p->right = NULL;
    p->data = data;
    return p;
}

int main(){
// printf("Size Of Node: %d",sizeof(tree));
 
//  // Construct The Root Node.
//  tree *p = (tree*)malloc(sizeof(tree));
//  p->left = NULL;
//  p->right = NULL;
//  p->data = 12;

//  // Construct The First Node.
//  tree *p1 = (tree*)malloc(sizeof(tree));
//  p1->left = NULL;
//  p1->right = NULL;
//  p1->data = 24;

//  // Construct The Second Node.
//  tree *p2 = (tree*)malloc(sizeof(tree));
//  p2->left = NULL;
//  p2->right = NULL;
//  p2->data = 36;  

// // Linking The Nodes
// p->left = p1;
// p->right = p2;


// Making Node By Using Function (Best Method)
tree *p;
p = nodeCreate(12);

tree *p1;
p1 = nodeCreate(24);

tree *p2;
p2 = nodeCreate(36);
 
p->left = p1;
p->right = p2;
return 0;
}