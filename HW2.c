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
		//if the password is entered incorrectly three times, an alarm will sound and the program will terminate.
		else if(i==3){
			printf("密碼錯誤!\a");
			return 0;
		}
	}while(password!=2026);
	
	/*2.show main menu*/
	printf("------------------------------------------\n");
    printf("|                                        |\n");
    printf("|  a. 畫出直角三角形                     |\n");
    printf("|  b. 顯示乘法表                         |\n");
    printf("|  c. 結束                               |\n");
    printf("|                                        |\n");
    printf("------------------------------------------\n");
	
	system("PAUSE");
	return 0;
}
