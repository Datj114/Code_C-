#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"nhap 3 canh tam giac"<<endl;cin>>a>>b>>c;
	while(a>100 or a<-100 or b>100 or b<-100 or c>100 or c<-100){
		cout<<endl<<"yeu cau nhap lai"<<endl;
		cout<<"nhap 3 canh tam giac";cin>>a>>b>>c;
	}
	if(a+b>c and a+c>b and b+c>a){
		if(a==b and b==c){
			cout<<"day la tam giac deu";
		}else if(a*a+b*b==c*c or c*c+b*b==a*a or a*a+c*c==b*b){
			cout<<"day la tam giac vuong";
		}else if(a==b or a==c or b==c){
			cout<<"day  la tam giac can";
		}else{
			cout<<"day la tam giac thuong";
		}
	}else{
		cout<<"day khong phai la tam giac";
	}

	return 0;
}
