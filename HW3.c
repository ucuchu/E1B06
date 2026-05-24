#include <stdio.h>
#include <stdlib.h>

char seat[9][9];

int main(){
	/*1.personal style home page*/
	printf("******************************************\n");
    printf("*                                        *\n");
	printf("*	歡迎來到我的第三個C語言作業      *\n");
	printf("*                                        *\n");
	printf("*	準備進入密碼驗證程序...          *\n");
	printf("*                                        *\n");
	printf("******************************************\n");
	//password input and verification
	int password,n=0;
	do{
		printf("請輸入4位數密碼:");
		fflush(stdin);				//clear input buffer
		scanf(" %d",&password);		//add a space before scanf to avoid reading the previous newline character
		n++;						//increment the number of inputs by one
		//check if the password is 2026
		if(password==2026){
			printf("密碼正確!歡迎進入系統。\n");
			system("PAUSE");
			system("CLS");
		}
		//if the password is entered incorrectly three times, an alarm will sound and the program will terminate
		else if(n==3){
			printf("密碼錯誤!\n");
			return 0;
		}
	}while(password!=2026);
	
	while(1){
	/*2.show main menu*/	
		printf("----------[Booking System]----------\n");
	    printf("| a. Available seats               |\n");
	    printf("| b. Arrange for you               |\n");
	    printf("| c. Choose by yourself            |\n");
	    printf("| d. Exit                          |\n");
	    printf("------------------------------------\n");
	    
	    char ch;
    	printf("請輸入選項:");
    	fflush(stdin);
    	scanf(" %c",&ch);
    	
    	char letter;
    	
    	switch(ch){
    		
    		case 'a':
    			
    			system("PAUSE");
				system("CLS");
				break;
				
			case 'b':
    			
    			system("PAUSE");
				system("CLS");
				break;
				
			case 'c':
    			
    			system("PAUSE");
				system("CLS");
				break;
				
			case 'd':
    			while(1){
					printf("Continue?(y/n)" );
					fflush(stdin);
    				scanf(" %c",&letter);
    				if(letter=='y'){
    					break;	//return to the main menu
					}
					else if(letter=='n'){
    					printf("程式結束。");	
    					return 0;
					}
					else{
						printf("輸入錯誤，請重新輸入。\n");	 
					}
				}
				system("PAUSE");
				system("CLS");
    			break;	
			
			default:
    			printf("輸入錯誤，請重新輸入。\n");
    			system("PAUSE");
				system("CLS");
				break;
		}
	}
	
	return 0;
}
