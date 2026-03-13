#include "../clogger.h"

int main()
{
    clogg("test.txt", "works", "SUCCESS", true); 
    clogg("test.txt", "another one", "WORKS", true);
}