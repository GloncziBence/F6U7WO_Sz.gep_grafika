#include "Brick.h"

#include <math.h>

void set_brick_data(Brick* brick, double sideA, double sideB, double sideC)
{
    brick->sideA = sideA;
    brick->sideB = sideB;
    brick->sideC = sideC;
}

double calc_brick_volume(const Brick* brick)
{
    double volume = brick->sideA * brick->sideB * brick->sideC;
    return volume;
}