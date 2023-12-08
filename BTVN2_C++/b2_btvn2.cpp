#include<iostream>
using namespace std;
int main(){
	//nhap
	int a,b,c;
	cout<<"nhap 3 so nguyen"<<endl;cin>>a>>b>>c;
	//kiem tra dieu kien nhap
	while(a>100 or a<-100 or b>100 or b<-100 or c>100 or c<-100 or a==0 or b==0 or c==0){
		cout<<endl<<"yeu cau nhap lai"<<endl;
		cout<<"nhap 3 canh tam giac";cin>>a>>b>>c;
	}
	//tim so lon nhat
	int max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	//thay doi gia tri max
	if(a==max) a=0;
	if(b==max) b=0;
	if(c==max) c=0;
	cout<<endl<<a<<" "<<b<<" "<<c;
	return 0;
}
