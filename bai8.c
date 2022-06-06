#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	int Int;
	float Float;
	double Double;
	char Char;
	long int Longint;
	long double Longdouble;
	
	printf("Nhap kieu Int = \n");
	scanf("%d",&Int);
	printf("Nhap kieu float = \n");
	scanf("%d",&Float);
	printf("Nhap kieu double = \n");
	scanf("%d",&Double);
	printf("Nhap kieu char = \n");
	scanf("%d",&Char);
	printf("Nhap kieu long int = \n");
	scanf("%d",&Longint);
	printf("Nhap kieu long double = \n");
	scanf("%d",&Longdouble);

	printf("Kieu Int: %d Byte, Vi du: %d\n",sizeof(Int),Int);
	printf("Kieu Float: %d Byte, Vi du: %d\n",sizeof(Float),Float);
	printf("Kieu Double: %d Byte, Vi du: %d\n",sizeof(Double),Double);
	printf("Kieu Char: %d Byte, Vi du: %d\n",sizeof(Char),Char);
	printf("Kieu Long int: %d Byte, Vi du: %d\n",sizeof(Longint),Longint);
	printf("Kieu Long double: %d Byte, Vi du: %d\n",sizeof(Longdouble),Longdouble);


	return 0;
}
