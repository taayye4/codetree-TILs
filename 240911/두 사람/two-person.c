#include <stdio.h>

int main() {
    int age1, age2;
    char morf1,morf2;

    scanf("%d %c %d %c", &age1, &morf1, &age2, &morf2);
    if(((age1 >= 19)&&(morf1 == 'M'))||((age2 >= 19)&&(morf2 == 'M')))
    printf("1\n");
    else
    printf("0\n");
    return 0;
}