
#include <iostream>
using namespace std;

template<typename type>
class tree {
    struct Node {
        type data;
        Node* left;
        Node* right;

        Node(type d) {
            data = d;
            left = right = nullptr;
        }
    };

public:
    Node* Root = nullptr;

    tree() {
        Node* f = new Node('F');
        Node* b = new Node('B');
        Node* g = new Node('G');
        Node* a = new Node('A');
        Node* d = new Node('D');
        Node* i = new Node('I');
        Node* c = new Node('C');
        Node* e = new Node('E');
        Node* h = new Node('H');

        Root = f;
        f->left = b;
        f->right = g;
        b->left = a;
        b->right = d;
        d->left = c;
        d->right = e;
        g->right = i;
        i->left = h;
    }

    int countNodes(Node* root) {
        if (root == nullptr)
            return 0;

        return 1 + countNodes(root->left)
                 + countNodes(root->right);
    }
};

int main() {
    tree<char> t;

    cout << "Total Nodes: " << t.countNodes(t.Root);

    return 0;
}
