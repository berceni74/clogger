# Clogger
A simple logger for C.

# Function
## Main function:
```
clogg("test.txt", "SUCCESS", "works", true); 
```
Pretty much speaks for itself
- "test.txt" - log and extension
- "SUCCESS" - the type of log (ex. : ERROR)
- "works" - the content of the log
- true - for printing the log to the terminal

## with color:

> [!NOTE]
> This is a different function ! CCLOGG

```
cclogg("test.txt", GREEN , "SUCCESS", "works", true); 
```
Default colors available are : green, red and yellow.
# Adding colors
If you want more colors to your text, just look for the ANSI escape code, and define the macro. Should work on all modern terminal emulators. For ex:

```
#define RED    "\x1b[31m"
```