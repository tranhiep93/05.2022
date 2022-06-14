#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char ch;
	printf("\n enter a lower cased alphabe (a-z):")	;
	scanf("%c",&ch);
	if(ch<'a'||ch>'z')
	printf("\ncharacter not a lower cased alphabet");
	else
	switch(ch)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		printf("\nchu nhap vao la nguyen am");
		break;
		case'z':
			printf("chu cuoi cung cua bang alphabet");
			break;
		default:
			printf("\nchu nhap vao khong thuoc nguyen am, va khac Z");
			break;
		
	}
	
	
	
	return 0;
}
