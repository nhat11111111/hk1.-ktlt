#include<stdio.h>
#include<conio.h>
#include<string.h>

int tongN(int n);

int main()
{
	int i,n, tinhtongN;
	printf("\n Nhap 1 so nguyen duong: ");
	scanf("%d",&n);
	tinhtongN =tongN(n);
	printf("Nhap cac so tu 1 den %d la: %d  ",n , tinhtongN);
	
	return (0);
}
int tongN(int n){
	int tinhtong;
	if(n ==1 ){
		return (1);
		
	}else {
		tinhtong = n + tongN(n -1 );
		
	}
	return (tinhtong);
}
