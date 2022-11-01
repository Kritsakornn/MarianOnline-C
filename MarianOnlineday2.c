/*#include <stdio.h>
int main(){
	int i;
	
	for (i = 1; i < 10; i++){
		printf("i = %d\n",i);
	}
	return 0;
}
*/

/*#include <stdio.h>
int main(){
	int i;
	
	while(i<=10){
		printf("i = %d\n",i);
		i++;
	}
	return 0;
}
*/


/*#include <stdio.h>
int main(){
	char exit;
	
	do
	{
		printf("Type n to exit : ");
		scanf("%c",&exit);
	} 
	while(exit != 'n');
	printf("End program");
	
	return 0;
}
*/

/*#include <stdio.h>
int main(){
	int i;
	
	for(i = 0 ; i <=2; i+=2){
		printf("%d\n",i);
	}
	for(i = 0; i<=4; i+=2){
		printf("%d\n",i);
	}
	for(i = 0; i<=6; i+=2){
		printf("%d\n",i);
	}
	return 0;
}
*/

/*#include <stdio.h>
int main(){
	int i;
	
	for(i = 2 ; i <=4; i+=2){
		printf("%d\n",i);
	}
	for(i = 2; i<=6; i+=2){
		printf("%d\n",i);
	}
	for(i = 2; i<=8; i+=2){
		printf("%d\n",i);
	}
	
	return 0;
	
}
*/

/*#include <stdio.h>
int main(){
	int i = 1;
	
	while(i <= 10)
	{
		if (i == 8)
		{
			break;
		}
		else if (i == 2)
		{
			i++;
			continue;
		}
		else 
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
*/
/*
#include <stdio.h>
int menu(){
	
	int select;
	printf("\n*****************************");
	printf("\n************Menu*************");
	printf("\n*****************************");
	printf("\n 1. Fried rice");
	printf("\n 2. Fried chicken");
	printf("\n 3. Fried pork");
	printf("\n 4. Spicy prawn soup");
	printf("\n 5. Fried basil");
	printf("\n*****************************");
	printf("\nWhat to choose : ");
	scanf("%d",&select);
	return select;
}

int main(){
	char name[10],exit;
	int select;
	printf("Welcome to the koko restaurant .\n");
	printf("What is your name? : ");
	scanf("%s",&name);
	printf("Hello... %s\n",name);
	printf("Menu is here!!!\n");
	
	do {
		do{
			select = menu();
			if (select == 1){
				printf("Fried rice = 200THB\n");
			}
			else if (select == 2){
				printf("Fried chicken = 100THB\n");
			}
			else if (select == 3){
				printf("Fried pork = 300THB\n");
			}
			else if (select == 4){
				printf("Spicy prawn soup = 150THB\n");
			}
			else if (select == 5){
				printf("Fried basil = 750THB\n");
			}
			printf("Type y to say yes or type n to say no \n");
			scanf(" %c",&exit);
		}
		while(exit != 'n' && exit != 'y');
	}
	while(exit != 'y'); 
	printf("Exit");
	
	
	
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x,number,incorrectscore;
    char name[10],exit;
    srand(time(NULL));
    x = rand() % 100 + 1;
    
    printf("What is your name?\n");
    scanf("%s",&name);
    printf("Hello...%s\n", name);
	printf("Welcome to the game\n");
		do{
			do{
				printf("Choose your number 1-100 : ");
				scanf("%d",&number);
				if(incorrectscore != 10){
						if (number > x){
							printf("You wrong! try again your number is higher\n");
							printf("your incorrectscore = %d\n",incorrectscore);
							incorrectscore++;
						}
						else if (number < x){
							printf("You wrong! try again your number is lower\n");
							printf("Your incorrectscore = %d\n",incorrectscore);
							incorrectscore++;
						}
						else if(number == x){
							incorrectscore-=1;
							printf("Your number is correct!!!\n");
							printf("The correct number is %d\n",x);
							printf("Your incorrectscore = %d\n",incorrectscore);
							printf("Do you want to play again? type y to play or type n to exit.\n");
							scanf(" %c",&exit);
							if(exit == 'y'){
								printf("Let's go \n");
						}
						incorrectscore = 1;
						x = rand() % 100 + 1;
						
						}
					}
				else if(incorrectscore == 10){
					printf("You lose the correct number is %d\n",x);
					printf("Your incorrectscore = %d\n",incorrectscore);
					printf("Do you want to play again? type y to play or type n to exit.\n");
					scanf(" %c",&exit);
					
						if(exit == 'y'){
						printf("Let's go \n");
					}
					incorrectscore = 1;
					x = rand() % 100 + 1;
					
				}
				}while(exit != 'y' && exit != 'n');
			}while(exit != 'n');
			printf("Exit");
			
			return 0;
		}
		
		
	
	
















