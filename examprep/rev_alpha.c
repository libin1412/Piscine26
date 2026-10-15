#include <unistd.h>

void print_reverse(void)
{
    char l;

    l = 'z';
    while (l >= 'a')
    {
        write(1, &l, 1);
        l--;
    }
}

int main(void)
{
    print_reverse();
    return (0);
}