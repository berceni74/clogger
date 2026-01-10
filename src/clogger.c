#include "clogger.h"
#include <time.h>
#include <stdio.h>

void clogg(char *log, char *content, char *type)
{
    time_t logTime;
    time(&logTime);

    FILE *file = fopen(log, "a");

    fprintf(file, "[%s] %s | at %s", type, content, ctime(&logTime));

    fflush(file);
    fclose(file);
}