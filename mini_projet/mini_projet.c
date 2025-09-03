
// Système de Gestion de Stock dans une Librairie

// Ajouter un livre au stock.
// Afficher tous les livres disponibles.
// Rechercher un livre par son titre.
// Mettre à jour la quantité d'un livre.
// Supprimer un livre du stock.
// Afficher le nombre total de livres en stock.

// 1.built tables
#include <stdio.h>

int main()
{

    char titles[255][255];
    char author[255][255];
    int price[255];
    int quantity[255];
    int chois;
    int counter = 0;
    char trach[255];

    printf("CHOUSE A NUMBER BETWEEN 1 AND 4 \n1.add a book\n2.show all books\n3.search on book whit it\'s title\n4.update the quantity of a giving book\n5.delete a book\nshow the total of all books\n");
    printf("-------------------------------------------\n  -your chois : ");

    scanf("%d", &chois);

    switch (chois)
    {
    case 1:
        // If you have used scanf or similar input before
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // clear buffer
        
        printf("    -add a book\n");
        printf("give the title of the new bok: ");
        fgets(titles[counter], sizeof(titles[counter]), stdin);
        printf("\n%s", titles[counter]);

        // scanf("%s", &trach );

        // printf("give the author of the new bok: ");
        // fgets( author[counter] , sizeof(author[counter]), stdin );
        // scanf("%s", &trach );

        // printf("1. %s \n2. %s \n3.t : %s",titles[counter] , author[counter], trach );

        break;
    case 2:
        printf("you chouse 2-------------------------------------------\n");
        break;
    case 3:
        printf("you chouse 3-------------------------------------------\n");
        break;
    case 4:
        printf("you chouse 4-------------------------------------------\n");
        break;
    case 5:
        scanf("you chouse 5-------------------------------------------\n");
        break;

    default:
        scanf("you chouse 5-------------------------------------------\n");
        break;
    }
}
