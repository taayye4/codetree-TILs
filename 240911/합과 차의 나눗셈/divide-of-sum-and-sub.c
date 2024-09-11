#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    float out = (float)(a + b) / (float)(a - b);
    printf("%.2f", out);
    return 0;
}