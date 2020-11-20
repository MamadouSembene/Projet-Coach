#include<stdio.h>
void tableauTrier(){

    int i,j,nombreAsaisir,tailleTab;
    int tab[50];
    int positif=0,negatif=0;
    char c;
     printf("saisir la taille du tableau\n");
do
{
     if(((scanf("%d",&tailleTab) ==1) || (c=getchar() != '\n' && c!=EOF)) && (tailleTab >=2 && tailleTab <=50)){
         for (i = 0; i < tailleTab; i++)
         {
             do
             {
                 printf("Saisissez la valeur du tableau %d \n",i);
             } while ((scanf("%d",&nombreAsaisir) !=1) && (c=getchar() !='\n' && c != EOF));
             tab[i] = nombreAsaisir;
         }
         
         for (i = 0; i < tailleTab; i++)
         {
             
             printf("tab[%d]=%d\n",i,tab[i]);
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
    printf("les nouveaux  elements du tableau:\n");
    //do{ 
    for(i=0;i<j;++i){
        printf("%d",tab[i]);
        printf("\n");
    } 
 printf("Le tableau inversé est: \n");
    for (i = tailleTab -1; i >= 0; i--)  {
        printf("tab[%d] = %d\n", i,tab[i]);  

        if(tab[i] > 0){
            positif++;
   	        
		}
		else if(tab[i]<0) { 
			negatif++;
		}
         
	 }
   		printf("Le nombre de valeurs positives est : %d\n", positif);
		printf("Le nombre de valeurs negatives est : %d\n", negatif);   

 }
     else
     {
         printf("Saisissez un entier {2;50}! \n");
     }
     
   } while(tailleTab < 2 || tailleTab > 50);
    }

