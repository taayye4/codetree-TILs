#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);

    int flag = 0;
    for(int i = a; i <= b; i++)
    {
        if(1920 % i == 0 && 2880 % i ==0)
            flag = 1;
    }

    printf("%d", flag);
    
    return 0;
}