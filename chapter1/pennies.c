#include <cs50.h>
#include <stdio.h>
float mult(int x,int y);
int main(){
    int x = 0;
    float y = 0;
    while(x > 31 ||x< 28 ||y < 1){
        printf("Days in month:");
        x = get_int();
        printf("pennies on first day:");
        y = get_float();
        float total = mult(y,x);
        printf("$%.2f\n",total);
        break;
    }

}
float mult(int x,int y){
    float b = 2;
    for(int a = 1;a < y;a++){
        b= b* 2;
    }
    b = (b*x)/100;
    return b;
}