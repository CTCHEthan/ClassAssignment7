#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHAR 50

int main()
{
    printf("Enter text ");
    char msg[MAX_CHAR];//("hello World!\n\n")
    gets(msg);

    if ( islower(msg[0]) )
        {
            msg[0]=toupper(msg[0]);
            printf("Auto-correct: \n%s", msg);
        }
        else
        {
            printf("No Auto-correct needed.");
        }

    return 0;
}
