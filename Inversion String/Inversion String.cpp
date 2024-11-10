#include <stdio.h>
#include <string.h>

void inverserChaine(char* chaine) {
    int longueur = strlen(chaine);  // Calcul de la longueur de la chaîne
    int i;

    for (i = 0; i < longueur / 2; i++) {
        // Échange des caractères entre les deux extrémités
        char temp = chaine[i];
        chaine[i] = chaine[longueur - i - 1];
        chaine[longueur - i - 1] = temp;
    }
}

int main() {
    char chaine[] = "Bonjour le monde!";

    printf("Chaine originale : %s\n", chaine);
    inverserChaine(chaine);
    printf("Chaine inversee : %s\n", chaine);

    return 0;
}