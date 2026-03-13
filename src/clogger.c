#include "clogger.h"
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

void clogg(char *log, char *content, char *type, bool print)
{
    time_t logTime;
    time(&logTime);

    FILE *file = fopen(log, "a+");
    fprintf(file, "[%s] %s | at %s", type, content, ctime(&logTime));

    if(print)
    {
        printf("[%s] %s | at %s", type, content, ctime(&logTime));
    }

    fflush(file);
    fclose(file);
}
