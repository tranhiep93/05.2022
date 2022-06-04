#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int STH;
	int SBN;
	
	int DLT;
	int DTH;
	int DBTL;
	
	printf("nhap tong so buoi hoc\n");
	scanf("%d",&STH);
	printf("nhap tong so buoi nghi hoc\n");
	scanf("%d",&SBN);
	
	if(SBN <= STH*25/100){
		printf("Ban duoc thi het mon\n");
		}
	else{
		printf("Ban phai hoc lai do nghi qua 25% so buoi\n");
		return 0;
		}
	
	printf("nhap diem ly thuyet\n");
	scanf("%d",&DLT);
	printf("nhap diem thuc hanh\n");
	scanf("%d",&DTH);
	printf("nhap diem bai tap lon\n");
	scanf("%d",&DBTL);
	


	if(DLT<40*20/10){
		printf("Ban thi lai ly thuyet\n");	
	}
	else{
		printf("Ban qua phan ly thuyet\n");
	}
	
	if(DTH<40*15/10){
		printf("Ban thi lai thuc hanh\n");	
	}
	else{
		printf("Ban qua phan thuc hanh\n");
	}
	
	if(DBTL<40*10/10){
		printf("Ban thi lai bai tap lon\n");	
	}
	else{
		printf("Ban qua bai tap lon\n");
	}
	

	return 0;
}
