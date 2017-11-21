#include <cs50.h>
#include <stdio.h>

int main(){
    printf("give me a number\n");
    int x = get_int();
    printf("give me anther number\n");
    int y = get_int();
    int sum = x+y;
    int difference = x-y;
    double leftOver = x/y;
    int product = x*y;
    printf("%i + %i = %i\n",x,y,sum);
    printf("%i * %i = %i\n",x,y,product);
    printf("%i - %i = %i\n",x,y,difference);
    printf("%i / %i = %f\n",x,y,leftOver);
}