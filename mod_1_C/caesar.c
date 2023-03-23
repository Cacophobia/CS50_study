#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Use: ./caesar key\n");
        return 1;
    }
 //aqui ele poe a chave
    string key = argv[1];
    for (int i = 0; i < strlen (argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf ("Use: ./caesar key\n");
            return 1;
        }
    }
///pega texto do user
    string plaintext = get_string("Digita algo: ");

    int k = atoi(key);
    printf("Texto cifrado: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + k) %26) +65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + k) %26) + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
