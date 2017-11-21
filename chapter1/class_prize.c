#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int place = 0;
    string names [5] = {
        "Blasina",
        "James",
        "Mumu",
        "Elda",
        "Asif",
    };
    for (int i =  0 ; i < 5; i ++){
        printf("%i %s\n",place,names[i]);
        place +=1;
    }
    printf("enter the person who wins the pize(0-4):");
    place = get_int();
    printf("%s\n",names[place]);
}