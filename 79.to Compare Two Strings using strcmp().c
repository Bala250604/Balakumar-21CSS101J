#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    int result;
    printf("\nEnter first string: ");
    gets(s1);
    printf("\nEnter second string: ");
    gets(s2);
    result = strcmp(s1, s2);
    if (result == 0)
        printf("\nBoth strings are equal");
    else
        printf("\nBoth strings are not equal");
    return 0;
}
