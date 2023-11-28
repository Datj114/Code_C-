#include<iostream>
using namespace std;

//khai bao kieu du lieu phan tu
struct SinhVien{
	int id;
	char hoTen[30];
	int tuoi;
	float diemTK;
};

//khai bao kieu du lieu Note
struct Node{
	SinhVien infor;
	Node*next;
};

//khai bao kieu con tro Node
typedef Node*TRO;

// khoi tao danh sach rong
void creat(TRO &L){
	L=NULL;
}

// kiem tra danh sach rong
int empty(TRO L){
	return L==NULL;
}

//ham duyet danh sach
void travel(TRO L){
	TRO Q;
	if(!empty(L)){
		Q=L;
		if(Q!=NULL){
			Q=Q->next;
		}
	}
}
/* tim kiem mot node tren danh sach
TRO search(TRO L){
	TRO Q=L;
	while(Q!=NULL && (DKTM chua thoa))
		Q=Q->next;
	return Q;
}
*/

// tren mot node vao dau danh sach
void firstAdd(TRO &L, SinhVien x){
	TRO P;
	P=new Node;
	P->infor=x;
	P->next=L;
	L=P;
}

//tren phan tu vao cuoi danh sach
void Add(TRO &L, SinhVien x){
	TRO P,Q;
	P=new Node;P->infor=x;
	P->next=NULL;
	if(empty(L)) L=P;
	else{
		Q=L;
		while(Q!=NULL)
			Q=Q->next;
		Q->next=P;
	}
}

// tren mot node vao sau nut tro boi Q
//ham insert cung tren phan tu vao cuoi danh sach
void insert(TRO &L, SinhVien x, TRO Q){
	TRO P= new Node;
	P->infor = x;
	P->next=Q->next;
	Q->next=P;
	
}

// xoa node dau tien cua danh sach
void firstDelete(TRO &L){
	TRO Q=L;
	L=L->next;
	delete Q;
}

//xoa node dung sau node tro boi M
void after_Delete(TRO &L,TRO M){
	TRO Q=M->next;
	M->next=Q->next;
	delete Q;
}
 //tao mot danh sach moi
 
 // tim vi tri xoa
TRO timvtk(int vt, TRO L){
	int dem=1;
	TRO Q=L;
	while(Q!=NULL && dem<vt-1){
		Q=Q->next;
		dem++;
	}
	return Q;
 }
 
 //in 
void in(TRO L){
	while(L!=NULL){
		L=L->next;
		cout<<L->info<<" ";
		
	}
}

//xap xep
void sapxep(TRO &L){
	for(TRO p=L;p->next!=NULL;p=p->next){
		TRO min=p;
		for(TRO q=p->next;q->next!=NULL;q=q->next){
			if(q->data < min->data){
				min=q
			}
		}
		int tmp = min->data;
		min->data = p->data;
		p->data=tmp;
	}
}
int main(){
//con tro L tro vao Node dau
TRO L;
}
