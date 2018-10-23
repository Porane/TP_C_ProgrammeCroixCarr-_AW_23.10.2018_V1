#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nChoix = 0;

    printf("Bonjour, tapez 1 pour afficher une croix, et 2 pour un carre\n");
    scanf("%i", &nChoix);

    if(nChoix == 1)
    {
        //Déclaration des variables
        char cCarChoisi;
        int nTaille = 0;
        int nX = 0;
        int nY = 0;

        //Choix des options
        fflush(stdin);
        printf("Choisissez un caractere : \n");
        scanf("%c", &cCarChoisi);
        printf("Votre caractere choisi est : %c\nChoisissez une taille : \n", cCarChoisi);
        scanf("%i", &nTaille);

        //Execution de la croix
        for(nX = 1; nX <= nTaille ; nX++)
        {
            for(nY = 1; nY <= nTaille ; nY++)
            {
                if((nY == nX) || ((nY-1) == (nTaille-nX)))
                {
                    printf("%c", cCarChoisi);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    else if (nChoix == 2)
    {
        //Déclaration des variables
        char cCarBordure;
        char cCarInterieur;
        int tailleCarre;
        int nX2=0;
        int nY2=0;

        //Choix de options
        fflush(stdin);
        printf("Caracteres en bordure :\n");
        scanf("%c",&cCarBordure);

        fflush(stdin);
        printf("Caracteres interieurs :\n");
        scanf("%c",&cCarInterieur);

        printf("Et la taille : \n");
        scanf("%d",&tailleCarre);

        //Execution du carre
        for(nX2=1; nX2<=tailleCarre; nX2++)
        {
            printf("%c ",cCarBordure);
        }
        printf("\n");

        for(nX2=1; nX2<=tailleCarre-2; nX2++)
        {
            printf("%c ",cCarBordure);
            for(nY2=1; nY2<=tailleCarre-2; nY2++)
            {
                printf("%c ",cCarInterieur);
            }
            printf("%c ",cCarBordure);
            printf("\n");
        }

        nX2=1;

        for(nX2=1; nX2<=tailleCarre; nX2++)
        {
            printf("%c ",cCarBordure);
        }
    }
    else
    {
        printf("Vous etes un monstre !");
    }


    return 0;
}
