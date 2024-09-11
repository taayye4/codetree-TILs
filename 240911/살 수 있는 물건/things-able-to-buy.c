#include <stdio.h>

int main() 
{
    int money;
    scanf("%d", &money);

    if(money / 3000 >= 1) printf("book\n");
    else if(money / 1000 >= 1) printf("mask\n");
    else printf("no\n");
    return 0;
}