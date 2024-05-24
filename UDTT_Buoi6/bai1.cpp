#include<iostream>
using namespace std;
int f[100][100];

int analys01(int m,int n){// dung m?ng hai chi?u
	f[0][0]=1;
	for(int i=1;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i>j){
				f[i][j]=f[i-1][j];
			}else{
				f[i][j]=f[i-1][j] + f[i][j-i];
			}
		}
	}
	return  f[m][n];
}
int main(){
	int n=5,m=5;
	cout<<analys01(m,n);
}