#include<stdio.h>
int main(){
	float height;
	float bank_balance;
	char phone_number [15];
	
	printf("\nWhat is your Height:In meters:");
	scanf("%f",&height);
	
	printf("\nWhat is your Bank Balance:In ksh:");
	scanf("%f",&bank_balance);
	
	printf("\nWhat is your Phone number:");
	scanf("%14s",&phone_number);
	  
    	printf("\nYour height is %f",height);
    	printf("\nYour Bank balance is %f",bank_balance);
    	printf("\nYour Phone number is %s",phone_number);
    	return 0;
}