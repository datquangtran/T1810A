#include <stdio.h>

int main () {
	int a;
	do {
		printf ("Nhap 1 so:\n",a);
		scanf ("%d",&a);
	}
	while (a%2!=0);
}
