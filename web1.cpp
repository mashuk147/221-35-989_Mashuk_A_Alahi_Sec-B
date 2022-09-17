#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter two numbers=\n");
	scanf("%d\n%d",&num1,&num2);
	if(num1==num2){
		printf("The numbers %d and %d are equal",num1,num2);
	}
	else{
		printf("The numbers %d and %d aren't equal",num1,num2);
	}
}
