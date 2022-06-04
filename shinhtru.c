#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int r;
	int h;
	int V;
	
	printf("nhap ban kinh:\n");
	scanf("%d",&r);
	
	printf("nhap chieu cao:\n");
	scanf("%d",&h);
	
	V=3.14*h*r*r;
	
	printf("the tich hinh tru la: %d",V);
	return 0;
}
