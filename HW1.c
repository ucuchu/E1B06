#include <stdio.h>
#include <stdlib.h>

int main(){
	/*1.personal style home page*/
	printf("******************************************\n");
    printf("*                                        *\n");
	printf("*	歡迎來到我的第一個C語言作業      *\n");
	printf("*                                        *\n");
	printf("*	準備進入密碼驗證程序...          *\n");
	printf("*                                        *\n");
	printf("******************************************\n");
	
	system("PAUSE");
	system("CLS");
	
	/*2.password input and verification*/
	int password;
	printf("請輸入4位數密碼:");
	fflush(stdin);	//清除輸入緩衝區
	scanf("%d",&password);
	//判斷密碼是否為2026
	if(password==2026){
		printf("密碼正確!歡迎進入系統。\n");
		system("PAUSE");
		system("CLS");
	}
	//密碼錯誤則發出警示音並結束程式
	else{
		printf("密碼錯誤!\a");
		return 0;
	}
	
	/*3.show main menu*/
	printf("------------------------------------------\n");
    printf("|                                        |\n");
    printf("|  'A'...'Z' : Uppercase                 |\n");
    printf("|  'a'...'z' : Lowercase                 |\n");
    printf("|  '0'...'9' : Digit                     |\n");
    printf("|  Otherwise : Your Name                 |\n");
    printf("|                                        |\n");
    printf("------------------------------------------\n");
	
	/*4.input and judgment*/
	char cin;
	printf("請輸入一個字元:");
	fflush(stdin); 
    scanf("%c",&cin);
    
    if(cin>='A'&&cin<='Z')
    	printf("Uppercase\n");	//大寫字母
    else if(cin>='a'&&cin<='z')
    	printf("Lowercase\n");	//小寫字母
    else if(cin>='0'&&cin<='9')
    	printf("Digit\n");	//數字
	else
		printf("E1B06褚宥彤\n");	//若非以上類別，輸出個人資訊
		
	system("PAUSE");
	return 0;
} 

/*5.reflection

*/
