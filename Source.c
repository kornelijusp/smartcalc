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
    int y1;
    switch (index)
    {
    // =========================================================
    // Floor
    case 0:
        printf("Largest integer value less than or equal to %.2lf is %.2lf\n", y, floor(y));
        break;
    //=========================================================
    // Round
    case 1:
        printf("round of  %.2lf is  %lf\n", y, round(y));
        break;
    //=========================================================
    // Ceil
    case 2:
        printf("Smallest integer value greater than or equal to %.2lf is %.0lf\n", y, ceil(y));
        break;
    //=========================================================
    // Sin
    case 3:
        z = y * TOANGLE;
        printf("Sin value for %.2lf degrees equals to %.4lf\n", y, sin(z));
        break;
    //=========================================================
    // Cos
    case 4:
        z = y * TOANGLE;
        printf("The cosine of %.2lf is %.4lf degrees\n", y, cos(z));
        break;
    //=========================================================
    // Cosh
    case 5:
        printf("The hyperbolic cosine of %.2lf is %.4lf\n", y, cosh(y));
        break;
    //=========================================================
    // Exp
    case 6:
        printf("The exponential value of %.2lf is %.4lf\n", y, exp(y));
        break;
    //=========================================================
    // Tan
    case 7:
        z = y * TOANGLE;
        printf("Tangent of %.2lf degrees is %.4lf\n", y, tan(z));
        break;
    //=========================================================
    // Tanh
    case 8:
        printf("%.4lf\n", tanh(y));
        break;
    //=========================================================
    // Sinh
    case 9:
        printf("%.4lf\n", sinh(y));
        break;
    //=========================================================
    // Log
    case 10:
        printf("%.4lf\n", log(y));
        break;
    //=========================================================
    // Log10
    case 11:
        printf("%.4lf\n", log10(y));
        break;
    //=========================================================
    // Sqrt
    case 12:
        printf("%.4lf\n", sqrt(y));
        break;
    //=========================================================
    // Pow
    case 13:
        printf("%.2lf\n", pow(y, z));
        break;
    //=========================================================
    // Trunc
    case 14:
        printf("%.0lf\n", trunc(y));
        break;
    //=========================================================
    // Help
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
