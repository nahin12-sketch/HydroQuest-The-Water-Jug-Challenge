#include <stdio.h>
#include <string.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    } 
    return a;
}

int pourWater(int from, int to, int toCapacity) {
    int transfer = (from <= (toCapacity - to)) ? from : (toCapacity - to);
    return transfer;
}

int main() {
    int jug1, jug2, target, jugA = 0, jugB = 0;
    char command[20];
    int history[2];

    printf("Welcome to the Funny Water Jug Challenge!\n");
    printf("Enter the capacity of Jug 1: ");
    scanf("%d", &jug1);
    printf("Enter the capacity of Jug 2: ");
    scanf("%d", &jug2);
    printf("Enter the target amount of water: ");
    scanf("%d", &target);

    if (target > jug1 && target > jug2) {
        printf("Target amount is too high! Try again with a smaller target. Maybe water isn't that important?\n");
        return 0;
    }
    
    int jug_gcd = gcd(jug1, jug2);

    if (target % jug_gcd != 0) {
    printf("Target %d is impossible to measure with %d and %d liter jugs!\n", target, jug1, jug2);
    printf("You can only measure amounts that are multiples of %d.\n", jug_gcd);
    return 0;
    }

    /*
    HOW TO SOLVE THE WATER JUG PROBLEM:
    Here's a step-by-step strategy to reach the target:
    
    1. Always fill the smaller jug first (or jug1 if equal)
    2. Pour from the smaller jug to the larger jug
    3. When the larger jug is full, empty it
    4. Pour remaining water from smaller to larger again
    5. Repeat until you get the target amount
    
    Example for 4L and 3L jugs to measure 2L:
    - Fill 3L jug (0,3)
    - Pour 3L to 4L (3,0)
    - again fill 3L jug (3,3)
    - Pour again 3L to 4L (4,2)
    - Now we have 2L!
    */

    while(1){
        printf("\nJug 1: %d/%d L | Jug 2: %d/%d L\n", jugA, jug1, jugB, jug2);
        printf("Enter a command (fill1, fill2, empty1, empty2, pour1to2, pour2to1, exit): ");
        scanf("%s", command);

        if(strcmp(command, "fill1") == 0) {
            jugA = jug1;
            printf("Jug 1 is now full! You have got water, you have got power!\n");
        } else if(strcmp(command, "fill2") == 0) {
            jugB = jug2;
            printf("Jug 2 is now full! Double the water, double the fun!\n");
        } else if(strcmp(command, "empty1") == 0) {
            jugA = 0;
            printf("Jug 1 is now empty! Oops, water shortage!\n");
        } else if(strcmp(command, "empty2") == 0) {
            jugB = 0;
            printf("Jug 2 is now empty! Looks like we are in a desert now.\n");
        } else if(strcmp(command, "pour1to2") == 0) {
            int transfer = pourWater(jugA, jugB, jug2);
            jugA = jugA - transfer;
            jugB = jugB + transfer;
            printf("Poured %d liters from Jug 1 to Jug 2! It's like magic... but with water!\n", transfer);
        } else if(strcmp(command, "pour2to1") == 0) {
            int transfer = pourWater(jugB, jugA, jug1);
            jugB = jugB - transfer;
            jugA = jugA + transfer;
            printf("Poured %d liters from Jug 2 to Jug 1! Water juggling at its finest!\n", transfer);
        } else if(strcmp(command, "exit") == 0) {
            printf("Exiting game. Stay hydrated! You've earned it, champion!\n");
            break;
        } else {
            printf("Invalid command! Water confusion detected! Try again.\n");
        }
        history[0] = jugA;
        history[1] = jugB;

        if (jugA == target || jugB == target) {
            printf("\nCongratulations! You measured exactly %d liters of water! You are a hydration hero!\n", target);
            break;
        }
    }
    return 0;
}
