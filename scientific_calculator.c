#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.1415265
float gcd(long a, long b) // gcd of two numbers
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
float fact(float n) // factorial of two numbers
{
    float i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
float NcR(float a, float b) // combination of two numbers
{
    if (a == b)
    {
        return 1;
    }
    else if (a < b)
    {
        return 0;
    }
    else
    {
        float result = fact(a) / (fact(b) * fact(a - b));
        return result;
    }
}
float NpR(float a, float b) // permutation of two numbers
{
    if (a < b)
    {
        return 0;
    }
    else
    {
        float result = fact(a) / (fact(a - b));
        return result;
    }
}
int mod(int a, int b) // gives the remainder of two numbers
{
    if (a < b)
    {
        return b;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        int result = (a % b);
        return result;
    }
}
float radian(float degree) // degree to sin/cos/tan values
{
    float radian = degree * pi / 180;
    return radian;
}
int bin_to_dec(int n) // binary to decimal conversion
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}
int dec_to_bin(int n) // decimal to binary conversion
{
    int rem, i = 1;
    int bin = 0;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}
int main()
{
    float a, b, result = 0, result1 = 0; // taking input as floating points
    int num;                             // taking "num" as an integer
    printf("\n\n*******************************************************************\n");

    printf("\t\t    Welcome to C Calculator\n\n");

    printf("Enter two numbers:\n");
    scanf("%f%f", &a, &b);

    printf("Enter (0-21) for doing the following functions:\n0 for sum:\t\t\t1 for sub:\n2 for multiplication:\t\t3 for division:\n4 for power:\t\t\t5 for sin:\n6 for cos:\t\t\t7 for square root:\n8 for exponent:\t\t\t9 for tan:\n10 for GCD:\t\t\t11 for factorial:\n12 for (base=e) Logarithm:\t13 for LCM:\n14 for NcR:\t\t\t15 for NpR:\n16 for mod:\t\t\t17 for absolute:\n18 for (base=10) Logarithm\t19 for binary to decimal:\n20 for decimal to binary:\t21 for inverse:\n\n"); // showing all the operations

    scanf("%d", &num);

    printf("\n");

    switch (num)
    {
    case 0:
        result = a + b;
        printf("%f + %f = %f\n", a, b, result);
        break;
    case 1:
        result = a - b;
        printf("%f - %f = %f\n", a, b, result);
        break;
    case 2:
        result = a * b;
        printf("%f * %f = %f\n", a, b, result);
        break;
    case 3:
        result = a / b;
        printf("%f / %f = %f\n", a, b, result);
        break;
    case 4:
        result = pow(a, b);
        printf("Power of %f^%f is %f\n", a, b, result);
        break;
    case 5:
        result = radian(a);
        result1 = radian(b);
        printf("Sin of %f is %f\n", a, sin(result));
        printf("Sin of %f is %f\n", b, sin(result1));
        break;
    case 6:
        result = radian(a);
        result1 = radian(b);
        printf("Cos of %f is %f\n", a, cos(result));
        printf("Cos of %f is %f\n", b, cos(result1));
        break;
    case 7:
        result = sqrt(a);
        result1 = sqrt(b);
        printf("SQRT of %f = %f\n", a, result);
        printf("SQRT of %f = %f\n", b, result1);
        break;
    case 8:
        result = exp(a);
        result1 = exp(b);
        printf("Exponent of %f = %f\n", a, result);
        printf("Exponent of %f = %f\n", b, result1);
        break;
    case 9:
        result = radian(a);
        result1 = radian(b);
        printf("Tan of %f is %f\n", a, tan(result));
        printf("Tan of %f is %f\n", b, tan(result1));
        break;
    case 10:
        printf("Greatest Common Divisor is %f\n", gcd(a, b));
        break;
    case 11:
        printf("Factorial of the num(%f) = %f\n", a, fact(a));
        printf("Factorial of the num(%f) = %f\n", b, fact(b));
        break;
    case 12:
        result = log(a);
        result1 = log(b);
        printf("Logarithm of %f(base=e) is %f\n", a, result);
        printf("Logarithm of %f(base=e) is %f\n", b, result1);
        break;
    case 13:
        result = (a * b) / gcd(a, b);
        printf("LCM of %f and %f is %f\n", a, b, result);
        break;
    case 14:
        printf("%fC%f is %f\n", a, b, NcR(a, b));
        break;
    case 15:
        printf("%fP%f is %f\n", a, b, NpR(a, b));
        break;
    case 16:
        printf("%f mod %f is %d\n", a, b, mod(a, b));
        break;
    case 17:
        printf("Absolute value of %d is %d\n", (int)a, (int)abs(a));
        printf("Absolute value of %d is %d\n", (int)b, (int)abs(b));
        break;
    case 18:
        result = log10(a);
        result1 = log10(b);
        printf("Logarithm of %f(base=10) is %f\n", a, result);
        printf("Logarithm of %f(base=10) is %f\n", b, result1);
        break;
    case 19:
        printf("decimal conversion of %d is %d\n", (int)a, bin_to_dec(a));
        printf("decimal conversion of %d is %d\n", (int)b, bin_to_dec(b));
        break;
    case 20:
        printf("binary conversion of %d is %d\n", (int)a, dec_to_bin(a));
        printf("binary conversion of %d is %d\n", (int)b, dec_to_bin(b));
        break;
    case 21:
        result = pow(a, -1);
        result1 = pow(b, -1);
        printf("Inverse of %d is %f\n", (int)a, result);
        printf("Inverse of %d is %f\n", (int)b, result1);
        break;
    default:
        printf("You have entered an Invalid Operator.\n");
        break; // recheck the choice number
    }

    printf("*******************************************************************\n");

    return 0;
}