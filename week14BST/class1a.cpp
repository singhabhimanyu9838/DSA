#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

// O(logn) -> insert

Node *buildBST(int val, Node *root)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    else
    {
        if (root->data > val)
        {
            // val-> left subtree
            root->left = buildBST(val, root->left);
        }
        else
        {
            // val -> right subtree
            root->right = buildBST(val, root->right);
        }
    }
    return root;
}

// preorder traversal

void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


//inordertraversal

void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

//postorder traversal

void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

Node *createTree()
{
    cout << "Enter the value for Node: " << endl;
    int val;
    cin >> val;
    Node *root = NULL;

    while (val != -1)
    {
        root = buildBST(val, root);
        cout << "Enter the value for Node: " << endl;
        cin >> val;
    }

    return root;
}

void level(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }
    }
}

int getMin(Node* root){
    if(root == NULL){
        return -1;
    }

    while(root->left != NULL){
        root = root->left;
    }
    //iska mtlb , jb main yaha pohochunga
    //tb root 
    return root->data;
}


int getMax(Node* root){
    if(root == NULL){
        return -1;
    }

    while(root->right != NULL){
        root = root->right;
    }
    //iska mtlb , jb main yaha pohochunga
    //tb root 
    return root->data;
}

bool searchBST(Node* root , int target){
    if(root == NULL)return false;
    if(root->data == target){
        return true;
    }else{
        //data != target
        //decide -> left ya right jau
        if(target < root->data){
            searchBST(root->left , target);
        }else{
            searchBST(root->right , target);
        }
    }
}

int main()
{

    Node *root = createTree();

    cout<<"Printing level order : "<<endl;
    level(root);

    cout<<endl <<"inordertraversal: ";
    inorderTraversal(root);

    cout<<endl <<"preordertraversal: ";
    preorderTraversal(root);

    cout<<endl <<"postordertraversal: ";
    postorderTraversal(root);
    cout<<endl;
    //NOTE : inoder of BST is always sorted 

    cout<<"Min element "<<getMin(root)<<endl;
    cout<<"Max element "<<getMax(root)<<endl;

    if(searchBST(root , 90)){
        cout<<"element found";
    }else{
        cout<<"not found";
    }

    return 0; 
}