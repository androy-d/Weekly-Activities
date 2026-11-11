#include <stdio.h>

int main() {
   
    int Consumption;
    int Chargerate;
    int Charges;
     
    printf("Enter your Consupmtion: ");
    scanf("%d", &Consumption);

        if (Consumption <= 30) {
            Chargerate = 20;
            Charges = Consumption * Chargerate;
            } else if (Consumption<= 60) {
                Chargerate = 25;
                Charges = Consumption * Chargerate;
                } 
                else {
                    Chargerate = 30;
                    Charges = Consumption * Chargerate;
                    }

    printf("Your Consumption is: %d\n", Consumption);
    printf("Your Charges are: %d\n", Charges);

    return 0;
}
