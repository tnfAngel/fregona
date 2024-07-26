#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Fregona version %s - Copyright (c) 2024 Gátomo, ported by tnfAngel\n The definitive mop to scrub your RAM in Window$\n\n Made with hatred towards Micro$oft by Gátomo\n https://github.com/gatomod/fregona\n", "0.0.😿");

    printf("Preparing fregona...\n");

    size_t fregona_size = 1024 * 1024 * 2000;
    size_t fregona_total = 0;
    void *free_ram_mop;

    printf("Scrubbing...\n");

    while (1) {
        free_ram_mop = malloc(fregona_size);

        if (free_ram_mop == NULL) {
            printf("Free RAM downloaded after %zuMB of scrubbing\n", fregona_total / (1024 * 1024));
            break;
        }

        memset(free_ram_mop, 7291, fregona_size);

        fregona_total += fregona_size;
    }

    return 0;
}
