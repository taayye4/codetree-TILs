#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100] ="";
    scanf("%s %s", str1, str2);
    strcpy(str3, str1);
    strcpy(str1, str2);
    strcpy(str2, str3);

    printf("%s\n%s", str1, str2);
    return 0;
}