#include <iostream>
using namespace std;
struct Node
{
    int infor;
    Node *left, *right;
};
typedef Node *tro;
// hàm chèn m?t giá tr? vào tree
int insert(tro &root, int infor)
{
    if (root == NULL)
    {
        root = new Node;
        root->infor = infor;
        root->left = root->right = NULL;
        return 1;
    }
    else if (root->infor > infor)
    {
        return (insert(root->left, infor));
    }
    else if (root->infor < infor)
    {
        return (insert(root->right, infor));
    }
    return 0;
}

// search tree
bool search(tro root, int infor)
{
    if (root == NULL)
        return false;
    else if (root->infor > infor)
    {
        /* code */
        return search(root->left, infor);
    }
    else if (root->infor == infor)
        return true;
    return search(root->right, infor);
}
tro findmostleft(tro root)
{
    if (root->left != NULL)
    {
        return findmostleft(root->left);
    }
    return root;
}
tro findmostright(tro root)
{
    if (root->right != NULL)
    {
        return (findmostright(root->right));
    }
    return root;
}
// bool deleteNode(tro &root, int infor)
// {
//     if (search(root, infor))
//     {
//     }
// }
int main()
{
    tro root = NULL;
    int infors[] = {15, 7, 24, 2, 10, 20, 34, 9, 12, 55};
    for (int i = 0; i < 10; i++)
    {
        insert(root, infors[i]);
        
    }
		if(search(root,55)) cout<<"co thay";
		else cout<<"khong thay";
    return 0;
}
