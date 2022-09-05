#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

int split(int ac, char **av)
{
        int c;
        int n = ac;

        for(c = 0; c < n; c++)
                printf("av[%d]: %s\n", c, av[c]);
        return(0);
}
