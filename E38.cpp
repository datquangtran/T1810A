#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sinhvien{
	char ten[10];
	int mssv;
	int diemthi;
}sinhvien;

void Nhapinfosinhvien (sinhvien *p)
{
	printf ("\nNhap ten sinh vien: ");
	scanf ("%s",p->ten);
	printf ("\nNhap MSSV: ");
	scanf ("%d",&(p->mssv));
	printf ("\nNhap diem thi: ");
	scanf ("%d",&(p->diemthi));
}

void in_danhsach (sinhvien *p)
{
	printf ("%s	%d	%d\n",p->ten,p->mssv,p->diemthi);
}

int main ()
{
	int n;
	sinhvien*p;
	p = (sinhvien*)malloc(n*sizeof(sinhvien));
	printf ("Nhap vao so sinh vien: ");
	scanf ("%d",&n);
	for (int i=0; i<n; i++)
	{
		Nhapinfosinhvien(p+i);
	}
	
	printf ("\nDanh sach sinh vien: \n");
	printf ("Ten	MSSV	Diem thi\n");
	for (int i=0; i<n; i++)
	{
		in_danhsach(p+i);
	}
	int count =0;
	for (int i=0; i<n; i++)
	{
		if ((p+i)->diemthi>=6)
		count++;
	}
	printf ("So sinh vien qua: %d\n",count);
	printf ("So sinh vien truot: %d\n",n-count);
	
	printf ("Ty le sinh vien qua: %d%%\n",(count*100)/n);
	printf ("Ty le sinh vien truot: %d%%\n",((n-count)*100)/n);
	return 0;
}
