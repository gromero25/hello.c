#include <cs50.h>
#include <stdio.h>
int expo(int x,int y);
int main(){
    int x,y;
    printf("This is an exponent program you will be ask to give two numbers.\n");
    printf("What is your first number?\n");
    x = get_int();
    printf("what is your second number?\n");
    y = get_int();
    int total = expo(x,y);
    printf("%i to the power of %i is %i\n",x,y,total);
}
int expo(int x,int y){
    int b = x;
    for(int a = 1;a < y;a++){
        x = x * b;
    }
    return x;
}