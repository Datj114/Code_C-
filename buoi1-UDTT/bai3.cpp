#include<iostream>
using namespace std;
//sinh cau hinh moi tu cau hinh dang co
void next_config(int x[],int k,int i){
	x[i]+=1;
	i++;
	while(i<=k){
		x[i]=x[i-1]+1;
		i++;
	}
}
//hien thi mot cau hinh
void view_config(int x[],int k){
	for(int i=1;i<=k;i++)
		cout<<x[i];
	cout<<endl;
}
//liet ke cac cau hinh
void list_configs(int k,int n){
	int i,x[k+1]={0};
	//cau hinh dau tien {1,2,3,...k}
	for( i=1;i<=k;i++){
		x[i]=i;
	}
	do{
		view_config(x,k);// in mot cau hinh
		//tim phan tu dau tien chưa đặt giới hạn trên
		i=k;
		while(i>0 && x[i]==n-k+i){
			i--;
		}
		
			if(i>0){//chua phai dat cau hinh moi
				next_config(x,k,i);
			}
		
	}while(i>0);
}
int main(){
	string x[1000];
	list_configs(3,5);
	return 0;
}