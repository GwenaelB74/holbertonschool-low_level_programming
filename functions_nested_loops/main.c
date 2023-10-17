#include <unistd.h>  // Cette bibliothèque est incluse pour utiliser la fonction write

void custom_putchar(char c)
{
    // Utilisez la fonction 'write' pour écrire le caractère 'c' sur la sortie standard (généralement la console)
    write(1, &c, 1);
}
