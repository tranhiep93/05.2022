#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	float top;
	float bottom;
	float height;
	
	printf("Nhap day nho = \n");
	scanf("%f", &top);
	printf("Nhap day lon = \n");
	scanf("%f", &bottom);
	printf("Nhap chieu cao = ");
	scanf("%f", &height);
	
	printf("Dien tich hinh thang la: %.2f",(top+bottom)*height/2);
	return 0;
}
