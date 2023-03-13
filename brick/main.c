#include "Brick.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    Brick brick;
    double volume;

    set_brick_data(&brick, 2, 2, 2);
    volume = calc_brick_volume(&brick);

    printf("The Brick's volume is %lf\n", volume);

    return 0;
}