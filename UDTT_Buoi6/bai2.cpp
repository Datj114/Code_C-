#include<iostream>
using namespace std;
int f[100][100];
int w[100], v[100];
void algorithm(int w[],int v[],int m,int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			f[i][j]=f[i-1][j];//khong lay goi thu i
			if(w[i]<=j){
				int temp=v[i] + f[i-1][j-w[i]];
				if(f[i][j]<temp) f[i][j]=temp;
			}
		}
	}
}
void result(int w[],int v[],int m,int n){
cout<<"Max value: " << f[n][m] << endl;
int i = n, j = m;
while (i != 0) {
	if (f[i][j] != f[i - 1][j]) {
		cout<<i<<" ";
		j = j - w[i]; //Lay goi thu i
	}
	i--;
	}
}
int main(){
	int w[7]={0,3,6,2,7,1,5};
	int v[7]={0,4,5,2,6,1,3};
	int m=12,n=6;
	algorithm(w,v,m,n);
	result(w,v,m,n);
}