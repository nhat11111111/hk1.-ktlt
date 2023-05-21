#include <stdio.h>
#include <conio.h>

//Nhap mang
		void nhapmang(int a[],int n)
{
		for (int i=0;i<n;i++)
	{	
		printf("Phan tu thu a [%d]=",i);
		scanf("%d",&a[i]);
	}
}

//xuat mang
		void xuatmang(int a[],int n)
	{
    	printf("\n");
    	for (int i=0;i<n;i++)
    	printf("%5d",a[i]);
	}

//Hoan vi
		void swap(int &a, int &b)
	{
		int temp= a;
		a = b;
		b = temp;
	}

//Sap xep
		void sapxep (int a[],int n)
	{
		int i,j;
		int left=0;
		int right=n-1;
		int k=0;//vi tri bat dau tha
		while (left<right)
		{
			for (i=right;i>left;i--)//duyet tu cuoi toi dau mang
			{
				if (a[i]<a[i-1])//neu so sau nhho hon so truoc
				{
					swap (a[i],a[i-1]);//hoan vi 2 so
					k=i;//dua so nho nhat trong mang ve vi tri dau
				}
			}
			left=k;
			for (int j=left;j<right;j++)//duyet tu dau toi cuoi mang
			{
				if (a[j]>a[j+1])//neu so truoc lon hon so sau
				{
					swap (a[j],a[j+1]);//hoan vi 2 so
					k=j;//dua so lon nhat ve vi tri cuoi cung
				}
			}
			right=k;
		}
	}

		int timkiem (int a[],int n,int x)
	{
		printf("\nNhap gia tri can tim: ");
		scanf("%d",&x);
		int i=0;
		a[n]=x;
		while (a[i]!=x)
		i++;
		if (i==n)
		return -1;
		else
		return i;
	}
		
int main()
{
		int a[10]; int n;int x;
		printf("\nNhap phan tu n:");
		scanf("%d",&n);
		nhapmang(a,n);
		printf("\nMang da nhap la:");
		xuatmang(a,n);	
		sapxep(a,n);
		printf("\nMang da sap xep la:");
		xuatmang(a,n);
		int result=timkiem(a,n,x);
		if (result == -1)
     	printf("Khong tim thay so can tim trong mang",x);
 	 else
   		printf("So can tim xuat hien tai vi tri so %d",result);
		return 0;
}
