/**
 * hello.c
 *
 * CS50 AP
 * Old Friends
 *
 * Greets a user by their name.
 */
#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        printf("Hello, %s!\n",argv[1]);
        return 0;
    }
    else
    {
        return 1;
    }
}