#include <stdio.h>
#include <string.h>
typedef struct lophoc{
	char phonghoc[10];
	char ngaytrongtuan[10];
	char buoihoc[10];
	char tenlop[10];
}lophoc;
typedef struct sv{
	char ten[30];
	int mssv;
	lophoc lop;
}sinhvien;
int main(){
	lophoc tenlop;
	printf("Nhap sinh vien cho lop\n");
	printf("Ten lop:\n");
	scanf("%s",tenlop.tenlop);
	printf("Phong:\n");
	scanf("%s",tenlop.phonghoc);
	printf("Buoi hoc:\n");
	scanf("%s",tenlop.buoihoc);
	printf("Ngay trong tuan:\n");
	scanf("%s",tenlop.ngaytrongtuan);
	int n;
	printf("So luong sinh vien:\n");
	scanf("%d",&n);
	sinhvien sv1[n];
	//struct sv sv2[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ten sinh vien:\n");
		scanf("%s",sv1[i].ten);
		printf("Nhap ma so sinh vien:\n");
		scanf("%d",&sv1[i].mssv);
		//strcpy(sv1[i].lop,tenlop);
		memcpy(&sv1[i].lop,&tenlop,sizeof(lophoc));
		// printf("Nhap ten lop:\n");
		// scanf("%s",sv1[i].lop);
	}
	printf("Danh sach sinh vien:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%s - %d - %s - %s - %s\n",sv1[i].ten,sv1[i].mssv,sv1[i].lop.tenlop,sv1[i].lop.buoihoc,sv1[i].lop.ngaytrongtuan);
	}
	//struct sv sv2;
	// memcpy(&sv2,&sv1,sizeof(struct sv));
	// printf("Ten sinh vien la: %s\n",sv2.ten);
	// printf("Ma so: %d\n", sv2.mssv);
	// printf("Lop: %s\n", sv2.lop);

	return 0;
}