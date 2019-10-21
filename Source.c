/************************
 *                      *
 *  Kornelijus Petronis *
 *      namu darbas     *
 *   Assessment task 1  *
 *        EAf-19        *
 *                      *
 ***********************/

#define _USE_MATH_DEFINES

// Library list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// =========================================
#define operationAmount 16
// Operation list
char *operation[operationAmount] = {
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
    "trunc",
    "--help"};
// =========================================
// All functions
void calc();

//=================- MAIN -=========================
int main(int argc, char *argv[])
{
    double number;

    for (int i = 0; i < operationAmount; i++)
    {
        if (strcmp(operation[i], argv[1]) == 0)
        {
            if (i != 15)
            {
                number = atof(argv[2]);
                calc(i, number);
            }
            //else
               // calc(i, 0);
        }
    }

    return 0;
}
//==============================================
// Switch calculation functions
void calc(int x, double y)
{
    double rez;
    switch (x)
    {
    //=========================================================
    case 0:
        printf("Double floor(double x) returns the largest integer value less than or equal to x.\n\n PARAMETER\n x = This is the floating point value.\n\n");
        rez = floor(y);
        printf("\n\nlargest integral value not greater than %.2lf : %.0lf", y, rez);
        break;
        //=========================================================
    case 15:
        printf("----- Help -----\n");
        printf("This is smart calculator\n\n");
        printf("smartcal <operation> <double x>\n\n");
        printf("Operation list\n");
        printf("1) floor\n2) round\n3) ceil\n4) sin\n5) cos\n6) cosh\n"
               "7) exp\n8) tan\n9) tanh\n10) sinh\n11) log\n12) log10\n"
               "13) sqrt\n14) pow\n15) trunc\n");
        break;

    default:
        printf("Write --help for help\n");
        break;
    }
}
