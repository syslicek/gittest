#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a = 0;
    a += 2;
    printf("a %d", a);
    int b = 1;
    int c = 2;
    c = a + b--;
    c--;
    if (a > c)
        return 1;
    return 0;
}
