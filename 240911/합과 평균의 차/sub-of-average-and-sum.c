#include <stdio.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    int avg = sum / 3;
    int sub = sum - avg;
    printf("%d\n%d\n%d", sum, avg, sub);
    return 0;
}