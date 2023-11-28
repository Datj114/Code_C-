#include <iostream>
using namespace std;

// Khai báo ki?u Node
struct Node {
    int infor;
    Node* left;
    Node* right;
};

typedef Node* Tro;

// Hàm thêm m?t giá tr? vào cây nh? phân
void insert(Tro& root, int value) {
    if (root == NULL) {
        root = new Node;
        root->infor = value;
        root->left = root->right = NULL;
    } else {
        if (value < root->infor) {
            insert(root->left, value);
        } else if (value > root->infor) {
            insert(root->right, value);
        }
    }
}

// Hàm ki?m tra xem m?t giá tr? có t?n t?i trong cây không
Tro search(Tro root, int value) {
    if (root == NULL) {
    	return NULL;
    }
    
    if (root->infor == value) {
        return root;
    } else if (value < root->infor) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}
//xoa node 
Tro findmostLeft(Tro root){
	if(root->left!=NULL){
		return findmostLeft(root->left);
	}
	return root;
}

Tro deleteNode(Tro& root, int value) {
    if (root == NULL) {
        return root;
    }
    
    if (value < root->infor) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->infor) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == NULL) {
            Tro temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Tro temp = root->left;
            delete root;
            return temp;
        }
        
        Tro temp = findmostLeft(root->right);
        root->infor = temp->infor;
        root->right = deleteNode(root->right, temp->infor);
    }
    return root;
}
void inOrderTraversal(Tro root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->infor << " ";
    inOrderTraversal(root->right);
}

int main() {
    Tro Root = NULL;
    int values[] = {15, 7, 24, 2, 10, 20, 34, 9, 12, 55};

    for (int i = 0; i < 10; i++) {
        insert(Root, values[i]);
    }
    
	cout << "Danh sach cac khoa tren cay (thu tu tang dan): ";
    inOrderTraversal(Root);
    cout << endl;

    int inforToInsert = 40;
    insert(Root, inforToInsert);
    cout << "Da chen khoa " << inforToInsert << " vao cay." << endl;

    int inforToSearch = 9;
    if (search(Root, inforToSearch)) {
        cout << "Tim thay khoa " << inforToSearch << " tren cay." << endl;
    } else {
        cout << "Khong tim thay khoa " << inforToSearch << " tren cay." << endl;
    }

    int inforToDelete = 7;
    Root = deleteNode(Root, inforToDelete);
    cout << "Da xoa khoa " << inforToDelete << " khoi cay." << endl;

    cout << "Danh sach cac khoa tren cay sau khi xoa: ";
    inOrderTraversal(Root);
    cout << endl;

    return 0;
}

