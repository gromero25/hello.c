#include <cs50.h>
#include <stdio.h>
int main(){
    int h,hast;
    printf("Height:");
    h = get_int();
    hast = 1;
    for(int num = 0;num < h-1;num++){
        printf(" ");
        for (int has= 0; has < hast+1 ;has++){
            printf("#");
        }
        hast = hast +1;
        printf("\n");
    }
}
