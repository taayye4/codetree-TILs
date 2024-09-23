#include <stdio.h>

int main() 
{
    int age, count = 0;
    float sum = 0;

    for(int i = 0; i < 100; i++)
    {
        scanf("%d", &age);
        if(age / 10 == 2)
        {
            sum += age;
            count++;
        }
        else
            break;
    }

    printf("%.2f", sum / count);
    return 0;
}