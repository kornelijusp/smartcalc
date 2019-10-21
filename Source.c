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
    double number, numbery;

    for (int i = 0; i < operationAmount; i++)
    {
        if (strcmp(operation[i], argv[1]) == 0)
        {
            if (i != 15 && i != 13)
            {
                number = atof(argv[2]);
                calc(i, number, 0);
            }
            else if (i == 13)
            {
                number = atof(argv[2]);
                numbery = atof(argv[3]);
                calc(i, number, numbery);
            }
            else
                calc(i, 0, 0);
        }
    }

    return 0;
}
//==============================================
// Switch calculation functions
void calc(int index, double y, double z)
{
    switch (index)
    {
    // =========================================================
    // Floor
    case 0:
        printf("Largest integer value less than or equal to %.2lf is %.2lf\n", y, floor(y));
        break;
    //=========================================================
    case 1:
        printf("%.0lf\n", round(y));
        break;
    //=========================================================
    case 2:
        printf("%.0lf\n", ceil(y));
        break;
    //=========================================================
    case 3:
        printf("%.4lf\n", sin(y));
        break;
    //=========================================================
    case 4:
        printf("%.4lf\n", cos(y));
        break;
    //=========================================================
    case 5:
        printf("%.4lf\n", cosh(y));
        break;
    //=========================================================
    case 6:
        printf("%.4lf\n", exp(y));
        break;
    //=========================================================
    case 7:
        printf("%.4lf\n", tan(y));
        break;
    //=========================================================
    case 8:
        printf("%.4lf\n", tanh(y));
        break;
    //=========================================================
    case 9:
        printf("%.4lf\n", sinh(y));
        break;
    //=========================================================
    case 10:
        printf("%.4lf\n", log(y));
        break;
    //=========================================================
    case 11:
        printf("%.4lf\n", log10(y));
        break;
    //=========================================================
    case 12:
        printf("%.4lf\n", sqrt(y));
        break;
    //=========================================================
    case 13:
        printf("%.2lf\n", pow(y, z));
        break;
    //=========================================================
    case 14:
        printf("%.0lf\n", trunc(y));
        break;
    //=========================================================
    case 15:
        printf("----- Help -----\n");
        printf("This is smart calculator\n\n");
        printf("smartcal <operation> <double x> <double y>\n\n");
        printf("Operation list\n");
        printf("floor (double <x>)\nround\nceil\nsin\ncos\ncosh\n"
               "exp\ntan\ntanh\nsinh\nlog\nlog10\n"
               "sqrt\npow\ntrunc\n");
        break;
        //=====================================================
    default:
        printf("Write --help for help\n");
        break;
    }
}
