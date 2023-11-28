#include <iostream>
#include <iomanip> // Include the iomanip header for setw
using namespace std;

struct sinhvien {
    char id[20];
    char hoten[20];
    float diem;
};

struct Node {
    sinhvien infor;
    Node *next;
};

typedef Node *tro;

// nhap thong tin sv
void nhap(sinhvien &x) {
    cout << "id";
    fflush(stdin);
    gets(x.id);
    cout << "hoten";
    fflush(stdin);
    gets(x.hoten);
    cout << "diem";
    cin >> x.diem;
}

void taods(tro &L) {
    L = NULL; // tao ds rong;
    sinhvien x;
    tro Q = new Node;
    int i = 0;
    do {
        nhap(x);
        tro P = new Node;
        P->infor = x;
        if (L == NULL) {
            P->next = NULL;
            L = P;
        } else {
            Q->next = P;
        }
        Q = P;
        i++;
    } while (i < 4);
}

void hienthi(tro L) {
    cout << "stt";
    cout << setw(4) << "hoten";
    cout << setw(14) << "id";
    cout << setw(20) << "diem"<<endl;
    int i = 1;
    for (tro p = L; p != NULL; p = p->next) {
        cout << i;
        i++;
        cout << setw(5) << p->infor.hoten;
        cout << setw(14) << p->infor.id;
        cout << setw(20) << p->infor.diem << endl; // Added endl for new line
    }
}

void xoa_3(tro &L){
	tro P=L->next;
	tro Q=P->next;
	P->next=Q->next;
	delete Q;
}
void xoa_n(tro &L){
	tro P=L;
	int n,i=0;
	cout<<"n=";cin>>n;
	//tim vt trc vt xoa
	while(P->next!=NULL&& i<n-2){
		i++;
		P=P->next;
	}
	if(P->next==NULL){
		delete P;
	}
	else if(P==L) {
		L=L->next;
		delete P;
	}
	else{
		tro Q=P->next;
		P->next=Q->next;
		delete Q;
	}
}
// tren
void insert(tro &L){
		int i=1,n;
	cout<<"vi tri tren";cin>>n;
	// nhap thong tin
	sinhvien x;
	nhap(x);

	//tao con tro chua thông tin
	tro P=L;
	tro Q=new Node;
	Q->infor=x;
	// neu vtri chen la 1 
	if(n==1){
		Q->next=L;
		L=Q;
		return;
	}
	// vi tri khac 1, ta tim vi tri truoc vi tri tren
	while(P->next!=NULL && i<n-1){
		P=P->next;
		i++;
	}

// thuc hien tren
	Q->next=P->next;
	P->next=Q;
	
}
int main() {
    tro L;
    taods(L);
    //xoa_n(L);
    insert(L);
    hienthi(L);
    return 0;
}

