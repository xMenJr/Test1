#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhapmang(int &n, int a[]){
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Nhap gia tri phan tu a[" << i << "] = ";
        cin >> a[i];
    }
}
void insertionSort(int n, int a[]){
    for(int i=1; i<n; i++){
        int x=a[i], pos=i-1;
        while(pos>=0 && x<a[pos]){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
        for(int i=0; i<n; i++){
        	cout << a[i] << " ";
    	}
    	cout << endl;
    }
}
void xuatmang(int n, int a[]){
    cout << "Mang sau khi sap xep la: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n, a[101];
    nhapmang(n,a);
    insertionSort(n,a);
    //xuatmang(n,a);
}
