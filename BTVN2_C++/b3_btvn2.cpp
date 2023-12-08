#include<iostream>
using namespace std;
int main(){
	int a,b;char ch;
	cout<<"nhap phep tinh"<<endl;cin>>a>>ch>>b;
	// kiem tra dieu kien nhap
	while(a>10000 or a<-10000 or b>10000 or b<-10000){
		cout<<endl<<"yeu cau nhap lai"<<endl;
		cout<<"nhap phep tinh"<<endl;cin>>a>>ch>>b;
	}
	//thuc hien
	switch (ch) {
        case '+':
            cout << a << ch << b << "=" << a + b;
            break;
        case '-':
            cout << a << ch << b << "=" << a - b;
            break;
        case '*':
        case 'x':
            cout << a << ch << b << "=" << a * b;
            break;
        case '/':
            // Ki?m tra chia cho 0
            if (b != 0) {
                cout << a << ch << b << "=" << (float)a / b;
            } else {
                cout << "Loi: Chia cho 0!";
            }
            break;
        default:
            cout << "Phep tinh khong hop le";
    }

	return 0;
}
