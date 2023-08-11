#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "enter data:" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for right" << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void fromlevelorder(node*root){
    queue<node*> q;
    int data ;
    cin>>data;
    root =new node(data);
    q.push(root);
    while (!q.empty())
    {
        node*temp=q.front();
        q.pop();
        cout<<"Enter Left Data: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
           temp->left=new node(leftdata);
            q.push( temp->left);
        }
        cout<<"Enter right data: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
         if(rightdata!=-1){
           temp-> right=new node(rightdata);
            q.push(temp->right);
        }
    }
    
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}

//   1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *root = NULL;
    root = buildtree(root);
    levelordertraversal(root);
    cout << "Inorder traversal is: "
         << " ";
    inorder(root);
    cout << "Preorder traversal is: "
         << " ";
    preorder(root);
    cout << "Postorder traversal is: "
         << " ";
    postorder(root);

    return 0;
}