#include<iostream>
#include<iomanip>
using namespace std;
struct giaovien{
	char hoten[20];
	string gioitinh;
	int namsinh;
};
struct Node{
	giaovien infor;
	Node *next;
};
typedef Node *tro;
tro L;
void nhap(giaovien &x){
	cout<<"nhap ten";fflush(stdin);gets(x.hoten);
	cout<<"gioi tinh";cin>>x.gioitinh;
	cout<<"tuoi";cin>>x.namsinh;
}
void taods(tro &L){
	giaovien x;
	tro P,Q;int i=0;
	L=NULL;
	do{
		nhap(x);
		P=new Node;
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
void hienthi(tro &L){
	cout<<"STT";
	cout<<setw(7)<<"ten";
	cout<<setw(15)<<"gioitinh";
	cout<<setw(20)<<"tuoi"<<endl;
	int i=1;
	for(tro P=L;P!=NULL;P=P->next){
		giaovien x=P->infor;
		cout<<i++;
		cout<<setw(7)<<x.hoten;
		cout<<setw(15)<<x.gioitinh;
		cout<<setw(20)<<x.namsinh<<endl;
	}
}
void hienthinam(tro &L){
	cout<<endl<<"ds gv nam";
	cout<<"STT";
	cout<<setw(7)<<"ten";
	cout<<setw(15)<<"gioitinh";
	cout<<setw(20)<<"tuoi"<<endl;
	int i=1;
	for(tro P=L;P!=NULL;P=P->next){
		if(P->infor.gioitinh=="nam"){
			giaovien x=P->infor;
			cout<<i++;
			cout<<setw(7)<<x.hoten;
			cout<<setw(15)<<x.gioitinh;
			cout<<setw(20)<<x.namsinh<<endl;
		}
	}
}
int timnammin(tro &L){

	int min=L->infor.namsinh;
	for(tro P=L->next;P!=NULL;P=P->next){
		if(P->infor.namsinh<min){
			min=P->infor.namsinh;
		}
	}
	return min;
}
void xoa(tro &L){
	int min=timnammin(L);
	tro P=L;
	tro Q=P;
	// tim vi tri trc min
	while(P!=NULL){
		if(P->infor.namsinh==min) {
		
			break;
		}
		Q=P;
		P=P->next;
	}
	
	if(Q->next==NULL){
		delete Q;
	}
	else if(L==Q&&L==P){
		L=L->next;
		delete Q;
	}
	else{
		tro K=Q->next;
		Q->next=K->next;
		delete K;		
	}
}
//
//tro minns(tro &L){
//	tro min=L,p=L;
//	while(p!=NULL){
//		if(min->infor.namsinh>p->infor.namsinh){
//			min=p;
//		}
//		p=p->next;
//	}
//	return min;
//}
//
//void xoa(tro &L){
//	tro w=minns(L),p=L,trc=L, sau=trc->next;
//	int dem =1;
//	while(p!=NULL){
//		if(p->infor.namsinh==w->infor.namsinh) break;
//		p=p->next;
//		dem++;
//	}
//	cout<<"dem sau= "<<dem<<endl;
//	if( dem==1){
//		L=sau;
//	}
//	else{
//		for(int i=0;i<dem-2;i++){
//			trc=sau;
//			sau=sau->next;
//		}
//		trc->next=sau->next;
//	}
//}
//
void tren3(tro &L){
	tro P=L->next;
	giaovien x;
	nhap(x);
	tro Q=new Node;
	Q->infor=x;
	Q->next=P->next;
	P->next=Q;
}
int main(){
	taods(L);
	hienthi(L);
//	hienthinam(L);
//	cout<<"nam sinh nho ngat"<<timnammin(L);
	xoa(L);
//	tren3(L);
	hienthi(L);
	return 0;
}
