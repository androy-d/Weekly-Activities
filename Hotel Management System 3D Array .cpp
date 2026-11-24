#include <stdio.h>

int seed = 5;

// makes a fake random 0 or 1
int getRandom() {
    seed = (seed * 31 + 7) % 101;
    return seed % 2;
}

int main() {
    int hotel[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // fill every room in every branch
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                hotel[branch][floor][room] = getRandom();

                if (hotel[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    printf("Total occupied rooms in all branches: %d\n", totalOccupied);

    return 0;
}