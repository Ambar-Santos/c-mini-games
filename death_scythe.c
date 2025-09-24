// Death Scythe Protocol 
// When a demon weapon has 99 human souls and a witch soul
// They can become a Death Scythe
// They now are part of Lord Death personal Arsenal



#include <stdio.h>
#include <string.h>

int main(){
    
    //Variables 
    //Soul Data 

    int kishin_eggs = 0;
    int witch_soul = 0;

   printf("================= Death Scythe Protocol =====================");
    printf("How many Kishin Egss have you collected: \n");
      scanf("%d", &kishin_eggs);

     
    printf("How many Witch Souls have you collected: \n");
      scanf("%d", &witch_soul);


    if (kishin_eggs >=99 && witch_soul == 1){ 
        // This code runs ONLY if BOTH conditions are TRUE
        printf("\n*** RESONANCE SUCCESS! ***\n");
        printf("The soul wavelength is perfect!\n");
        printf("Your weapon is now a DEATH SCYTHE!\n");
        printf("Welcome to the ranks of Lord Death's personal arsenal!\n");
    } else {
     
     //If both condicionts are false
     printf("\n*** RESONANCE FAILED. ***\n");
     printf("The transformation is incomplete.\n");

     if(kishin_eggs < 99){

        printf("You need %d more Kishing Egg(s).\n",  99 - kishin_eggs);

     } 

     if (witch_soul ==0){
        printf("You must acquire a Witch's Soul.\n");

     }

     printf("Continue your training!!");
     

    }











printf("===================================================================");
    return 0;
}