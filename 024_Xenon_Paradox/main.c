/**
 * Xenon's Paradox
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-30
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    /*
     *  Simulation of a Moving Object
     *
     *  dt = 1.0 (s)
     *
     *  Archilleus Speed = 1.0 (m/s)
     *  Archilleus Distance = 0.0 (m)
     *
     *  Turtle Speed = 0.001 (m/s)
     *  Turtle Distance = 1.0 (m)
     *
     */

    const double arch_speed = 1.0;
    const double turt_speed = 0.001;

    double dt = 0.01;
    double arch_distance = 0.0;
    double turt_distance = 1.0;
    double time = 0.0;

    for ( ; turt_distance - arch_distance > 0.00001; dt *= 0.5)
    {
        printf("Time = %fs, dt = %fs, Archilleus = %fm, Turtle = %fm\n",
                time, dt, arch_distance, turt_distance);
        arch_distance += dt * arch_speed;
        turt_distance += dt * turt_speed;
        time += dt;
    }



    return 0;
}

