#include<iostream>
#include<iomanip>
using namespace std;
struct mathang{
	string mahang;
	char tenhang[20];
	int soluong;
};
struct Node{
	mathang infor;
	Node *next;
};
typedef Node *tro;
tro L;
//tao danh sach
void nhap(mathang &x){
	cout<<"mahang ";cin>>x.mahang;
	cout<<"tenhang ";fflush(stdin);gets(x.tenhang);
	cout<<"soluong ";cin>>x.soluong;
}
void taods(tro &L){
	mathang x;
	int i=0;
	tro P,Q;
	L=NULL;
	do{
		nhap(x);
		P= new Node;
		P->infor=x;
		P->next=NULL;
		if(L==NULL){
			L=P;
		}else{
			Q->next=P;
		}
		Q=P;i++;
	}while(i<4);
}
void hienthi(tro L){
	cout<<"STT";
	cout<<setw(5)<<"mahang ";
	cout<<setw(10)<<"tenhang ";
	cout<<setw(15)<<"soluong "<<endl;int i=1;
	for(tro P=L;P!=NULL;P=P->next){
		cout<<i++;
		cout<<setw(5)<<P->infor.mahang;
		cout<<setw(10)<<P->infor.tenhang;
		cout<<setw(15)<<P->infor.soluong<<endl;
	}
}
//
void show(tro L){
	cout<<endl<<"mat hang nho hon 10"<<endl;
	for(tro P=L;P!=NULL;P=P->next){
		if(P->infor.soluong<10){
			cout<<setw(5)<<P->infor.mahang;
			cout<<setw(10)<<P->infor.tenhang;
			cout<<setw(15)<<P->infor.soluong<<endl;
		}
	}
}
//
void xoa(tro &L){
	cout<<"xoa mat hang min"<<endl;
	//
	int min=L->infor.soluong;
	for(tro P=L;P!=NULL;P=P->next){
		if(P->infor.soluong<min){
			min=P->infor.soluong;
		}
	}
	//
	int i=1;
	for(tro P=L;P!=NULL;P=P->next){
		if(P->infor.soluong==min){
			break;
		}
		i++;
	}
	// 
	tro P=L;
	if(i==1){
		L=L->next;
		delete P;
	}else{
		int a=1;
		while(P->next!=NULL && a<i-1){
			P=P->next;
			a++;
		}
		if(P->next==NULL){
			delete P;
		}else{
			tro Q=P->next;
			P->next=Q->next;
			delete Q;
		}
	}
	hienthi(L);
}

void chen3(tro &L){
	tro H=L;int i=0;
	while(H!=NULL){
		i++;
		H=H->next; 
	} 
	if(i<3){
		cout<<"ds ko toi 3 phan tu,ko chen dc";
	}
	else{
		cout<<endl<<"them thong tin mat hang"<<endl;
		mathang x;
		nhap(x);
		tro P=new Node;
		P->infor=x;
		tro Q=L->next;
		P->next=Q->next;
		Q->next=P;
		hienthi(L);
	}

}
int main(){
	taods(L);
	hienthi(L);
	show(L); 
	xoa(L);
	chen3(L);
	return 0;
}