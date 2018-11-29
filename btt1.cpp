#include<stdio.h>

int main(){
	int a,b;
	printf("Nhap 2 so\n");
	printf("So thu 1: ");
	scanf("%d",&a);
	printf("So thu 2: ");
	scanf("%d",&b);
	if ( a>b){
		printf (" so %d lon hon ",a);
	}else if(b>a){
		printf(" so %d lon hon",b);
	}else{
		printf(" Hai so bang nhau");
	}
	return 0;
}
