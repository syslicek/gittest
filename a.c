#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a = 0;
    a++;
    int b = 1;
    int c = a + b--;
    c--;
    if (a > c)
        return 1;
    return 0;
}
