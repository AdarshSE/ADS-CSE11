#include <iostream>
#include <queue>
using namespace std;
template<typename type>
class tree {
    struct Node {
        type data;
        Node* left;
        Node* right;

        Node(type value) {
            data = value;
            left = right = nullptr;
        }
    };
public:
    Node* Root;
    tree() {
        Root = new Node('F');
        Root->left = new Node('B');
        Root->right = new Node('G');
        Root->left->left = new Node('A');
        Root->left->right = new Node('D');
        Root->left->right->left = new Node('C');
        Root->left->right->right = new Node('E');
        Root->right->right = new Node('I');
        Root->right->right->left = new Node('H');
    }
void BSF()
{
    if (Root == nullptr)
        return;
    queue<Node*> q;
    q.push(Root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
}
};

int main() {
    tree<char> t;
    cout << "BSF Traversal: ";
    t.BSF();
    return 0;
}
