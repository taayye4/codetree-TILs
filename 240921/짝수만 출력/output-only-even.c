#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);

    while(a != b + 1)
    {
        if(a % 2 == 0) printf("%d ", a);
        a++;
    }
    return 0;
}