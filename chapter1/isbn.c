#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    int total  = 0;
    long long isbn;

    printf("Enter a 10 digit ISBN code \n ");
     isbn = get_long_long();

    for (int i = 10; i >= 0; i--) {
        num = isbn % 10;
        total += (num* i);
        isbn = isbn / 10;
    }


    if (total% 11 == 0) {

        printf("YES\n");

        }
        else
        {

        printf("NO\n");

        }
}