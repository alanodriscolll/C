#include <stdio.h>

int main() {

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    int age = 25;
    float price = 14.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Alan";

    printf("%d\n", age); //Int
    printf("%f\n", price); //Float
    printf("%lf\n", pi); //Double
    printf("%c\n", currency); //Char
    printf("%s\n", name); //Array

    //Width
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);


    //Precision, width and flags
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}