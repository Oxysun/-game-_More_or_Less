#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    /* Choix du mode de jeu */

    int modeJeu = 0;

    while((modeJeu != 1) || (modeJeu != 2))
    {
        printf("== LE NOMBRE MYSTERE == \n\n");
        printf("Choisissez votre mode de jeu\n");
        printf("1 joueur - tapez 1\n");
        printf("2 joueurs - tapez 2\n");
        scanf("%d", &modeJeu);
        printf("\n\n");

        // Choix du niveau de difficult�s

        int difficulte = 0;

        printf("-- Choissiez le niveau de difficult� --");
        printf("1 - FACILE | Nombre entre 1 et 10");
        printf("2 - MOYEN | Nombre entre 1 et 100");
        printf("3 - DIFFICILE | Nombre entre 1 et 1000");
        scanf("%d", difficulte);
        printf("/n/n)");
    }

    // MODE 1 JOUEUR

    if(modeJeu = 1)
    {
    // Le nombre � trouver sera compris entre 1 et 100. Facile !
    int MAX = 100, MIN = 1, nombreMystere = 0;
    int compteur = 0, compteurTotal = 0, rejouer = 1, compteurPartie = 1;

    /* Boucle pour savoir si l'utilisateur veut rejouer */
    while(rejouer)
    {

    //  programme g�n�re un nombre al�atoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    //Pr�sentation du jeu

    printf("== LE NOMBRE MYSTERE == \n");
    printf("Partie %d\n\n", compteurPartie);
    printf("J'ai choisi un nombre entre 1 et 100.\n");
    printf("Arriveras-tu a le deviner ?\n\n");
    printf("A toi de jouer !\n");

    // R�initialisation du compteur de la partie en cours

    compteur = 0;

    int nombreDuJoueur = 0;
    scanf("%d", &nombreDuJoueur);
    compteur++, compteurTotal++;

    /* Boucle qui se r�p�te tant que le joueur n'a pas trouv� le bon nombre */

    while(nombreDuJoueur != nombreMystere)
    {
        if(nombreDuJoueur < nombreMystere)
        {
            printf("C'est plus (+)\n");
            scanf("%d", &nombreDuJoueur);
            compteur++, compteurTotal++;
        }
        else if(nombreDuJoueur > nombreMystere)
        {
            printf("C'est moins (-)\n");
            scanf("%d", &nombreDuJoueur);
            compteur++, compteurTotal++;
        }
        else if(nombreDuJoueur > nombreMystere)
        {
            compteur++, compteurTotal++;
        }
    }

    /* La solution est trouv�e. Un message diff�rent s'affiche en fonction du nombre de tentative qui ont �t� n�cessaire */

    printf("\nC'est exact. Le nombre que j'ai choisi est bien %d.\n", nombreMystere);
    switch(compteur)
    {
        case 1:
            printf("Tu l'as trouve en %d essai. Tu lis dans mes pensees ?!", compteur);
            break;
        case 2:
            printf("Tu l'as trouve en %d essais. Difficile de faire mieux !", compteur);
            break;
        case 3:
            printf("Tu l'as trouve en %d essais. Difficile de faire mieux !", compteur);
            break;
        case 4:
            printf("Tu l'as trouve en %d essais. Tu es tres bon a ce jeu !", compteur);
            break;
        case 5:
            printf("Tu l'as trouve en %d essais. Tu es tres bon a ce jeu !", compteur);
            break;
        case 6:
            printf("Tu l'as trouve en %d essais. Tu es tres bon a ce jeu !", compteur);
            break;
        case 7:
            printf("Tu l'as trouve en %d essais. Pas mal !", compteur);
            break;
        case 8:
            printf("Tu l'as trouve en %d essais. Pas mal !", compteur);
            break;
        case 9:
            printf("Tu l'as trouve en %d essais. Pas mal !", compteur);
            break;
        default:
            printf("Tu l'as trouve en %d essais. Je suis sur que tu peux faire mieux !", compteur);
            break;
        }

    // ON RECOMMENCE LE JEU ?
    // !!!!!!! Proposez de passer au mode 2 joueurs ?
    printf("\n\n");
    printf("Est-ce que tu veux rejouer ?\n");
    printf("OUI -> tape 1\n");
    printf("NON -> tape 0\n");
    printf("MODE 2 JOUEURS -> tape 2");
    scanf("%d", &rejouer);

    // Afficher PARTIE ou PARTIE(S). J'ai le soucis du d�tail !
    if(rejouer == 1)
    {
        printf("\n\n");
        compteurPartie++;
    }
    else if(rejouer == 2)
    {

    }
    else
    {
        if(compteurPartie == 1) // Permet afficher un "s" � partie... Du d�tail !
        {
            printf("\n\nNombre de partie : %d\n", compteurPartie);
        }
        else
        {
            printf("\n\nNombre de partie(s) : %d\n", compteurPartie);
        }
        printf("Tentatives totales : %d", compteurTotal);
    }

    // Fin de la boucle pour REJOUER
        }
    }
    // MODE 2 JOUEURS

    else if(modeJeu = 2)
    {
        printf("En construction.\n");
    }


    // FIN DU PROGRAMME
    printf("\n\n---- Jeu code par DrSohmon ----\n");

    // Code pour �viter que la console ne se ferme � la fin du programme

    while(getchar() != '\n');getchar();
    return 0;
}
