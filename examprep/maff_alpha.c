#include <unistd.h>

int main(void)
{
    write (1, "aBcDeFgHiJk....XyZ\n", 20);
    return (0);
}