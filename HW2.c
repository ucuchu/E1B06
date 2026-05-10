#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	/*1.personal style home page*/
	printf("******************************************\n");
    printf("*                                        *\n");
	printf("*	歡迎來到我的第二個C語言作業      *\n");
	printf("*                                        *\n");
	printf("*	準備進入密碼驗證程序...          *\n");
	printf("*                                        *\n");
	printf("******************************************\n");
	
	//password input and verification
	int password,i=0;
	do{
		printf("請輸入4位數密碼:");
		fflush(stdin);	//clear input buffer
		scanf("%d",&password);
		i++;
		//check if the password is 2026
		if(password==2026){
			printf("密碼正確!歡迎進入系統。\n");
			system("PAUSE");
			system("CLS");
		}
		
		else if(i==3){
			printf("密碼錯誤!\a");
			return 0;
		}
	}while(password!=2026);
	
	
	

	system("PAUSE");
	return 0;
}
