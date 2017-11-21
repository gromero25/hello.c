/**
 * pennies.c
 *
 * CS50 AP
 * Old Friends
 *
 * Calculates how many pennies a user would get if their change
 * doubles each day using command line information
 */
#include <cs50.h>
#include <math.h>
#include <stdio.h>


#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    if (argc != 3 || atof(argv[1]) < 28 || atof(argv[1]) > 31 || atof(argv[2]) < 0) {
        printf("usage: ./pennies <days> <pennis_on_first_day>\n");
        return 1;
    }

    int days = atof(argv[1]);
    int pennies = atof(argv[2]);
    long long total = pennies;
    for(int i = 1; i < days; i++)
    {
        total += pennies * pow(2,i);
    }

    printf("$%.2f\n", ((double) total) / 100);
}