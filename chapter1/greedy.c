#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
float bal;
do
    {
    printf("please give balance: ");
    bal = get_float();
    }
while (bal<0);

int value;
int q = 25;
int d = 10;
int n = 5;
int p = 1;
int count=0;

bal=bal*100;
int c=round(bal);
int balance = c;
printf("%i\n", balance);

while(balance>=q)
    {
    value=balance/q;
    count=count+value;
    balance=balance-(q*value);
    }
while(balance>=d)
    {
    value=balance/d;
    count=count+value;
    balance=balance-(d*value);
    }
while(balance>=n)
    {
    value=balance/n;
    count=count+value;
    balance=balance-(n*value);
    }
while(balance>=p)
    {
    value=balance/p;
    count=count+value;
    balance=balance-(p*value);
    }

printf("the number of coins needed is: %i\n", count);
printf("balance after coins paid: %i\n", balance);
}