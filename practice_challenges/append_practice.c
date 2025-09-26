//Notes: Add a loop that ask if you wanna add another one or exit
#include <stdio.h>
#include <string.h>

int main(){
   //variables 

   char new_anime[100]; 
   printf("Write the name of the new anime for your list\n");
   fgets(new_anime, sizeof(new_anime), stdin);

   //Remove the newline character if it exists

   new_anime[strcspn(new_anime, "\n")] = 0;

   FILE *notebook = fopen("anime_list2.txt", "a");
   fprintf(notebook, "%s ", new_anime);
   fclose(notebook);

   printf("Anime added to your list!\n");


    return 0;
}  