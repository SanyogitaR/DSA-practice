#include <iostream>
using namespace std;
#include <queue>

// creating a node 
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

node *buildTree(node *root)
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "enter data for inserting in left" << endl;
    root->left = buildTree(root->left);
    cout << "enter data for inserting in right" << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelorderTraversal(node *root)
{
if (root == NULL) return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        
        q.pop();

        if (temp == NULL)
        { // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            { // queue still has some child nodes
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

int main()
{
    node *root = NULL;
    // Creating a tree
    root = buildTree(root);
    // level order
    cout << " printing the level order traversal output" << endl;
    levelorderTraversal(root);
    return 0;
}