//File managament practice 

#include <stdio.h>

int main(){

    FILE *notebook = fopen("my_notes.txt", "w");

    fprintf(notebook, "I created this file with C!\n");

    fclose(notebook);

    printf("Check for my_notes.txt in your foulder!\n");

    return 0;
}