#include <stdio.h>
#include <string.h>

typedef struct {
    char title[200];
    char genre[30];
    int year;
    float rating;
} MediaEntry;

int main(){
   MediaEntry anime1;
   
   strcpy(anime1.title, "Attack on Titan"); //Copying Text
   strcpy(anime1.genre, "Shounen");
   anime1. year = 2013;
   anime1.rating = 8.0;

   printf("=== My First Strutc ===\n");
   printf("Title: %s\n", anime1.title);
   printf("Genre: %s\n", anime1.genre);
   printf("Year: %d\n", anime1.year);
   printf("Rating: %.1f/10\n", anime1.rating);

   return 0;
}