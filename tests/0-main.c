#include "../header/main.h"
#include <stdio.h>


int main(void)
{
    int len;

    len = _printf("Hello, %s!\n", "School");
    printf("Length: %d\n", len);

    len = _printf("Character: %c\n", 'H');
    printf("Length: %d\n", len);

    len = _printf("Percent: %%\n");
    printf("Length: %d\n", len);

    return (0);
}
