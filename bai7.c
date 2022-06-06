#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	
	//cac gia tri nhap vao la so thuc
	int bk;
	int canh1;
	int canh2;
	int vuong;
	
	printf("nhap ban kinh r: \n");
	scanf("%d",&bk);
	printf("nhap canh thu nhat a: \n");
	scanf("%d",&canh1);
	printf("nhap canh thu hai b: \n");
	scanf("%d",&canh2);
	printf("nhap canh vuong: \n");
	scanf("%d",&vuong);
	
	printf("Chu vi hinh tron la: %.2f\n", 2*3.14*bk);
	printf("Dien tich hinh tron la: %.2f\n", 3.14*bk*bk);
	
	printf("Chu vi hinh chu nhat la: %d\n", 2*(canh1+canh2));
	printf("Dien tich hinh chu nhat la: %d\n", canh1*canh2);
	
	printf("Chu vi hinh vuong la: %d\n", 4*vuong);
	printf("Dien tich hinh vuong la: %d\n", vuong*vuong);
	
	return 0;
}
