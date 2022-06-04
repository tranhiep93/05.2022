#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int num;
	int VND;
	
	printf("nhap so tien dola: \n");
	scanf("%d",&num);
	
	VND=num*16689;
	printf("Ket qua quy doi %d dola bang %d VND",num,VND);
	return 0;
}
