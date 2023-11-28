#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(float(pow(n,1.0/3))==int(pow(n,1.0/3))) cout<<"YES";
	else cout<<"NO";
	return 0;
}
