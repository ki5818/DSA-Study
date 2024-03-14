#include <stdio.h>
#include "algorithm.h"
#include <stdlib.h>

int main()
{
    char str1[] = "test1";
    char str2[100];
    fgets(str2, sizeof(str2), stdin);
    printf("%s\n", str1);
    fprintf(stdout, "%s\n", str2);
    printf("%s\n", str1);
    return 0;
}
