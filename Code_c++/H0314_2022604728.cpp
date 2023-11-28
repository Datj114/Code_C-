#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a= new int[n];
	int *b= new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if (a[i]>a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0) {
			b[dem]=a[i];
			dem++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]%3==1) {
			b[dem]=a[i];
			dem++;
		}
	}for(int i=0;i<n;i++){
		if(a[i]%3==2) {
			b[dem]=a[i];
			dem++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
	delete a;
	delete b;
	return 0;
}
