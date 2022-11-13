#include <stdio.h>
void nhap(int a[], int n)
{
  for(int i=0;i<n;i++)
     {
     	 printf("\n a[%d]= ",i);
          scanf("%d",&a[i]);
	 }

}
void  xuat(int a[], int n)
{
	
	printf("\nxuat mang vua nhap \n");
	for(int i=0;i<n;i++)
	printf("%5d \n",a[i]);
}
void gtln(int a[], int n)
{
	 {
	  int max=0, i;
  	  for(int i=0;i<n;i++)
     	if(a[i]>=max)
     	max=a[i];
        printf("\n phan tu lon nhat %d",max);
    }
}    
int tich(int a[], int n)
{
	int t=1;
     	for(int i=0;i<n;i++)
    	t*=a[i];
    	return t;
	
	
}
bool ktnt(int a)	
{
	  int dem=0;
 	    for(int i=1;i<=a;i++)
 	      { 
 	          if(a%i==0)
 	           dem++;
 	    	}
 	         if(dem==2)
			return 1;
			else return 0;	
	 }
void snt(int a[], int n)
{
	for(int i=0; i<n ; i++)
		{
			 if (ktnt(a[i])==1)
			  printf("\n%d la so nguyen to",a[i]);
 	          else
 	          printf("\n%d khong phai la so nguyen to ",a[i]);
		}
}
void tongsnt(int a[], int n)
{
	int s=0;
	for(int i=0; i<n ; i++)
		{
			 if (ktnt(a[i])==1)
				s+=a[i];	 
		}
	 printf("\nTong cac so nguyen to la %d",s);
}

void gtbx(int a[], int n)
  {
  	int x,y=0;
     printf("\n nhap gtri x =");
     scanf("%d",&x);
 	for(int i=0; i<n ; i++) 
	    {
	    
	     	if(a[i]==x) 
	     	{
	     	   printf("\n GIA TRI BANG a[%d]",i);
	     	 
	     	   y++;
	     	}
		
	    }
     if (y==0) printf("\n\nKhong gia tri nao trong mang bang x") ;
     
 }
 
  void tg(int a[], int n)
{
   int t;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
      {
      
		    if(a[i] > a[j])
            {
     
                t=a[i];
                a[i]=a[j];
                a[j]=t;
             }
    }
     printf("\nMang da sap xep la: ");
     xuat(a,n);
   // for(int i = 0; i < n; i++)
     //   printf("%5d", a[i]);
}
int main()
{
  int a[100], n;
  printf("\nNhap so phan tu cua mang : ");
  scanf("%d",&n);
  nhap(a,n);
  xuat(a,n);
  gtln(a,n);
  printf("\nTich cac phan tu cua mang la : %d",tich(a,n));
  snt(a,n);
  tongsnt(a,n);
  gtbx(a,n);
  tg(a,n);
return 0;
}
