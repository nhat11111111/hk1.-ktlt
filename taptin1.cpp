#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char filename[67], ch;
    printf(" nhap ten duong dan: ");
    gets(filename);
  if((fp = fopen (filename, "w"))  == NULL )
    {
     printf( " thong bao loi \n ");
     exit(1);
    }
 while (( ch=getche() )  != '\r')
     putc ( ch, fp );
     fclose (fp);
 return 0;
}
