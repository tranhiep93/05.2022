#include <stdio.h>
#include <conio.h>
main(){
	float num1, num2;
	
	printf("Nhap so num1 = ");
	scanf("%f", &num1);
	printf("Nhap so num2 = ");
	scanf("%f", &num2);
	
	printf("Tong hai so la: %.0f\n", num1+num2);
	printf("Hieu hai so la: %.0f\n", num1-num2);
	printf("Tich hai so la: %.0f\n", num1*num2);
	printf("Thuong hai so la: %f\n",num1/num2);

return 0;
}
