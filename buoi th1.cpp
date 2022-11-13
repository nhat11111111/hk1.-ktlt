#include "stdio.h"
 void hello();
 long tinhgiaithua (int n);
 int tinhtong (int a, int b);
 int tinhdtHCN (int a, int b);
 int timUSCLN (int a, int b);
 int kiemtraSNT (int a);
 void hoanvi(int*,int*);
 void KTNT (int n);
 void TONGNT (int n);
 
 
 
int main()
{
	int n,a,b,c,d,e,f,g,h,i,j;
	hello();
	printf("\nNhap so nguyen duong can tinh giai thua :"); scanf("%d",&h);
	while (h<0 || h>13)
	{
		printf("\nNhap so qua lon roi! Nhap lai n la mot so nguyen duong ="); scanf("%d",&h);
	}
	printf("\nGiai thua cua so nguyen duong %d = %d",h,tinhgiaithua(h));
	
	
	printf("\nNhap so nguyen a ="); scanf("%d",&a);
	printf("\n\nNhap so nguyen b ="); scanf("%d",&b);
	printf("\nTong hai so nguyen %d va %d = %d",a,b,tinhtong(a,b));
	
	
	printf("\nNhap chieu dai hinh chu nhat ="); scanf("%d",&c);
	printf("\nNhap chieu rong hinh chu nhat ="); scanf("%d",&d);
	printf("\nDien tich hinh chu nhat =%d",tinhdtHCN(c,d));
	
	
	printf("\nNhap so nguyen duong thu nhat can tim uoc chung :"); scanf("%d",&e);
	printf("\nNhap so nguyen duong thu hai can tim uoc chung :"); scanf("%d",&f);
	printf("\nUOc chung lon nhat cua %d va %d la %d",e,f,timUSCLN(e,f));
	
	
	printf("\nNhap so nguyen duong can kiem tra :"); scanf("%d",&g);
	if (kiemtraSNT(g)==1) 
	printf("\nSo nguyen duong %d la so nguyen to",g);
	else 
	printf("\nSo nguyen duong %d khong phai so nguyen to",g);
	
	
	printf("\nNhap so nguyen A can hoan vi ="); scanf("%d",&i);
	printf("\nNhap so nguyen B can hoan vi ="); scanf("%d",&j);
	hoanvi(&i,&j);
	printf("\nSau khi hoan vi thi A=%d va B=%d",i,j);
	
	
	printf("\nNhap so nguyen duong n:"); scanf("%d",&n);
	while (n<1 || n>20)
	{
		printf("\nNhap sai roi! Nhap lai n :"); scanf("%d",&n);
	}
	KTNT(n);
	TONGNT(n);
	tinhgiaithua(h);
	tinhtong(a,b);
	tinhdtHCN(c,d);
	return 0;
}




void hello()//in ra dong chu hello world!
{
	printf("\n\nHello World!");
}



long tinhgiaithua(int n)//tinh giai thua cua so nguyen duong n
{
	int i,x=1;
		if (n==0) return 1;
	else for (i=0;i<n;i++)
	{
		
			x=x*(n-i);
	}
	
	return x;
}


int tinhtong (int a, int b)// tinh tong hai so nguyen a va b
{
	int tong=0;
	tong=a+b;
	return tong;
}


 int tinhdtHCN (int a, int b)// tinh S hinh chu nhat
 {
 int dt=1;
 dt=a*b;
 return dt;
 }
 
 int timUSCLN (int a, int b)//tim USCLN cua hai so nguyen
{
	int x;
	if (a==0 || b==0) x=a+b;
	else while (a!=b)
	{
		if (a>b) a-=b;
		else b-=a;
	}
	x=a;
	return x;
}


int kiemtraSNT (int a)//kiem tra so nguyen to
{
	int i,dem=0;
	for(i=2;i<=a;i++)
	{
		if (a%i==0) dem++;
	}
	return dem;
}


void hoanvi(int *a, int *b)//hoan doi gia tri A va B
{
	int tam=0;
	tam=*a;
	*a=*b;
	*b=tam;
}

void KTNT (int n)// kiem tra so n co phai SNT
{
	if (kiemtraSNT(n)==1) printf("\nSo nguyen duong n la so nguyen to");
	else                  printf("\nSo nguyen duong n khong la so nguyen to");
}


void TONGNT(int n)//Tinh tong cac so nguyen to tu 1 den n
{
    int i,tong=0;
	for (i=1;i<=n;i++)
	{
		if (kiemtraSNT(i)==1) tong = tong + i;
	}	
    printf("\ntong cac so nguyen to tu 1 den %d = %d",n,tong);
}


