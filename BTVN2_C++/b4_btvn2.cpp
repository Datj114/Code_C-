#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"nhap so dien";cin>>a;
	if(a<0){
		cout<<"nhap lai so dien";cin>>a;
	}
	if( a>=0 && a<=50){
		cout<<a*1678<<" VND";
	}else if( a<=100){
		cout<<50*1678+(a-50)*1734<<" VND";
	}else if(a<=200){
		cout<<50*1678+50*1734+(a-100)*2014<<" VND";
	}else if(a<=300){
		cout<<50*1678+50*1734+(100)*2014+(a-200)*2536<<" VND";
	}else if(a<=400){
		cout<<50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (a- 300) * 2834<<" VND";		
	}else{
		cout<<50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (a - 400) * 2927<<" VND";
	}
	return 0;
}
