// BST CHECK

(1) If Inorder Of BST Tree Is In Acending Order Then It Is Called a BST Tree.

(2) This Code Will Check BST

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
