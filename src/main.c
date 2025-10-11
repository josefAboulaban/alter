#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agc, char *argv[])
{
    //kontrollere om argumenter er korrekter
    if(argc < 2)
    {
        printf("Usage: %s --help>\n", argv[0]);
        return 1;
    }


    return 0;
}