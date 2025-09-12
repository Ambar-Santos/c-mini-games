//Input practice 
//We use the printf function to ask for user input
//We use the scanf funstion to take the users
// input and store it in a variable

#include <stdio.h>


int main(){

//Variable declaration 
char name;
int favorite_number;
float height;


printf("What's your name?: ");
  scanf("%c", &name);

printf("What is your favorite number of them all?: ");
  scanf("%d", &favorite_number);

printf("What's your height?: ");
  scanf("%.2f", &height);
  

//Print everything

printf("Hi, $c, Im very glad to meet you, so you like the number %d, and your height is about %.2f ,nice stuff", name, favorite_number, height);




  return 0;

  
}
