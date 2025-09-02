#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    /*
    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    */

    /*
    float gpa = 3.8;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %.1f\n", gpa);
    printf("The price is €%.2f\n", price);
    printf("The temperature is %.1f°C\n", temperature);
    */

    /*
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.14lf\n", pi);
    printf("The value of e is %.12lf\n", e);
    */

    /*
    char grade = 'F';
    char symbol = '!';
    char currency = '€';

    printf("Your grade is %c\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("Your currency is %c\n", currency);
    */

    /*
    char name[] = "Alan";
    char food[] = "burger";
    char email[] = "test@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favourite food is %s\n", food);
    printf("Your email is %s\n", email);
    */

    bool isOnline = true;
    bool isStudent = false;

    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are NOT a student");
    }

    return 0;
}