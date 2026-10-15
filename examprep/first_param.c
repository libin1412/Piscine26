#include <unistd.h>

int main(int argc, char **argv)
{
    int index;

    index = 0;
    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][index])
    {
        write(1, &argv[1][index], 1);
        index++;
    }
    return (0);
}