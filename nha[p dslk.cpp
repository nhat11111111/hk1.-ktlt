#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct sinhvien

{
	char Maso[10];
	char Hoten[50];
	int tuoi;
	
}sinhvien;

typedef struct node
{
	sinhvien ata;
	node*pnext;
	
}node;

