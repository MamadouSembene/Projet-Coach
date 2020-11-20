#include<stdio.h>
void tableauTrier(){

    int i,j,nombreAsaisir,tailleTab;
    int tab[50];
    char c;
     printf("saisir la taille du tableau\n");
do
{
     if(((scanf("%d",&tailleTab) ==1) || (c=getchar() != '\n' && c!=EOF)) && (tailleTab >=2 && tailleTab <=50)){
         for (i = 0; i < tailleTab; i++)
         {
             do
             {
                 printf("saisir element %d \n",i);
             } while ((scanf("%d",&nombreAsaisir) !=1) && (c=getchar() !='\n' && c != EOF));
             tab[i] = nombreAsaisir;
         }
         
         for (i = 0; i < tailleTab; i++)
         {
             printf("%d \t",tab[i]);
         }

   for(i=0,j=0; i<tailleTab;++i){
        tab[j]=tab[i]; 
        if (tab[i]!=0)
        { 
            j++;
        }
     } 
     tailleTab=j;    
       printf("\n");
    printf("les nouveaux  elements du tabaleau:\n");
    //do{ 
    for(i=0;i<j;++i){
        printf("%d",tab[i]);
        printf("\n");
    } 
         
     }
     else
     {
         printf("Saisissez un entier compris entre 2 et 50 \n");
     }
     
   } while(tailleTab < 2 || tailleTab > 50);

}