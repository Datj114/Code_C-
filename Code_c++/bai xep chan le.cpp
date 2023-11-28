#include<iostream>
using namespace std;
int main(){
//nhap n, mang
	int n;cin>>n;
	int *a=new int[n];
	int *b=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//xep tang
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
// xep vao mang b voi le tang, chan giam
	int dem1=0,dem2=n;
	for (int i=0;i<n;i++){
		if(a[i]%2==0){
			dem2=dem2-1;
			b[dem2]=a[i];
		}
		else{
			b[dem1]=a[i];
			dem1++;
		}
	}
	for(int i=0;i<n;i++)
	cout<<b[i]<<" ";
	delete a;
	delete b;
	return 0;
}
