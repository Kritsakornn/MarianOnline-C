/* #include<stdio.h>
int main(){
    char name[10];
    printf("Type your name:");
    scanf("%s",&name);
    printf("%s",name);
    return 0;
}// Frist activites
*/

/*#include<stdio.h>
int main(){
	int a;
	float b;
	double c;
	char d;
	printf("Size of int=%lu bytes\n",sizeof(a));
	printf("Size of float=%lu bytes\n",sizeof(b));
	printf("Size of double=%lu bytes\n",sizeof(c));
	printf("Size of char=%lu bytes\n",sizeof(d));
	
	return 0;
}
*/

/*#include <stdio.h>
int main(){
	int a,b,result;
	
	a = 10;
	b = 5;
	a+=b;
	result = a;
	printf("%d",result);
}
*/

/*#include <stdio.h>
int main(){
	int a; 
	float b;
	printf("Type interger :");
	scanf("%d",&a);
	printf("Type float :");
	scanf("%g",&b);
	printf("%d \n",a);
	printf("%g \n",b);
	printf("a+b = %g \n",a+b);
	printf("a-b = %g \n",a-b);
	printf("a*b = %g \n",a*b);
	printf("a/b = %g \n",a/b);
	
	return 0;
}
*/

/*#include<stdio.h>
int main(){
	int num_1,num_2,result;
	printf("Type your number: ");
	scanf("%d",&num_1);
	printf("Type your next number: ");
	scanf("%d",&num_2);
	result = num_1*num_2;
	printf("%d",result);
	return 0;
}
*/
/*#include<stdio.h>
int main(){
	char name[10];
	printf("What is your name?: ");
	scanf("%s",&name);
	printf("Hello!! %s",name);
	return 0;
}
*/
//If else
/*#include<stdio.h>
int main(){
	int num_1,num_2;
	num_1 = 1;
	num_2 = 1;
	
	if(num_1 > num_2){
		printf("%d", num_1);
	}
	else if (num_1 < num_2){
		printf("%d", num_2);
	}
	else{
		printf("equal");
	}
	
	return 0;
}
*/

/*#include<stdio.h>
int main(){
	int num_1;
	printf("Type your number: ");
	scanf("%d",&num_1);
	
	if(num_1 > 0){
		printf("Positive number");
	}
	else if(num_1 < 0){
		printf("Negative number");
	}
	else{
		printf("Number = 0");
	}
}
*/

/*#include<stdio.h>
int main(){
	int score;
	printf("Type your score: ");
	scanf("%d",&score);
	
	if(score > 80){
		printf("Grade A");
	}
	else if(score >=70){
		printf("Grade B");
	}
	else if(score >=60){
		printf("Grade C");
	}
	else if(score >=50){
		printf("Grade D");
	}
	else{
		printf("Grade F");
	}
}
*/

/*#include<stdio.h>
int main(){
	char gender;
	double lbm,height,weight;
	
	printf("Welcome to program Calculate LBM\n");
	printf("If you are man type M or if you are girl type G");
	printf("\nWhat is your gender ? : ");
	scanf("%c",&gender);
	printf("\nWhat is your height ? : ");
	scanf("%lf",&height);
	printf("\nWhat is your weight ? : ");
	scanf("%lf",&weight);
	
	if(gender == 'M'){
		lbm = ((0.32810 * weight)+(0.33929 * height) - 29.5336 );
		printf("Your lbm is = %.1f",lbm);
	}
	else if(gender == 'G'){
		lbm = ((0.29569 * weight)+(0.42813 * height) - 43.2933 );
		printf("Your lbm is = %.1f",lbm);
	}
	else{
		printf("Error this is not gender");
	}
	
}
*/

/*#include<stdio.h>
int main(){
	char gender;
	double lbm,bmr,bmr/hr,height,weight;
	
	bmr = 370 + (21.6 * lbm);
	bmr/hr = bmr/24;
	
	printf("Welcome to program Calculate LBM\n");
	printf("\nWhat is your gender ? : ");
	scanf("%c",&gender);
	printf("\nWhat is your height ? : ");
	scanf("%lf",&height);
	printf("\nWhat is your weight ? : ");
	scanf("%lf",&weight);
	
	if(gender == 'M'){
		lbm = ((0.32810 * weight)+(0.33929 * height) - 29.5336 );
		printf("Your lbm is = %.1f\n",lbm);
	}
	else if(gender == 'G'){
		lbm = ((0.29569 * weight)+(0.42813 * height) - 43.2933 );
		printf("Your lbm is = %.1f\n",lbm);
	}
	else{
		printf("Error this is not gender");
	}
	
	printf("Your bmr is : %.1f\n", bmr );
	printf("Your bmr/hr is : %.1f\n", bmr );
	
}
*/













