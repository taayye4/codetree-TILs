#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 1;
    for(int i = 1; i <= b; i++)
    {
        if(i % a == 0) sum *= i;
    }
    printf("%d", sum);
    return 0;
}