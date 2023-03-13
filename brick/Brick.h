#ifndef BRICK_H
#define BRICK_H

typedef struct Brick
{
    double sideA;
    double sideB;
    double sideC;
} Brick;

void set_brick_data(Brick* brick, double sideA, double sideB, double sideC);

double calc_brick_volume(const Brick* brick);

#endif