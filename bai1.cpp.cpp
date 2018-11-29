#include<stdio.h>
#include<string.h>
#include<ctype.h>


void upper(char s[], int j) {
		putchar (toupper(s[j]));
}

int main() {
	char abc[90];
	printf("nhap chuoi: ");
	gets(abc);
	for(int i = 0 ; i <strlen(abc); i++) {		
	upper(abc,i);
	}printf("chuoi in hoa la ");
	getchar();
	return 0;
	
}
