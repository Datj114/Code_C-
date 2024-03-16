#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int tg= a;
	a=b;
	b=tg;
}
//hien thi mot cau hinh
void view_config(int x[], int n){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;
}
//sinh cau hinh moi tu cau hinh dang co
void next_config(int x[],int n, int i){
	//tim x[k] be nhat trong doan cuoi lon hon x[i]
	int k=n;
	while(x[i]>x[k]) k--;// vd 42531 thi lui den vt 2 roi dao 2 vs 3
	swap(x[i],x[k]);
	// dao nguoc doan cuoi
	int j=n;i++;
	while(i<j){
		swap(x[i],x[j]);
		i++;
		j--;
	}
}
//liet ke cac cau hinh
void listing_configs(int n){
	int i,x[n+1]={0};
	for(i=1;i<=n;i++){
		x[i]=i;
	}
	do{
		view_config(x,n);//in mot cau hin
		//tim phan tu lien truoc doan cuoi giam dan
		i=n-1;
		while(i>0 && x[i]>x[i+1])
			i--;
		if(i>0){
			next_config(x,n,i);
		}
	}while(i>0);
}
/// 1,2,3,4,5
//1,2,3,5,4 i=4
//i=3, 12453
int main(){
	int x[1000];
	listing_configs(5);
	
}
