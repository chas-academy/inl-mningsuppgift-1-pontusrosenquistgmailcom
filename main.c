#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    // Define variables
    int dice_rolls[7]; // I want to use rand() % 6 + 1 and store in element 1 2 3 4 5 6, but leave element 0 empty in this array of dice_rolls
    float total_sum = 0;
    float median_value = 0; // %.1f Remember to use one decimal
    //int d_roll = 0;
    //int counter = 0;

    dice_rolls[0] = 0;
    dice_rolls[1] = 0;
    dice_rolls[2] = 0;
    dice_rolls[3] = 0;
    dice_rolls[4] = 0;
    dice_rolls[5] = 0;
    dice_rolls[6] = 0;

    for (int i = 0; i < 100; i++){
        int d_roll = (rand() % 6) + 1;

        // printf("%d\n", d_roll);
        dice_rolls[d_roll]++;
        total_sum+= d_roll;
        //counter++;

        //printf("total of %ds: %d\n",d_roll, dice_rolls[d_roll]);
    }

    for (int i = 1; i<7; i++){
        printf("%d\n", dice_rolls[i]);
    }

    //median_value = total_sum/100;

    printf("%.0f\n", total_sum);
    printf("%.1f\n", total_sum/100);
    //printf("%d", counter);
    //printf("%d", dice_rolls[0]);
    return 0;
}
