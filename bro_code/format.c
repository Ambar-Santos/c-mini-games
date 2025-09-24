#include <stdio.h>



int main(){

// format specifier = Sprecial tokens that begin with a % symbol
//                    followed by a character that specifies the data type,
//                    and optional modifiers (width, precision, flags).
//                    They control how data is displayed or interpreted.

int age = 20;
float price = 19.99;
double pi = 3.1415926535;
char currency = '$';
char name[] = "Ambi";

printf("%5d\n", age);
printf("%.1f\n", price);//Precision . + digits to display
printf("%lf\n", pi); //Better to use lf in doubles
printf("%c\n", currency);
printf("%s\n", name);



    return 0;
}