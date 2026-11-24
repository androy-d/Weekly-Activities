#include <stdio.h>

int seed = 5;

// makes a fake random 0 or 1
int getRandom() {
    seed = (seed * 31 + 7) % 101;
    return seed % 2;
}

int main() {
    int rooms[5][10];
    int floor, room;

    // fill the rooms with 1 (occupied) or 0 (vacant)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            rooms[floor][room] = getRandom();
        }
    }

    // count occupied and vacant for each floor
    for (floor = 0; floor < 5; floor++) {
        int occupied = 0;
        int vacant = 0;

        for (room = 0; room < 10; room++) {
            if (rooms[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}