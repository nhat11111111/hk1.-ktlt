#include <stdio.h>
#include  <stdlib.h>

int nhap1c(int *a,int n,int m);
int xuat1c(int *a,int n,int m);
int sx(int *a,int n,int m);
int main()
{ int *a,n,m;
  a=(int*)calloc(25,sizeof(int ));	
  printf("\n nhap n");scanf("%d",&n);	
  printf("\n nhap m");scanf("%d",&m);	
  nhap1c(a,n,m);	
  xuat1c(a,n,m);
  printf("*******\n");
  sx(a,n,m);
  printf("+++++\n");
  xuat1c(a,n,m);	
}

int nhap1c(int *a,int n,int m)
{
	for (int i=0;i<n;i++)
	{for(int j=0; j<m;j++)
	 {
	  	printf("\n Nhap phan tu thu a[%d][%d]:t",i,j);
	  	scanf("%d",(a+i*n+j));
	 }		
	}
}
int xuat1c(int *a,int n,int m)
{
  for (int i=0;i<n;i++)	
  {
  	for(int j=0;j<m;j++)
  	{
  		printf("\t%d",*(a+i*n+j));
  	}
  	printf("\n");
  }	
}

int sx(int *a,int n , int m)
{int tam, tich=m*n;
 for(int i=0;i<tich-1;i++)	
 for(int j=i+1;j<tich;j++)	
   {
   	 if(*(a+i)>*(a+j))
   	 {
   	 	  tam=*(a+i);
   	 	  *(a+i)=*(a+j);
   	 	  *(a+j)=tam;
   	 }
   	

   }	
   return 0;
}

