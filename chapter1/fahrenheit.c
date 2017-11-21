#include <cs50.h>
#include <stdio.h>
int main(){
    float c,f;
    printf("what celcius degree do you what to convert to fehrenheit?\n");
    c = get_float();
    f =(c * 9 / 5) + 32 ;
    printf("%.1f\n",c);
    printf("%.1f\n",f);
}