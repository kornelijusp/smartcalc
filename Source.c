/************************
 *                      *
 *  Kornelijus Petronis *
 *      namu darbas     *
 *   Assessment task 1  *
 *        EAf-19        *
 *                      *
 ***********************/

// Library list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// =========================================
// Operation list
char* operation[15] = {
    "floor",
    "round",
    "ceil",
    "sin",
    "cos",
    "cosh",
    "exp",
    "tan",
    "tanh",
    "sinh",
    "log",
    "log10",
    "sqrt",
    "pow",
    "trunc"};
// =========================================
int main(int argc, char *argv[])
{
    int number;
    char oper[10];

    number = atoi(argv[2]);

    
    for (int i = 0; i < 15; i++)
    {
        if (strcmp(operation[i], argv[1]) == 0)
           printf("%d\n", i);
    }

    // printf("%s\n", operation);
    printf("%s ", argv[1]);
    printf("%d\n", number);

    // printf("Operation: %d\n", operation);

    return 0;
}
