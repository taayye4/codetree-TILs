#include <stdio.h>

int main() 
{
    int flag = 1;
    for(int i = 0; i < 5; i++)
    {
        int num;
        scanf("%d", &num);

        if(num % 3 != 0) flag = 0;
    }

    printf("%d", flag);
    return 0;
}