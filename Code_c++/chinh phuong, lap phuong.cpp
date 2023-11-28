#include<iostream>
#include<cmath>
using namespace std;

// sqrt(n) = pow(n, 1.0/2);
void nhap(int &n){
	cin>>n;	
}
void ktra2(int n){
	if(float(pow(n,1.0/2)) == int(pow(n,1.0/2))){
		cout<<"So chinh phuong\n";
	} 
	else cout<<"Not so chinh phuong\n";
}

void ktra3(int n){
	if(float(pow(n,1.0/3)) == int(pow(n,1.0/3))){
		cout<<"So lap phuong\n";
	}
	else cout<<"Not so lap phuong\n";
}

int main(){
	int n;
	nhap(n);
	cout<<n<<endl;
    ktra2(n);
	ktra3(n);
	return 0;
}

