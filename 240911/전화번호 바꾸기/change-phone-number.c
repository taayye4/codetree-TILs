#include <stdio.h>

int main() 
{
    char number[14];
    fgets(number, sizeof(number), stdin);
    char temp[5];

    for(int i = 0; i < 4; i++)
    {
        temp[i] = number[i + 4];
    }
    temp[4] = '\0';
    for(int i = 0; i < 4; i++)
    {
        number[i + 4] = number[i + 9];
    }
    for(int i = 0; i < 4; i++)
    {
        number[i + 9] = temp[i];
    }
    puts(number);
    return 0;
}