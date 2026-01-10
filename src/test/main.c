#include "../clogger.h"

int main()
{
    clogg("test.txt", "works", "SUCCESS"); 
    clogg("test.txt", "another one", "WORKS");
}