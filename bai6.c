#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float toan;
	float ly;
	float hoa;
	
	printf("Nhap diem toan = \n");
	scanf("%f", &toan);
	printf("Nhap diem ly = \n");
	scanf("%f", &ly);
	printf("Nhap diem hoa = \n");
	scanf("%f", &hoa);
	
	printf("Tong diem 3 mon la: %.2f\n",toan+ly+hoa);
	printf("Diem trung binh 3 mon la: %.2f\n",(toan+ly+hoa)/3);
	return 0;
}
