#include<iostream>

using namespace std;
int main(){
	int a[]={8,3,5,4,9,1,2};
	int n=7;
// xeptang	
	for(int i=0;i<n-1;i++)
	for(int j=0;j<n-i-1;j++)
	if(a[j]>a[j+1]){
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	for(int temp : a)
	cout<<temp;
	return 0;
}
