
#include <stdio>

int main () {

    //DECLARATION DE TABLEAU QUI SE COMPOSE DE 4 TABLEAU SEPARER

    char auteur[255][255] , titre[255][255] ;
    int  prix[255] , quantite[255] , choix , books_counter ;



    //MENU
    
    printf("+---------------------------------------------------------------+\n") ;
    printf("|1.ajouter un livre                                             |\n") ;
    printf("|2.modifier la quantite d'un livre                              |\n") ;
    printf("|3.supprimer un livre                                           |\n") ;
    printf("|4.afficher le stock                                            |\n") ;
    printf("|5.recherch par un livre                                        |\n") ;
    printf("|6.aficher le nembre totale des livres                          |\n") ;
    printf("+---------------------------------------------------------------+\n") ;

    printf("ton choix : ") ;
    scanf("%d" , &shoix ) ;

    switch(choix){
        case 1 :
            printf("+---------------------------------------------------------------+\n");
            printf("|1.ajouter un livre                                             |\n");
            printf("+---------------------------------------------------------------+\n"); 

            //LOOP THAT CLEAN THE BAFFER
            // int c
            //while((c = charfetch()) && c != ...) ...

            printf("siser le titre ici : ") ;
            fgets(titre[books_counter] , syzeOf(titre[books_counter]) , stdin) ;

            printf("siser le nom d'auteur ici : ") ;
            fgets(auteur[books_counter] , syzeOf(auteur[books_counter]) , stdin) ;
            
            printf("siser le prix de livre ici : ") ;
            scanf("%d" , &prix[books_counter]);

            printf("siser la quantite ici : ") ;
            scanf("%d" , &quantite[books_counter]);

            printf("+---------------------------------------------------------------+\n");
            printf("|livre a ete ajouter avec success                               |\n");
            printf("+---------------------------------------------------------------+\n"); 

            break ;

        case 2 :
            printf("+---------------------------------------------------------------+\n");
            printf("|2.modifier la quantite d'un livre                              |\n");
            printf("+---------------------------------------------------------------+\n"); 

            char titre_de_recherch[255] ;
            //LOOP THAT CLEAN THE BAFFER
            // int c
            //while((c = charfetch()) && c != ...) ...

            printf("donne le titre de livre qui vous voulez mettre a joure : ") ;
            fgets(titre_de_recherch , syzeOf(titre_de_recherch) , stdin) ;

            for (int i = 0 ; i < books_counter ; i++){
                if (titre_de_recherch == titre[i] ){
                    printf("donne la nouvelle quantite de ce livre : ") ;
                    scanf("%d" , &quantite[i]);

                    printf("+---------------------------------------------------------------+\n");
                    printf("|la quantite de livre a ete mise a jour avec success            |\n");
                    printf("+---------------------------------------------------------------+\n"); 

                    break ;
                }else if(i + 1 == books_counter ){
                    printf("+---------------------------------------------------------------+\n");
                    printf("|le livre n'est pas trouver                                     |\n");
                    printf("+---------------------------------------------------------------+\n"); 
                    break ;
                }
            }

            break ;

        case 3 :
            printf("+---------------------------------------------------------------+\n");
            printf("|3.supprimer un livre                                           |\n");
            printf("+---------------------------------------------------------------+\n"); 
            char titre_de_recherch[255] ;

            //LOOP THAT CLEAN THE BAFFER
            // int c
            //while((c = charfetch()) && c != ...) ...

            printf("donne le titre de livre qui vous voulez supprimer : ") ;
            fgets(titre_de_recherch , syzeOf(titre_de_recherch) , stdin) ;

            for (int i = 0 ; i < books_counter ; i++){
                if (titre_de_recherch == titre[i] ){
                    printf("la supprition en coure ... ") ;
                    for(int j = i ; j < books_counter ; j++  ){
                            auteur[j]   = auteur[j+1];
                            titre[j]    = titre[j+1];
                            prix[j]     = prix[j+1];
                            quantite[j] = quantite[j+1];
                    }
                    printf("+---------------------------------------------------------------+\n");
                    printf("|le livre a ete supprimer avec success                          |\n");
                    printf("+---------------------------------------------------------------+\n"); 
                    break ;

                }else if(i + 1 == books_counter ){
                    printf("+---------------------------------------------------------------+\n");
                    printf("|le livre n'est pas trouver                                     |\n");
                    printf("+---------------------------------------------------------------+\n"); 


                    break ;
                }
            }
            break ;
        case 4 :
            printf("+---------------------------------------------------------------+\n");
            printf("|4.afficher le stock                                            |\n");
            printf("+---------------------------------------------------------------+\n"); 
            
            printf("LIST DES LIVRES DISPONIBLE -------------------------------------+\n") ;          
            for(int i = 0 ; i < books_counter ; i ++ ){

                printf("|titre             : %s                             |\n" , titre[i]) ;
                printf("|auteur            : %s                             |\n" , auteur[i]) ;
                printf("|quantite restent  : %d                             |\n" , quantite[i]) ;
                printf("|prix de livre     : %d                             |\n" , prix[i]) ;
                printf("+---------------------------------------------------------------+\n") ;
            }

            break ;
        case 5 :
            printf("+---------------------------------------------------------------+\n");
            printf("|5.recherch par un livre                                        |\n") ;
            printf("+---------------------------------------------------------------+\n"); 
            
            char titre_de_recherch[255] ;

            //LOOP THAT CLEAN THE BAFFER
            // int c
            //while((c = charfetch()) && c != ...) ...

            printf("donne le titre de livre qui vous voulez trouver a joure : ") ;
            fgets(titre_de_recherch , syzeOf(titre_de_recherch) , stdin) ;

            for (int i = 0 ; i < books_counter ; i++){
                if (titre_de_recherch == titre[i] ){

                    printf("+---------------------------------------------------------------+\n") ;
                    printf("|titre             : %s                                         |\n" , titre[i]) ;
                    printf("|auteur            : %s                                         |\n" , auteur[i]) ;
                    printf("|quantite restent  : %d                                         |\n" , quantite[i]) ;
                    printf("|prix de livre     : %d                                         |\n" , prix[i]) ;
                    printf("+---------------------------------------------------------------+\n") ;
                    break ;
                    
                }else if(i + 1 == books_counter ){

                    printf("+---------------------------------------------------------------+\n") ;
                    printf("|le livre n'est pas trouver                                     |\n");
                    printf("+---------------------------------------------------------------+\n") ;
                    break ;
                }
            }
            break ;
            
            case 6 :
            printf("+---------------------------------------------------------------+\n") ;
            printf("|le nembre totale de tous les livres restant est : %d           |\n" , books_counter );
            printf("+---------------------------------------------------------------+\n") ;
    }

}