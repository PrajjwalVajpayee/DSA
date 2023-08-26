#include <bits/stdc++.h>
using namespace std;
/*
class solution{
private:
public:
};
*/
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};
//      :BULD A TREE USING INORDER AND PRE-ORDER:
class solution
{
private:
public:
    int findposition(int in[], int element, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (in[i] == element)
                return i;
        }
        return -1;
    }
    Node *solve(int in[], int pre[], int &index, int inorderstart, int inorderend, int n)
    {
        if (index >= n || inorderstart > inorderend)
        {
            return NULL;
        }
        int element = pre[index++];
        Node *root = new Node(element);
        int position = findposition(in, element, n);

        root->left = solve(in, pre, index, inorderstart, position - 1, n);
        root->right = solve(in, pre, index, position + 1, inorderend, n);
        return root;
    }
    Node *buildtree(int in[], int pre[], int n)
    {
        int preorderindex = 0;
        Node *ans = solve(in, pre, preorderindex, 0, n - 1, n);
        return ans;
    }
};