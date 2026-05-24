#include <stdio.h>
#include <stdlib.h>
void showseat();
void initseat();
char seat[9][9];

//set initial seat
void initseat(){
	int i,j,c,r,count=0;
	for(i=0;i<9;i++){
	    for(j=0;j<9;j++){
	    	seat[i][j]='-';
		}
	}
	srand(time(NULL));
	while(count<10){
		c=rand()%9;
		r=rand()%9;
		if(seat[c][r]=='-'){
			seat[c][r]='*';
			count++;
		}
	}
}
//show seating chart
void showseat(){
	int i,j;
	printf("\\123456789\n");
		for(i=8;i>=0;i--){
			printf("%d",i+1);
    		for(j=0;j<9;j++){
    			printf("%c",seat[i][j]);
			}
			printf("\n");
		}
}

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
			system("PAUSE");
			return 0;
		}
	}while(password!=2026);
	
	initseat();
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
    	
    	int i,j,c,r,count=0,k;
    	char letter;
    	switch(ch){
    /*3.show existing seating chart*/		
    		case 'a':
				showseat();
    			system("PAUSE");
				system("CLS");
				break;
				
			case 'b':
    			while(1){
    				printf("請問需要幾個座位（1~4）:");
    				scanf("%d",&k);
    				if(k<1||k>4){
    					printf("人數限制1~4位，請重新輸入。\n"); 
					}
					else{
						break;
					}
				}
				
    			system("PAUSE");
				system("CLS");
				break;
	/*5.choose by yourself*/			
			case 'c':
    			while(1){
    				showseat();
    				printf("請輸入座位:");
    				scanf("%d-%d",&c,&r);
    				if(c<1||c>9||r<1||r>9){
    					printf("位置錯誤，請重新輸入。\n"); 
    					continue;
					}
					if(seat[c-1][r-1]=='*'){
						printf("此座位已被預訂，請重新輸入。\n");
						continue;
					}
					seat[c-1][r-1]='@';
					break;
				}
				showseat();
				printf("確認無誤，按任意鍵繼續。\n");
				for(i=0;i<9;i++){
    				for(j=0;j<9;j++){
    					if(seat[i][j]=='@'){
						seat[i][j]='*';
						count++;
						}
					}
				}
    			system("PAUSE");
				system("CLS");
				break;
	/*6.end*/			
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
						system("PAUSE");	
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
	system("PAUSE");
	return 0;
}

/*7.reflection*/

