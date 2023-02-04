#include<stdio.h>
#include<conio.h>
#include<string.h>

int fibonacci(int n)
{
	if(n<0)
	{
		return -1;
		
	}else if(n ==0 || n== 1)
	{
		return n;
	}else{
		return fibonacci( n - 1)+fibonacci( n - 2);
		
	}
}
int main()
{
	int i;
	printf(" 10 so dau tien cua day so fibonacci: \n");
	for(i=0;i< 10;i++){
		printf("%d",fibonacci(i));
		
	}
}


