#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a;
	int S;
	int h;
	
	printf("nhap chieu cao: \n");
	scanf("%d",&a);
	printf("nhap canh day: \n");
	scanf("%d",&h);
	
	S=a*h/2;
	
	printf("dien tich tam giac la: %d\n",S);

	return 0;
}
