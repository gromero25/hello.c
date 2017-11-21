/**
 * fahrenheit.c
 *
 * CS50 AP
 * Old Friends
 *
 * Converts degrees C to degrees F
 * by collecting info at command line
 */

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc == 2){
        float celsius = atof(argv[1]);
        float f = (1.8 * celsius) + 32;
        printf("C:%f\n",celsius);
        printf("F : %.1f\n",f);
        return 0;
    }
    else{
        return 1;
    }
}
