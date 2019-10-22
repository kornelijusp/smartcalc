/************************
 *                      *
 *  Kornelijus Petronis *
 *      namu darbas     *
 *   Assessment task 1  *
 *        EAf-19        *
 *                      *
 ***********************/
/* This program allows you to calculate certain mathematical functions
*
*/

#define _USE_MATH_DEFINES

// Library list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// =========================================
#define TORAD 180.0 / M_PI;
#define TOANGLE M_PI / 180.0;

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
// Enumeration
enum operations
{
    Floor,
    Round,
    Ceil,
    Sin,
    Cos,
    Cosh,
    Exp,
    Tan,
    Tanh,
    Sinh,
    Log,
    Log10,
    Sqrt,
    Pow,
    Trunc
};
//==========================================
// All functions
void help(int x);
void calc(int index, double y, double z);

//=================- MAIN -=========================
int main(int argc, char *argv[])
{
    double number, numbery;
    int state = 0;

    for (int i = 0; i < operationAmount - 1; i++)
    {
        if (i != 0)
            state = 1;

        if (!strcmp(operation[i], argv[1]) && atof(argv[2]))
        {
            if (i != 13)
            {
                number = atof(argv[2]);
                calc(i, number, 0);
            }
            else
            {
                number = atof(argv[2]);
                numbery = atof(argv[3]);
                calc(i, number, numbery);
            }
            state = 1;
        }
        else if (!strcmp(argv[1], "--help"))
        {
            help(16);
            state = 1;
        }

        else if (!strcmp(operation[i], argv[1]) && !strcmp(argv[2], "--help"))
        {
            help(i);
            state = 1;
        }

        else if (state == 0)
            printf("Write --help for help\n");
    }

    return 0;
}
// =============================================
void help(int x)
{
    if (x == 16)
    {
        printf("----- Help -----\n");
        printf("This is smart calculator\n\n");
        printf("More information about operations\n");
        printf("Smartcalc <operation> --help\n\n");
        printf("Smartcalc <operation> <double x> <double y>\n\n");
        printf("Operation list\n");
        printf("floor\nround\nceil\nsin\ncos\ncosh\n"
               "exp\ntan\ntanh\nsinh\nlog\nlog10\n"
               "sqrt\npow\ntrunc\n");
    }

    enum operations oper = x;
    // Help
    switch (oper)
    {
    case Floor:
        printf("Floor help\n");
        break;

    default:
        break;
    }
}
//==============================================
// Switch calculation functions
void calc(int index, double y, double z)
{

    enum operations oper = index;

    switch (oper)
    {
    // =========================================================
    // Floor
    case Floor:
        printf("Largest integer value less than or equal to %.2lf is %.2lf\n", y, floor(y));
        break;
    //=========================================================
    // Round
    case Round:
        printf("round of  %.2lf is  %lf\n", y, round(y));
        break;
    //=========================================================
    // Ceil
    case Ceil:
        printf("Smallest integer value greater than or equal to %.2lf is %.0lf\n", y, ceil(y));
        break;
    //=========================================================
    // Sin
    case Sin:
        z = y * TOANGLE;
        printf("Sin value for %.2lf degrees equals to %.4lf\n", y, sin(z));
        break;
    //=========================================================
    // Cos
    case Cos:
        z = y * TOANGLE;
        printf("The cosine of %.2lf is %.4lf degrees\n", y, cos(z));
        break;
    //=========================================================
    // Cosh
    case Cosh:
        printf("The hyperbolic cosine of %.2lf is %.4lf\n", y, cosh(y));
        break;
    //=========================================================
    // Exp
    case Exp:
        printf("The exponential value of %.2lf is %.4lf\n", y, exp(y));
        break;
    //=========================================================
    // Tan
    case Tan:
        z = y * TOANGLE;
        printf("Tangent of %.2lf degrees is %.4lf\n", y, tan(z));
        break;
    //=========================================================
    // Tanh
    case Tanh:
        printf("The hyperbolic tangent of %.2lf is %.2lf degrees\n", y, tanh(y));
        break;
    //=========================================================
    // Sinh
    case Sinh:
        printf("The hyperbolic sine of %lf is %lf degrees\n", y, sinh(y));
        break;
    //=========================================================
    // Log
    case Log:
        printf("log(%.2lf) = %.2lf\n", y, log(y));
        break;
    //=========================================================
    // Log10
    case Log10:
        printf("log10(%.2lf) = %.2lf\n", y, log10(y));
        break;
    //=========================================================
    // Sqrt
    case Sqrt:
        printf("Square root of %.2lf is %.2lf\n", y, sqrt(y));
        break;
    //=========================================================
    // Pow
    case Pow:
        printf("%.2lf ^ %.2lf = %lf\n", y, z, pow(y, z));
        break;
    //=========================================================
    // Trunc
    case Trunc:
        printf("Truncated value of %.2lf is %.0lf\n", y, trunc(y));
        break;
        //=========================================================

    default:
        printf("Write --help for help\n");
        break;
    }
}