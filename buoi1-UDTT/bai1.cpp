#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N;
	string a[1000];
	cin>>N;
	a[0]="0";
	a[1]="1";
	int n=2,k=0;
	while(a[k].length()<N){
		a[n++]=a[k]+"0";
		a[n++]=a[k]+"1";
		k++;
	}
	for(int i=k;i<n;i++){
		cout<<a[i]<<endl;
	}
}