#include <iostream>

using namespace std;
struct Node{
    int node;
    Node *right;
    Node *left;
}*root = NULL;
Node *getNode();
void BinaryTree();
void inorder(Node *root);
void preorder(Node *root);
void postorder(Node *root);
void BST_Search(Node *root, int num);
void insertNode(Node *root);

int main()
{
    BinaryTree();

    cout<<"Inorder!"<<endl;
    inorder(root);

    cout<<"\n Preorder!"<<endl;
    preorder(root);

    cout<<"\n Postorder!"<<endl;
    postorder(root);
    cout<<endl;
   BST_Search(root, 40);
   //insertNode(root);

   cout<<"Inorder!"<<endl;
    inorder(root);
    return 0;
}
Node *getNode()
{

    Node *temp = new Node;
    cout<<"Enter your node"<<endl;
    cin>>temp->node;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void BinaryTree()
{

    Node *temp;
    temp = getNode();
    root = temp;

    temp = getNode();
    root->left = temp;
    temp = getNode();
    root->left->left = temp;
    temp = getNode();
    root->left->right = temp;
    temp = getNode();
    root->left->right->left = temp;
    temp = getNode();
    root->left->right->right = temp;


    temp = getNode();
    root->right = temp;
    temp = getNode();
    root->right->left = temp;
    temp = getNode();
    root->right->right = temp;
    temp = getNode();
    root->right->right->left = temp;


}
void inorder(Node *root)
{
     // unforgettable final exam question!
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->node<<" ";
    inorder(root->right);
    cout<<root->node<<" ";
}

void preorder(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->node<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->node<<" ";
}

void BST_Search(Node *root, int num)
{

    if(root == NULL)
        return;
    else {
        if(root->node == num)
        {
        num = root->node;
        cout<<"Here is the element of the node "<<num<<" which exists at memory address: "<<root<<endl;
        }
       else if(root->node>num)
        return BST_Search(root->left, num);
      else
        return BST_Search(root->right, num);
    }
}
