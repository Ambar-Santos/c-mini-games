//File managament practice 

#include <stdio.h>

int main(){

    FILE *notebook = fopen("anime_list.txt", "a");

    fprintf(notebook, "Soul Eater\n");
    fprintf(notebook, "Fire Force\n");
    fprintf(notebook, "Gachiakuta\n");

    fclose(notebook);

    printf("Check for anime_list.txt in your foulder!\n");

    return 0;
}