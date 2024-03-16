#include<iostream>
#include<cmath>
using namespace std;
void generateString(string str,int length){
	if(length==0){
		cout<< str<<endl;
		return;
	}
	generateString( str+"a", length-1);
	generateString( str+"b", length-1);
}
int main(){
	int N;
	cin>>N;
	string str="";
	generateString( str, N);
	cout<<str;
	
//	int N;
//	string a[1000];
//	cin>>N;
//	a[0]="a";
//	a[1]="b";
//	int n=2,k=0;
//	while(a[k].length()<N){
//		a[n++]=a[k]+"a";
//		a[n++]=a[k]+"b";
//		k++;
//	}
//	for(int i=k;i<n;i++){
//		cout<<a[i]<<endl;
//	}

}