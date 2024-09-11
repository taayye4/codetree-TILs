#include <stdio.h>

int main() 
{
    int money;
    scanf("%d", &money);

    if(money >= 3000) printf("book\n");
    else if(money >= 1000) printf("mask\n");
    else if(money >= 500) printf("pen\n");
    else printf("no\n");
    return 0;
}