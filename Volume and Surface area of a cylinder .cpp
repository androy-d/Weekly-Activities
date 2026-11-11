#include<stdio.h>
int main(){
	int radius;
	int height;
	int volume;
	int surface_area; 
	
     printf("Enter the radius of the cylinder;");
     scanf("%d",&radius);
     
     printf("Enter the height of the cylinder;");
     scanf("%d",&height);
     
volume = 3.142*radius*radius*height;
surface_area = 2*3.142*radius*radius+2*radius*height;

    printf("\nThe Volume of the cylinder is %d",volume);
    printf("\nThe Surface Area of the cylinder id %d",surface_area);
    return 0;

}