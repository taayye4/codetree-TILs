#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    for(int line = 1; line <= n; line++)
    {
        for(star = 1; star <= line; star++)
        {
            printf("*");
        }
        printf("\n\n");    
    }
    for(int line = n + 1; line < 2 * n; line++)
    {
        for(star = (2 * n - line) ; star > 0; star--)
        {
            printf("*");
        }
        printf("\n\n");    
    }
    return 0;
}