#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    while(n < 1000)
    {
        if(n % 2 == 0)
        {
            n = n * 3 + 1;
            count++;
        }
        else
        {
            n = n * 2 +2;   
            count++;         
        }
    }

    printf("%d", count);
    return 0;
}