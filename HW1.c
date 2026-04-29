#include <stdio.h>
#include <stdlib.h>

int main(){
	//1.personal style home page
	printf("歡迎來到我的第一個C語言作業\n");
	system("PAUSE");
	system("CLS");
	
	//2.password verification
	int password;
	printf("請輸入4位數密碼:");
	fflush(stdin); 
	scanf("%d",&password);
	if(password==2026){
		printf("密碼正確，歡迎進入系統。\n");
		system("PAUSE");
		system("CLS");
	}
	else{
		printf("密碼錯誤!\a");
		return 0;
	}
	
	//3.show main menu
	printf("------------------------------------------\n");
    printf("|                                        |\n");
    printf("|  'A'...'Z' : Uppercase                 |\n");
    printf("|  'a'...'z' : Lowercase                 |\n");
    printf("|  '0'...'9' : Digit                     |\n");
    printf("|  Otherwise : Your Name                 |\n");
    printf("|                                        |\n");
    printf("------------------------------------------\n");
	
	//4.input and judgment
	char cin;
	printf("請輸入一個字元:");
	fflush(stdin); 
    scanf(" %c", &cin);
    printf("\n");
    
    if(cin>='A'&&cin<='Z')
    	printf("Uppercase\n");
    else if(cin>='a'&&cin<='z')
    	printf("Lowercase\n");	
    else if(cin>='0'&&cin<='9')
    	printf("Digit\n");
	else
		printf("E1B06褚宥彤\n");
		
	system("PAUSE");
	return 0;
} 

/*5.experience

*/
