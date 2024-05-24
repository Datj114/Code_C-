#include<iostream>
using namespace std;
int a[100],L[100];
void algorithm() {
	a[0] = -2147483648;
	a[n + 1] = 2147483647;
	L[n + 1] = 1;
	for (int i = n; i >= 0; i--) {
		jmax = n + 1;
		for (int j = i + 1; j <= n + 1; j++)
			if (a[j] > a[i] && L[j] > L[jmax])
				jmax = j;
		L[i] = L[jmax] + 1;
		T[i] = jmax;
	}
}
void result() {
	k = T[0];
	cout<<"Day con: ";
	while (k != n + 1) {
		cout<<"a["<<k<<"]: "<<a[k]<<" ";
		k = T[k];
	}
}
int main(){
	
}