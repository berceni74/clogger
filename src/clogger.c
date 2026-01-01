#include "clogger.h"
#include <stdio.h>

void clogg(char *log, char *content, char *type)
{
    FILE *file = fopen(log, "a");

    fprintf(file, "[%s] %s\n", type, content);

    fflush(file);
    fclose(file);
}