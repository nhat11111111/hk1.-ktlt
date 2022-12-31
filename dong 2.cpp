#include<stdio.h>
#include<conio.h>
int main()
{ 
    int a[50][50];
    int i,j,m,n;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


//sap xep hang 2 trong mang theo chieu giam dan
    int tg,k;
    for(j=0;j<m-1;j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(a[1][j]<a[1][k])
            {    
                tg=a[1][j];
                a[1][j]=a[1][k];
                a[1][k]=tg;
            }
        }
    }
    printf("\nma tran vua sap xep hang 2 la\n");
    for(j=0;j<m;j++)
    {
        printf("%5d",a[1][j]);
    }
// Dua ra man hinh tong cac phan tu ma tran
    int s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
    }    
    printf("\ntong cac phan tu la: %d",s);
// gia tri nho nhat chia het cho 3 trong mang
    int min, kt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%3==0)
            {    
                min=a[i][j];
                kt=1;
                break;
            }
        }
    }
    if(kt==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<m; j++)
            {
                if((a[i][j]%3==0)&&(a[i][j]<min))
                {
                    min=a[i][j];
                }
            }
        }
    printf("\nso nho nhat trong cac so chia het cho 3 co trong day la %d", min);
    }
    else    
    {
        printf(" trong mang vua nhap khong co so chia het cho 3");
    }
    getch();
}
