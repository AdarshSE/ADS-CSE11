#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    int height(Node* node)
    {
        if (node == NULL)
            return 0;

        return 1 + max(height(node->left), height(node->right));
    }
};

int main()
{
    Node* root = new Node(11);
    root->left = new Node(21);
    root->right = new Node(31);
    root->left->left = new Node(41);
    root->left->right = new Node(51);
    root->right->left = new Node(61);
    root->right->right = new Node(71);

    Node obj(0);
    cout << "Height of the tree is: " << obj.height(root) << endl;

    return 0;
}
