#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void bubble_sort(string arr[],int n){
	for(int i=0;i<n-1;i++)
		for(int j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				string temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
}

void selection_sort(string arr[], int n){
	for(int i=0;i<n-1;i++){
		int m=i;
		for(int j=i+1;j<n;j++)
			if(arr[m]>arr[j])
				m=j;
		string temp=arr[i];
		arr[i]=arr[m];
		arr[m]=temp;
		
	}
}

void insert_sort(string arr[], int n){
	for(int i=1;i<n;i++){
		string tam=arr[i];int j=i-1;
		while(j>=0 && arr[j]>tam){
			arr[j+1]=arr[j];
			j--;
		}
	arr[j+1]=tam;	
	}
}
int main(){
	string words[] = {"John", "Try", "Thor", "Zil", "Adam", "Dany", "Milk"};
    int n = sizeof(words) / sizeof(words[0]);

    //sort(words, words + n);
    //bubble_sort(words,n);
    //selection_sort(words,n);
    insert_sort(words,n);
    for (int i = 0; i < n; ++i) {
        std::cout << words[i] << " ";
    }
    return 0;
}
