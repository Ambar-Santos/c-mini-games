//Intructions from excalibur

/*
Lord Death is concerned about the madness of wavelengths in Death City. 
Write a program that does the following:
Asks the user to input their current sanity level (a number between 0 and 100).

Based on the input, prints a diagnosis:

    If sanity is 80 or higher: "Your soul is sound! A model for DWMA!"

    If sanity is between 50 and 79: "You show signs of strain. Meditate with your weapon."

    If sanity is between 25 and 49: "Madness is approaching! Report to Lord Death immediately!"

    If sanity is below 25: "KISHIN ALERT! CONTAINMENT PROTOCOLS ACTIVATED!"


*/

#include <stdio.h>


int main(){
   
//Variables

int sanity_level 0;

printf("========================== Sanity Checker =========================\n");
printf("-----In a scale of 1-100 what is your sanity level like right now-----\n")
scanf(scanf("%d", &sanity_levels););

  
if(sanity_levels >= 80){
  printf("A sound soul is in a sound mind and a sound body, indeed! \n");
} else if (sanity_levels > 50 && sanity_levels < 79){
  printf("You show signs of strain. Meditate with your weapon.\n");
}else if (sanity_levels > 25 && sanity_levels < 49){
  printf("Madness is approaching! Report to Lord Death immediately!\n");
}else{
    printf("KISHIN ALERT! CONTAINMENT PROTOCOLS ACTIVATED!\n")
}



printf("====================================================================\n");




    return 0;
}