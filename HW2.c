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
	int password,n=0;
	do{
		printf("請輸入4位數密碼:");
		fflush(stdin);	//clear input buffer
		scanf(" %d",&password);
		n++;
		//check if the password is 2026
		if(password==2026){
			printf("密碼正確!歡迎進入系統。\n");
			system("PAUSE");
			system("CLS");
		}
		//if the password is entered incorrectly three times, an alarm will sound and the program will terminate.
		else if(n==3){
			printf("密碼錯誤!\a");
			return 0;
		}
	}while(password!=2026);
	
	/*2.show main menu*/	
	while(1){
		printf("------------------------------------------\n");
    	printf("|                                        |\n");
    	printf("|  a. 畫出直角三角形                     |\n");
    	printf("|  b. 顯示乘法表                         |\n");
    	printf("|  c. 結束                               |\n");
    	printf("|                                        |\n");
    	printf("------------------------------------------\n");
    
    	char ch,letter;
    	int i,j,number;
    	printf("請輸入選項:");
    	fflush(stdin);
    	scanf(" %c",&ch); 
    	
    	switch(ch){
    		/*3.draw a right triangle*/
    		case 'A':
    		case 'a':
				while(1){
					printf("請輸入一個'a'到'n'的字元:");
					fflush(stdin);
    				scanf(" %c",&letter);
    				if(letter>='a'&&letter<='n'){
    					break;
					}
					if(letter<'a'||letter>'n'){
    					printf("字元不在'a'到'n'之間，請重新輸入。\n");	
					}
				}
    			for(i=1;i<=letter-'a'+1;i++){
    				//print out blank
    				for(j=0;j<=letter-'a'-i;j++){
    					printf(" ");
					} 
					//print out characters
					for(j=i-1;j>=0;j--){
						printf("%c",letter-j);
					}
					printf("\n");
				}
				system("PAUSE");
				system("CLS");
				break;
				
			/*4.show multiplication table*/	
			case 'B':
    		case 'b':
    			while(1){
					printf("請輸入一個1到9的整數:");
					fflush(stdin);
    				scanf(" %d",&number);
    				if(number>=1&&number<=9){
    					break;
					}
					if(number<1||number>9){
    					printf("數字不在1到9之間，請重新輸入。\n");	
					}
				}
    			for(i=1;i<=number;i++){
    				for(j=1;j<=number;j++){
    					printf("\t%d*%d=%d ",i,j,i*j);
					}
					printf("\n");
				}
				system("PAUSE");
				system("CLS");
				break;
				
			/*5.end*/	
			case 'C':
    		case 'c':	
    			while(1){
					printf("Continue?(y/n)" );
					fflush(stdin);
    				scanf(" %c",&letter);
    				if(letter=='Y'||letter=='y'){
    					break;
					}
					if(letter=='N'||letter=='n'){
    					printf("程式結束。");	
    					return 0;
					}
					else{
						printf("輸入錯誤，請重新輸入。\n");	 
					}
				}
    			break;
    		default:
    			printf("輸入錯誤，請重新輸入。\n");
    			system("PAUSE");
		}
	}
	return 0;
}
