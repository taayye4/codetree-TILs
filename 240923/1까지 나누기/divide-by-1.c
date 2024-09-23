#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int i = 1, count = 1;
    while((n / i) > 1)
    {
        n /= i;
        i++;
        count++;
    }

    printf("%d", count);
    return 0;
}