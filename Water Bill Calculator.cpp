#include <stdio.h>

int main() {
    int Meternumber;
    int Startmeterreading;
    int Endmeterreading;
    int Chargerate;
    int Charges;
   
    printf("Enter your Meternumber: ");
    scanf("%d", &Meternumber); 
    printf("Enter your Start meter reading: ");
    scanf("%d", &Startmeterreading);
    printf("Enter your End meter reading: ");
    scanf("%d", &Endmeterreading);

    int Consumption = Endmeterreading - Startmeterreading;

    if (Endmeterreading >0) {
      Chargerate=0;
       Charges=0;
       }
        else if (Consumption <= 30) {
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

    printf("Your Meter number is: %d\n", Meternumber);
    printf("Your Start meter reading is: %d\n", Startmeterreading);
    printf("Your End meter reading is: %d\n", Endmeterreading);
    printf("Your Consumption is: %d\n", Consumption);
    printf("Your Charge rate is: %d\n", Chargerate);
    printf("Your Charges are: %d\n", Charges);

    return 0;
}