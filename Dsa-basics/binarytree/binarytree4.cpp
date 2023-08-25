#include <iostream>
using namespace std;
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
//       :SUM OF LONGEST BLOODLINE OF TREE:
/*
class solution
{
public:
    void solve(Node *root, int len, int &maxlen, int sum, int &maxsum)
    {
        if (root == NULL)
        {
            if (len > maxlen)
            {
                len = max(len, maxlen);
                sum = max(sum, maxsum);
            }
            else if (len == maxlen)
            {
                sum = max(sum, maxsum);
            }
            return;
        }
        sum = sum + root->data;
        solve(root->left, sum, maxsum, len + 1, maxlen);
        solve(root->right, sum, maxsum, len + 1, maxlen);
    }
    int sumofroot(Node *root)
    {
        int len = 0;
        int maxlen = 0;
        int sum = 0;
        int maxsum = 0;
        solve(root, len, maxlen, sum, maxsum);
        return maxsum;
    }
};
*/
//      ::
int main()
{
}