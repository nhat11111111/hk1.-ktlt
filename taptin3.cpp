#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int m=3;
  FILE *fp;
  char path[50];
  
  printf("\n nhap duong dan: ");
  fflush(stdin);
  gets(path);
  
  
    fp=fopen(path,"wt");
      if(fp==NULL)
      {
       printf("\n loi mo file");
       exit(0);
       
      }
 else 
 {
  fprintf(fp,"so dong, cot la %d \n", m);
   for(int i=0;i<m;i++)
   {
    for(int j=0; j<m; j++)
     {
      fprintf(fp,"%3d",a[i][j]);
     }
      fprintf(fp,"\n"); 
    }
    fclose(fp);
   }
 }
