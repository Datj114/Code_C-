#include<iostream>
using namespace std;

struct Node{
	int infor;
	Node *left, *right;
};
 typedef Node* tro;

tro Root=NULL;

bool insert( tro &Root, int infor){
	if(Root == NULL){
		//tao 1 con tro moi chua gia tri infor va 2 con tro trai phai
		Root = new Node;
		Root->infor=infor;
		Root->left=Root->right=NULL;
		return true;
	}
	else{
		if(infor > Root->infor){
			//gia tri nho hon thi dien vao cay ben trai
			return insert(Root->right, infor);
		}
		else if(infor < Root->infor	){
			//gia tri lon hon thi dien vao cay ben trai
			return insert(Root->left, infor);
		}
		else{
			return false;
		}	
	}
}

bool search(tro &Root, int infor){
	if (Root->infor == NULL){
		return false;
	}
	else if(infor < Root->infor){
		//gia tri nho hon thi tim tiep o cay ben trai
		return	search(Root->left, infor);
	}
	else if( infor > Root->infor){
		//gia tri lon hon thi tim tiep o cay ben phai
		return search(Root->right, infor);
	}
	else {
		return true;
	}
}

tro findMostLeft( tro &Root){
	if(Root->left != NULL){
		//neu ben trai van con thi tiep tuc tuc tim den con tro tiep theo ben trai
		return findMostLeft(Root->left);
	}
	else{
		return Root;
	}
}

tro findMostRight(tro &Root){
	if(Root->right != NULL){
		//neu ben phai van con thi tiep tuc tuc tim den con tro tiep theo ben phai
		return findMostLeft(Root->right);
	}
	else{
		return Root;
	}
}

tro deleteNode(tro &Root, int infor){
	if(Root == NULL){
		return Root;
	}
	else if(infor < Root->infor){
		//thuc hien xoa phan tu infor o phia Root->left dong thoi thuc hien tro con tro Root->left den con tro sau con tro can xoa khi tim dc gia tri bang gia tri infor
		Root->left = deleteNode(Root->left, infor);
	}
	else if(infor > Root->infor){
		//thuc hien xoa phan tu infor o phia Root->right dong thoi thuc hien tro con tro Root->right den con tro sau con tro can xoa khi tim dc gia tri bang gia tri infor
		Root->right = deleteNode(Root->right, infor);
	}
	else{
		//khi infor == Root->infor thi co 3 th
		//Th 1 phan tu infor l? l?
		if(Root->left ==NULL && Root->right == NULL){
			delete Root;
		}
		//TH2 phan tu infor c? l? ben phai
		else if(Root->left ==NULL && Root->right != NULL){
			//tao 1 con tro temp de xac dinh con tro sau nut can xoa => de ghep lai vao cay
			tro temp = Root->right;
			delete Root;
			return temp;
			// return temp vi gan vao vao cau lenh 71 hoac 75
		}
		else if(Root->left !=NULL && Root->right == NULL){
			//tao 1 con tro temp de xac dinh con tro sau nut can xoa => de ghep lai vao cay
			tro temp = Root->left;
			delete Root;
			return temp;
			// return temp vi gan vao vao cau lenh 71 hoac 75

		}
		//tao con tro tim phai nhat cua ben trai
		tro temp = findMostRight(Root->left);
		//thay the gia tri Root->infor bang gia tri cua con tro temp chi den 
		Root->infor = temp->infor;
		//xoa cac con tro co gia tri bang temp->infor phia ben trai hay la xoa con tro ma temp chi den 
		Root->left= deleteNode(temp->left, temp->infor);
	}
	return Root;
}
void inOrderTraversal(tro Root) {
    if (Root == NULL) {
        return;
    }
    inOrderTraversal(Root->left);
    cout << Root->infor << " ";
    inOrderTraversal(Root->right);
}

int main() {
    int infors[] = {15, 7, 24, 2, 10, 20, 34, 9, 12, 55};

    for (int i = 0; i < 10; i++) {
        insert(Root, infors[i]);
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



