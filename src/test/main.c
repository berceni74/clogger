#include "../clogger.h"

int main()
{
    clogg("test.txt", "SUCCESS", "works" ,true); 
    clogg("test.txt", "ERROR", "another one", true);
    cclogg("test.txt", RED, "ERROR", "another one", true);
    cclogg("test.txt", GREEN, "SUCCESS", "works" ,true);
}