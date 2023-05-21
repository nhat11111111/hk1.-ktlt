#include<stdio.h>
#include<math.h>
void nhap()
{
	
}
int timsongto(int n)
{
	if(n < 2){
		printf("\n%d khong phai so nguyen to ",n);
		return 0;
		
	}
	int count =0;
	for(int i=2;i<= sqrt(n);i++){
	
	
		if(n % i==0){
			count ++;
			
		}
	}
	return count;
	
}
	
	int main(){
		int n,kq;
		printf("\n Nhap n:",n);
		scanf("%d",&n);
		kq= timsongto(n);
		if (kq== 0)
	{
		printf("%d la so nguyen to",n);
		
	}	else{
		printf("%d khong la so nguyen to",n);
	}
	return 0;
			}

