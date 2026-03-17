#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int cevap=rand()%100+1;
    int soru=0;
    int deneme=0;
    while(cevap!=soru){
        system("clear");
        printf("Sayı Tahmin Oyunu \n");
        printf("1-100 arasında bir sayı. \n");
        printf("\nDeneme sayısı: %d \n",deneme);
        deneme++;
        scanf("%d",&soru);
        if(cevap==soru){
            printf("Tebrikler, doğru bildin. \n");
            }else{
                printf("Yanlış, tekrar dene. \n");
                }
        while(getchar()!='\n');
        getchar();
        }
        return 0;
    }