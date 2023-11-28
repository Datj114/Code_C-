#include<iostream>
#include<string>
using namespace std;
//tim so fibona
int Fibona(int n){
	if(n<=2) return 1;
	else return Fibona(n-1)+Fibona(n-2);
}
/* bai toan thap ha noi
chuyen(n,A,B,c){
	if(n==1) // chuyen tu A sang C
	else{
		chuyen(n-1,A,C,B);
		chuyen(1,A,B,C);
		chuyen(n-1,B,A,C);
	}
}*/
// tim ucln 
int ucln(int a, int b){
	if(a%b==0) return b;
	else return(b,a%b);
}
int ucln_1(int a, int b){
	while(a%b!=0){
		int tg=b;
		b=a%b;
		a=tg;
	}
	return b;
}

// dem so trong day
int dem(int x){
	if(x<10) return 1;
	return 1+ dem(x/10);
}

// de quy in nguoc xau ky tu
void reverse_string(string &str, int index){
	if(index<0) return;
	else{
		cout<<str[index];
		reverse_string(str,index-1);
	}
}

// de quy tinh so mu cua 2
int power(int n){
	if(n==0) return 1;
	return power(n-1)*2;
}
int main(){
	int n;
	cout<<"n= ";cin>>n; cout<<power(n);
//	//tim va hien thi so fibona thu n
//	cout<<"fibona thu " <<n<<" la "<<Fibona(n)<<endl;
//	//tim va hien thi day n so fibona
//	cout<<"day fibona";
//	for(int i=1;i<=n;i++) cout<<Fibona(i)<<" ";
//	cout<<endl;
//	int a,b;	
//	cout<<"nhap a,b";cin>>a>>b;
//	cout<<"so chu so"<<dem(b)<<endl;
//	cout<<ucln(a,b)<<endl;cout<<"ucln__"<<ucln_1(a,b);
//	string str;
//	cin>>str;
//	reverse_string(str,str.length()-1);
	
	return 0;
	
}
