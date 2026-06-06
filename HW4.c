#include <stdio.h>
#include <stdlib.h>
int N;
//定義學生資料 
typedef struct {
	char name[10];
	char num[7];
	int math,phy,eng;
	float avg;
}student;

student stu[10];	//宣告學生陣列 

float average(student stu){
	float avg;
	avg=(stu.math+stu.phy+stu.eng)/3.0;
	return avg;
}
//3.
void enter(){
	int i;
	system("CLS");
	do{
		printf("請問要輸入幾筆學生資料(5~10):");
		fflush(stdin);
		scanf(" %d",&N);
		if(N<5||N>10){
			printf("請輸入5~10位，請重新輸入。\n");
		}
	}while(N<5||N>10);
	
	for(i=0;i<N;i++){
		printf("學生 %d\n",i+1);
		printf("姓名:");
		scanf(" %s",stu[i].name);
		
		do{
			printf("學號(6位整數):");
			scanf(" %s",stu[i].num);
			if(strlen(stu[i].num) != 6) {
    			printf("學號要為6位整數，請重新輸入。\n");
				}
		}while(strlen(stu[i].num) != 6);
		
		do{
			printf("數學成績:");
			scanf(" %d",&stu[i].math);
			if(stu[i].math<0||stu[i].math>100){
				printf("分數要0~100分，請重新輸入。\n");
			}
		}while(stu[i].math<0||stu[i].math>100);
		
		do{
			printf("物理成績:");
			scanf(" %d",&stu[i].phy);
			if(stu[i].phy<0||stu[i].phy>100){
				printf("分數要0~100分，請重新輸入。\n");
			}
		}while(stu[i].phy<0||stu[i].phy>100);
		
		do{
			printf("英文成績:");
			scanf(" %d",&stu[i].eng);
			if(stu[i].eng<0||stu[i].eng>100){
				printf("分數要0~100分，請重新輸入。\n");
			}
		}while(stu[i].eng<0||stu[i].eng>100);
		
		stu[i].avg=average(stu[i]);
	}
}
//4.
void display(){
	int i;
	system("CLS");
	printf(" 姓名\t學號\t數學\t物理\t英文\t平均\n");
	printf("---------------------------------------------\n");
	for(i=0;i<N;i++){
		printf(" %s\t%s\t%d\t%d\t%d\t%.1f\n",stu[i].name,stu[i].num,
			stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg);
	}
}

//5.
void search(){
	char searchname[10];
	int i,found=0;
	system("CLS");
	printf("請輸入要搜尋的學生姓名:");
	scanf(" %s",searchname);
	
	for(i=0;i<N;i++){
		if(strcmp(stu[i].name,searchname)==0){
			found=1;
			printf("姓名:%s\n學號:%s\n數學:%d\n物理:%d\n英文:%d\n平均:%.1f\n",
				stu[i].name,stu[i].num,stu[i].math,stu[i].phy,stu[i].eng,stu[i].avg);
            break;   
		}
	}
	if(!found){
		printf("資料不存在。\n");
	}
}

//6.
void ranking(){
	
	
}



int main(){
	/*1.personal style home page*/
	printf("******************************************\n");
    printf("*                                        *\n");
	printf("*	歡迎來到我的第四個C語言作業      *\n");
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
		if(password==2026){
			printf("密碼正確!歡迎進入系統。\n");
			system("PAUSE");
			system("CLS");
		}
		else if(n==3){
			printf("密碼錯誤!\n");
			system("PAUSE");
			return 0;
		}
	}while(password!=2026);
	
	/*2.show main menu*/
	while(1){
		printf("-------- Grade System --------\n");
        printf("| a. Enter student grades    |\n");
        printf("| b. Display student grades  |\n");
        printf("| c. Search student grades   |\n");
        printf("| d. Grade ranking           |\n");
        printf("| e. Exit system             |\n");
        printf("------------------------------\n");
		
		char ch;
    	printf("請輸入選項:");
    	fflush(stdin);
    	scanf(" %c",&ch);
    	
    	switch(ch){
    		case 'a':
    			enter();
    			system("PAUSE");
    			system("CLS");
    			break;
    		
			case 'b':
				display();
    			system("PAUSE");
    			system("CLS");
    			break;
			
			case 'c':
				search();
    			system("PAUSE");
    			system("CLS");
    			break;
				
			case 'd':
				ranking();
    			system("PAUSE");
    			system("CLS");
    			break;
				
			case 'e':
    			system("PAUSE");
    			system("CLS");
    			break;				
		}
	}
	
	return 0;
} 
