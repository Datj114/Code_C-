#include<iostream>
using namespace std;
struct SinhVien{
	int masv;
	char hoten[30];
	int namsinh;
	float diemtk;
};
struct Node{
	SinhVien infor;
	Node*next;
};
typedef Node*tro;
void input(SinhVien x){
	cout<<"masv ";cin>>x.masv;
	cout<<"ten: ";cin>>x.hoten;
	cout<<"nam sinh: ";cin>>x.namsinh;
	cout<<"diem: "; cin>>x.diemtk;
}
int main(){
	SinhVien x;
	input(x);	
}
