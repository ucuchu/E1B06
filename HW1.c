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
	fflush(stdin);	//clear input buffer
	scanf("%d",&password);
	//check if the password is 2026
	if(password==2026){
		printf("密碼正確!歡迎進入系統。\n");
		system("PAUSE");
		system("CLS");
	}
	//if the password is incorrect, an alarm sound will be emitted and the program will terminate.
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
    	printf("Uppercase\n");	//uppercase letter
    else if(cin>='a'&&cin<='z')
    	printf("Lowercase\n");	//lowercase letter
    else if(cin>='0'&&cin<='9')
    	printf("Digit\n");	//number
	else
		printf("E1B06褚宥彤\n");	//if it does not fall into the above categories, output personal information.
		
	system("PAUSE");
	return 0;
} 

/*5.reflection*/
/*This project was a great review of if-else logic and character judgment.
I realized that getting the UI to align perfectly is actually quite a tedious task that requires a lot of patience!
I also successfully handled the issue of newline characters remaining in the input buffer.
Practicing this program gave me new insights into logical thinking and helped me feel much more confident in using programming commands.*/
