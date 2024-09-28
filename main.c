#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int choix ,n_addition, soustraction1, soustraction2 ;
    float multiplication1 ,multiplication2 ,division1 ,division2;
    printf("1.Addition : Ajouter deux ou plusieurs nombres.");
{
   printf("\n2.Soustraction : Soustraire deux nombres.");
   printf("\n3.Multiplication : Multiplier deux ou plusieurs nombres.");
  printf("\n4.Division : Diviser deux nombres, avec gestion de la division par zeo.");
  printf("\n5..Moyenne : Calculer la moyenne d une serie de nombres.");
  printf("\n6.Valeur absolue : Calculer la valeur absolue dun nombre.");
  printf("\n7.Exponentiation : Calculer un nombre à une certaine puissance.");
  printf("\n8.Racine carrée : Calculer la racine carrée d un nombre positif.\n\n");
  printf("donnez moi le numéro de l'operation:");
scanf("%d" ,&choix);
switch(choix){

    case 1:{
    printf("Entrer le nombre des valeur que tu vas ajouter: \n");
    scanf("%d" ,&n_addition);
    int t[n_addition];

     for(int i=1;i<=n_addition;i++){
        printf("donner moi nombre ");
        scanf("%d",&t[i]);

                      }

                      int somme=0;
                      for(int i=1;i<=n_addition;i++){
        somme+=t[i];
                      }
                      printf("%d",somme);

                      break;
    }
    case 2:{

    printf("Entrer la premier valeur: \n ");
        scanf("%f",&soustraction1);
        printf("Entrer la deuxiéme valeur: \n ");
        scanf("%f" ,&soustraction2);
        float so;
        so=soustraction1 - soustraction2;
        printf("%f",so);
        break;
    }
 case 3:{

    printf("Entrer la premier valeur: \n ");
        scanf("%f",&multiplication1);
        printf("Entrer la deuxiéme valeur: \n ");
        scanf("%f" ,&multiplication2);
 float so1;
        so1=multiplication1 * multiplication2;
        printf("%.2f",so1);
        break;
 case 4:
     printf("Entrer la premier valeur: \n ");
        scanf("%f",&division1);
        printf("Entrer la deuxiéme valeur: \n ");
        scanf("%f" ,&division2);
 float so2;
        so2=division1 / division2;
        printf("%.2f",so2);
        break;
 case 5: float moy,
    printf("donnez moi le nombre d'entiers dans la serie : ");
    scanf("%d", moy);
     float T[moy], somme = 0;
            for (int i = 0; i < moy; i++) {
                printf("Donnez-moi le %d entier : ", i + 1);
                scanf("%f", &T[i]);
                somme += T[i];
            }

            float Moyenne = somme / moy;
            printf("La moyenne de votre serie de nombres est : %.2f\n\n", Moyenne);
            break;
        }

        case 5: {
            int nombre;
            printf("\t\tBienvenue dans le calcul de la valeur absolue d'un nombre\n\n");
            printf("Donnez-moi un entier : ");
            scanf("%d", &nombre);

            printf("La valeur absolue de %d est : %d\n\n", nombre, abs(nombre));
            break;
        }

        case 6: {
            double base, exp;
            printf("\t\tBienvenue dans le calcul de l'exponentiation\n\n");
            printf("Donnez-moi la base : ");
            scanf("%lf", &base);
            printf("Donnez-moi l'exposant : ");
            scanf("%lf", &exp);

            printf("%.2lf eleve a la puissance %.2lf est : %.2lf\n\n", base, exp, pow(base, exp));
            break;
        }

        case 7: {
            double nombre;
            printf("\t\tBienvenue dans le calcul de la racine carrée\n\n");
            printf("Donnez-moi un nombre positif : ");
            scanf("%lf", &nombre);

            if (nombre < 0) {
                printf("Erreur : la racine carree d'un nombre negatif n'est pas definie.\n\n");
            } else {
                printf("La racine carree de %.2lf est : %.2lf\n\n", nombre, sqrt(nombre));
            }
            break;
        }

        default:
            printf("Option non valide.\n");
            break;
    }

    int choix;
        printf("Souhaitez-vous :\n");
        printf("1: Revenir au menu principal\n");
        printf("2: Quitter le programme\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) goto e;
        else printf("Vous etes quitter le programme !!!");


}
    }
}
}
