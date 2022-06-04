#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int R;
	int S;
	int C;
	
	printf("nhap ban kinh: \n");
	scanf("%d",&R);
	
	S=3.14*R*R;
	C=2*3.14*R;
	
	printf("dien tich hinh tron la: %d\n",S);
	printf("chu vi hinh tron la: %d\n",C);

	return 0;
}
