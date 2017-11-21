#include <cs50.h>
#include <stdio.h>
int main(){
    printf("In this interview you'll answer a few questions \n");
    printf("what is your name?\n");
    string name = get_string();
    printf("what is your age?\n");
    int age = get_int();
    printf("what's your favoite letter\n");
    char letter = get_char();
    printf("what is your weight in kg?(nearest 10th)\n");
    double weight = get_double();
    printf("your name is %s\n",name);
    printf("your age is %i\n",age);
    printf("Your favoite letter is %c\n",letter);
    printf("and your weight is %e\n",weight);
}