#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void nhapmang(int &n, int a[]){
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void quickSort(int a[], int l, int r){
    if(l>=r){
        return;
    }
    int pivot = a[(l+r)/2];
    int i=l, j=r;
    do{
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<=j){
            swap(&a[i],&a[j]);
            i++;
            j--;
        }
    }while(i<j);
    quickSort(a,l,j);
    quickSort(a,i,r);
}
void xuatmang(int n, int a[]){
    printf("Mang sau khi sap xep la: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n,a[101];
    nhapmang(n,a);
    quickSort(a,0,n-1);
    xuatmang(n,a);
    return 0;
}