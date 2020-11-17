
#include <stdio.h>
int main(void)
{
    int a=5;
    a++;
    int rv = system("ls");
    printf("kbtest %d, rv = %d", a, rv);
    return 0;
}
