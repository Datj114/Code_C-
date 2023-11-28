#include<iostream>
using namespace std;
// ctdl tuyen tinh luu tru danh sach sinh vien
#define MAX 6
struct SinhVien{
	char hoTen[30];
	int tuoi;
	double diemTk;
};
struct List{
	int count;
	SinhVien e[MAX];
};

//khoi tao danh sach rong
void creat(List &L){
	L.count=-1;
}

//kiem tra danh sach rong
int empty(List L){
	return (L.count==-1);
	// rong tra ve 1
}

//kiem tra danh sach day
int full(List L){
	return (L.count == MAX-1);
	// day se tra ve 1, nguoc lai 0
}

//nhap phan thong tin 1 sv
void input(SinhVien &x){
	cin>>x.hoTen;
	cin>>x.diemTk;
	cin>>x.tuoi;
}

//them mot phan tu vao cuoi danh sach
int add(List &L, SinhVien x){
	if(full(L)) return 0;
	else{
		L.count++;
		L.e[L.count]=x;
		return 1;
	}
}


//chen mot phan tu vao danh sach
int insert(List &L, int vt, SinhVien x){
	if(vt<=L.count+1 && vt>0 && !full(L)){
	
		for(int i=L.count;i>=vt-1;i--){
			L.e[i+1]=L.e[i];
		}
		L.count+=1;
		L.e[vt-1]=x;
		return 1;
	}
	return 0;
}


//loai bo phan tu thu k ra khoi danh sach
int remove(int k, List &L){
	if(k>0 &&k<=L.count+1){	
		for(int i=k;i<L.count;i++)
			L.e[i-1]=L.e[i];
		L.count-=1;
		return 1;
	}
}

//hien thi danh sach
void display(List L){
	for(int i=0;i<=L.count;i++){
		cout<<"sinh vien thu"<<i+1<<endl;
		cout<<L.e[i].hoTen<<endl;
		cout<<L.e[i].diemTk<<endl;
		cout<<L.e[i].tuoi<<endl;
	}
}
int main(){
	List L;
	SinhVien x;
	creat(L);
	cout<<empty(L)<<endl;
	cout<<full(L)<<endl;
	input(x);
	cout<<add(L,x)<<endl;
	cout<<"bandau"<<L.count;
	SinhVien y;
	input(y);
	cout<<"check"<<insert(L,1,y)<<endl;
	cout<<L.count;
	display(L);
	return 0;
}
