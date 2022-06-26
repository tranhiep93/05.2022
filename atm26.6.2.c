#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Login(int user, int pass);
int Menu(int choise);
int Ruttien(int str, int totalA);
int CK(int str, int HM, int totalA, int totalB);
	
	int str; //so tien muon rut/so tien muon chuyen khoan.
	int ID; //ID Nguoi nhan tien
	int totalA=1000000;
	int totalB=2000000;
	int HM=50000000;
	int user=1234;
	int pass=5678;
	int sodu;
	
 void main()
	{
		int choise,lc;
		Login(user,pass);
		do{
			do{
			printf("\t\t\t Xin chao %d, ban co %d VND",user,totalA);	
			Menu(choise);
			printf("\n Moi nhap lua chon tu 1-4: ");
			scanf("%d",&choise);
			}while((choise<=0)||(choise>4));
		{
		switch (choise){
		case 1: printf("\n Xin cam on.");
			exit(0);
			break;
		case 2: Ruttien(str,totalA);
			break;
		case 3: CK(str,HM,totalA,totalB);
			break;
		case 4: printf("So du cua ban la: %d",totalA);
			sodu=totalA;
			break;
		}
		}
		printf("\n Ban muon tiep tuc khong. 1. co\t2.khong: ");
		scanf("%d",&lc);
		totalA=sodu;
		}while(lc==1);
		printf("\n Tam biet");
		
	}

//Ham Login
int Login(int user, int pass)
{
	int count=0;
	do{
	printf("\n Moi nhap user: ");
	scanf("%d",&user);
	printf("\n Moi nhap pass: ");
	scanf("%d",&pass);
	if((user!=1234) || (pass!=5678)){
	count++;	
	printf("\n User hoac Pass khong dung. Lan %d.\n",count);
	}
	else {
	printf("\t\t\t Dang nhap thanh cong\n");
	return 0;
	}
	}while(count<3);{
	printf("\n ban sai qua 3 lan");
	exit(0);
	}
}

//Ham Menu
int Menu(int choise)
{
	printf("\n .....MENU.....");
	printf("\n 1. Thoat.");
	printf("\n 2. Rut tien.");
	printf("\n 3. Chuyen khoan.");
	printf("\n 4. Kiem tra so du.");
}

//Ham rut tien
int Ruttien(int str, int totalA)
{
	do {
	printf("\n So tien rut la boi 50000vnd, nho hon 3 trieu.");
	printf("\n Nhap so tien muon rut: ");
	scanf("%d",&str);
	if(str>totalA){
		printf("\n So du khong du.");
	}
	if(str>3000000){
		printf("\n vuot qua han muc rut mot lan.");
	}
	} while((str>totalA)||(str>3000000)||(str%50000!=0));
	{
		sodu=totalA-str;
		printf("\n Ban da rut %d VND, so du %d VND",str,sodu);
	}
	return 0;
}

//Ham chuyen khoan
int CK(int str, int HM, int totalA, int totalB)
{
	printf("\n Nhap user nguoi nhan: ");
	scanf("%d",&ID);
	do {
	printf("\n Nhap so tien muon chuyen: ");
	scanf("%d",&str);
	if(str>totalA){
		printf("\n So du khong du.");
	}
	if(str>HM){
		printf("\n Han muc ngay nho hon %d VND",HM);
	}
	}while ((str>totalA)||(str>HM));
	{
		sodu=totalA-str;
		totalB=totalB+str;
		printf("\n Ban %d nhan duoc %d VND, so du %d VND",ID,str,totalB);
		printf("\n Ban %d  giam di %d VND, so du %d VND", user,str,sodu);
	}
}
