#include <cs50.h>
#include <stdio.h>

int main(){
    int Parent = 35;
    int Parent2 = 34;
    int sibling = 14;
    int sibling2 = 5;
    int sibling3 = 1;
    int me = 17;
    printf("parent one age is %d\n",Parent);
    printf("parent two age is %d\n",Parent2);
    printf("sibling's age is %d\n",sibling);
    printf("sibling two age is %d\n",sibling2);
    printf("sibling three age is %d\n",sibling3);
    printf("my age is %d\n",me);
    int total = Parent + Parent2 + sibling+ sibling2 + sibling3 + me;
    printf("our total age is %d\n",total);
}