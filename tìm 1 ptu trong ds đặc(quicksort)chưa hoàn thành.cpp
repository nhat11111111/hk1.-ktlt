#include <stdio.h>
void Nhap(int a[],int n){//ham nhap mang
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n){//ham xuat mang
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}
void QuickSort(int a[], int left, int right){
    //phan hoach day can sap thanh 3 phan
    int x = a[(left+right)/2];
    int i=left, j=right;
    while (i <= j){    
        while (a[i]<x){
            i++;
        }
        while (a[j]>x){
            j--;
        } 
        if (i<=j){
            int tg = a[i];
            a[i]=a[j];
            a[j]=tg;
            i++;
            j--;
        }
    }
    if (left<j)//de qui quick sort day ben trai
        QuickSort(a,left,j);
    if (i<right)//de quy quick sort day ben trai
        QuickSort(a,i,right);
}

int Linesearch(int a[],int N ,int x)
{
int i=0;
a[N] = x;
while (a[i]!=x)
i++;
if(i==N)
return -1;
else
return 1;
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    QuickSort(a,0,n-1);
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n);
}      
