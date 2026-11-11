#include<stdio.h>
int main(){
	int choice;
	
	printf("Select data bundle:\n");
	printf("1. 100MB @ 50KES\n");
	printf("2. 500MB @ 200KES\n");
	printf("3. 1GB @ 350KES\n");
	printf("4. 2GB @ 600KESn");
	
	printf("Enter your Choice:1-4):");
	scanf("d",&choice);
	if (choice ==1){
		printf("You selected 100MB. Cost = 50 KES\n");
	}
	else if (choice==2){
		printf("You selected 500MB. Cost = 200KES\n");
	}
	else if(choice==3){
		printf("You selected 1GB. Cost = 350KES\n");
	}
	else if(choice ==4){
		printf("You selected 2GB. Cost = 600KES\n");
	}else{
		printf("Invalid choice. Please enter 1 to 4\n");
	}
	return 0;	
}