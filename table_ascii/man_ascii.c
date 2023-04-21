#include <stdio.h>

int main() {
    
    FILE *fichier;
    char caractere;

fichier = fopen("C:/table_ascii/asciis_table.txt", "r"); // Ouverture du fichier avec chemin d'accès complet

    if (fichier != NULL) {
        while ((caractere = fgetc(fichier)) != EOF) {
            putchar(caractere); // Affichage du caractère lu par fgetc
        }
        fclose(fichier); // Fermeture du fichier
        printf("\n\n");
    } else {
printf("\x1b[31mErreur lors de l'ouverture du fichier.\x1b[0m\n");
    }
    printf("\x1b[36mBy_Betzalel75\x1b[0m\n");
    return 0;
}