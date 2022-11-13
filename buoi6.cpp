 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<ctype.h>
 //1
 struct SinhVien
 {
 	char   Masv[10];
 	char   Hotensv[30];
 	char   Phai[10];
 	int    Namsinh;
 	char  Nganhhoc[30];
 	float  Kqcuoikhoa;
 	char   Xeploai[20];
 	char  Quequan[30];
 };
 typedef struct SinhVien SINHVIEN;
 void TIMSV(SINHVIEN a[],int n);
 void INGX(SINHVIEN a[], int n);
 void Sapxep(SINHVIEN a[], int n);
 void Nhapsv(SINHVIEN &x);
 void NhapsvN(SINHVIEN a[],int n);
 void Xuatsv(SINHVIEN);
 void XuatsvN(SINHVIEN a[], int n);
 
 int main()
 {
 	int n;
 	 SINHVIEN x, a[10];
 	 printf("\n\n\nNhap so luong sinh vien " );
 	 scanf("%d",&n);
 	 NhapsvN(a,n);
 	 XuatsvN(a,n);
 	 printf("\n\n\n An phim bat ky de in DS sap xep ");
 	 getch();
 	 Sapxep(a,n);
 	 XuatsvN(a,n);
 	 printf("\n\n\n  An phim bat ky de in DS Gioi_Xuat_sac  ");
 	 getch();
 	 INGX(a,n);
 	  printf("\n\n\n An phim bat ky de tim SV ");
 	  getch();
 	  TIMSV(a,n);
 	  
 }
 //2
 void Nhapsv(SINHVIEN &x)
 {
 	fflush(stdin);
 	printf("\nNhap Ma SV: ");
 	gets(x.Masv);
 	
 	//scanf("%d",&x,Masv);
 		fflush(stdin);
 	printf("\nNhap ho ten: ");
 	gets(x.Hotensv);
 		fflush(stdin);
 	printf("\nNhap Phai: ");
 	gets(x.Phai);
 		fflush(stdin);
 	printf("\nNhap Nganh hoc: ");
 	gets(x.Nganhhoc);
 		fflush(stdin);
 	printf("\nNhap Que quan: ");
 	gets(x.Quequan);
 	
 	
 	do
 	{
 		printf("\n NHap nam sinh: ");
 		scanf("%d",&x.Namsinh);
 		
 	}while (x.Namsinh<1980 || x.Namsinh>2010);
 	
 	do
 	{
 		printf("\nNHap KQ cuoi khoa: ");
 		scanf("%f", &x.Kqcuoikhoa);
 		
 	}while(x.Kqcuoikhoa<0||x.Kqcuoikhoa>4);
 	
 	
 	fflush(stdin);
 
   if(x.Kqcuoikhoa<=1.5)
    {strcpy(x.Xeploai,"Yeu");    }
 else 
   if(x.Kqcuoikhoa<=2.5)
   {strcpy(x.Xeploai,"Trung_binh");    }
 else
  if(x.Kqcuoikhoa<=3.0)
   {strcpy(x.Xeploai,"Kha");    }
 else
   if(x.Kqcuoikhoa<=3.8)
    {strcpy(x.Xeploai,"Gioi");    }
 else
     {strcpy(x.Xeploai,"Xuat sac");     }
}

//3

void NhapsvN(SINHVIEN a[],int n)
  {
  	for(int i=0;i<n;i++)
  	{
  		printf("\n Nhap sinh vien thu %d", i+1);
  		Nhapsv(a[i]);
  		
  	}
  }
  
void XuatsvN(SINHVIEN x)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|",x . Masv,x.Hotensv,x.Phai,x.Namsinh,x.Nganhhoc,x.Kqcuoikhoa,x.Xeploai,x.Quequan);
	
}




void XuatsvN(SINHVIEN a[],int n)
 {system("cls");
 printf("\n\n|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
   printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc| KQ cuoi khoa |Xep loai| Que quan");
   
   for (int i=0;i<n;i++)
      {
      	printf("\n|-----|-------------------|------|----------|-----------|-------------|-----------\n");
      	Xuatsv(a[i]);
      }
 
 	
 }
 //4
 void Sapxep(SINHVIEN a[],int n)
 { SINHVIEN tmp;
 for(int i = 0; i<n;i++){
 	for (int j=i+1;j<n;j++){
 		if(a[i]Kqcuoikhoa>a[j].Kqcuoikhoa){
 			tmp=a[i];
 			a[i]=a[j];
 			a[j]=tmp;
 		}
 	}
    }
 	
 }

//5

void INGX(SINHVIEN a[],int n)
{system("cls");
fflush(stdin);
 	printf("\n|-----|-------------------|------|----------|-----------|-------------|-----------\n");
 printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc| KQ cuoi khoa |Xep loai| Que quan");
  
  
  for (int i=0;i<n;i++)
  {
  	if (a[i].Kqcuoikhoa>=3.0)
  	{
  	printf("\n|-----|-------------------|------|----------|-----------|-------------|-----------\n");
  	Xuatsv(a[i]);
  	
 }
  }
}  


//6


void INGX(SINHVIEN a[],int n)
{system("cls");
fflush(stdin);
char Matim[10];
printf("\n Nhap ma sv can tim: ");
gets(Matim);

 printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 printf("|Ma SV| Ho ten sinh vien | Phai | Nam sinh | Nganh hoc| KQ cuoi khoa |Xep loai| Que quan");
  
  
  for (int i=0;i<n;i++)
  {
  	if (strcmp(a[i].Masv,Matim)==0)
  	{
  	printf("\n|-----|-------------------|------|----------|-----------|-------------|-----------\n");
  	Xuatsv(a[i]);
  	
 }
  }
}


//HAI LA MA
int main()
{ char key;
while(true)
{
system("cls");
printf("************************************\n");
printf("** THAO TAC TREN CHUOI **\n");
printf("** 1. Nhap va chuan hoa chuoi **\n");
printf("** 2. Dem so tu trong chuoi **\n");
printf("** 3. Ghep chuoi **\n");
printf("** 4. Kiem tra doi xung **\n");
printf("** 5. In chuoi dao nguoc **\n");
printf("** 0. Thoat **\n");
printf("*************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
do{
	printf("\nNhap SO LUONG SINH VIEN "); scanf("%d", &n);
	
	
}while(n<= 0);
//goi ham de thuc hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 2:
	fflush(stdin);
//goi ham thuc de hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 3:
	fflush(stdin);
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung

getch();

break;

case 4:
	fflush(stdin);
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
break;
case 5:
	fflush(stdin);
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
getch();
break;
case 0:
exit(1);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}







