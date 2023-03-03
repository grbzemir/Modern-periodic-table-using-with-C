#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()

{

int n;
int m;
int a;
int exit;
int exi;

system("cls");
system("color 0a");

printf("Modern Periodic Tabloya hosgeldiniz\n\n");

printf("1- Tabloyu goruntulemek icin 1 e basiniz\n");
printf("2- Tablodan cikmak istiyorsaniz 2 e basiniz\n");

printf("Seciminizi giriniz: ");
scanf("%d",&n);

if(n==1)
{ 
 
   printf("elementi atom numarasina gore aramak icin 3'e basiniz\n");

  printf("seciminizi giriniz: \n");
    scanf("%d",&m);
 
   if(m==3)

{
    printf("elementin atom numarasini giriniz: ");
    scanf("%d",&a);

    if(a==1)
    {
        printf("adi: hidrojen\n");
        printf("sembol: H\n");
        printf("atom numarasi: 1\n");
        printf("atom agirligi: 1.00794\n");
        printf("grup: 1A\n");
        printf("periyot: 1\n");
        printf("elektron dizilimi: 1s1\n");

                printf("adi: helyum\n");
                printf("sembol: He\n");
                printf("atom numarasi: 2\n");
                printf("atom agirligi: 4.002602\n");
                printf("grup: 18A\n");
                printf("periyot: 1\n");
                printf("elektron dizilimi: 1s2\n");

                printf("adi : lit\n");
                printf("sembol: Li\n");
                printf("atom numarasi: 3\n");
                printf("atom agirligi: 6.941\n");
                printf("grup: 1A\n");
                printf("periyot: 2\n");
                printf("elektron dizilimi: 1s2 2s1\n");

    }

}

}

else if (n==2)
{
    printf("programdan cikmak ister misiniz (evet/hayir): ");
    printf("1 - evet icin 1'e basiniz\n");
    printf("2 -  hayir icin 2'e basiniz\n");


    printf("seciminizi giriniz: ");
    scanf("%d",&exit);


    if(exit==6)
    {
         printf("periodic tablodan cikmak istediginize emin misiniz: \n ");
         printf("1 - evet icin 3'e basiniz\n");
         printf("2 -  hayir icin 4'e basiniz\n");

            printf("seciminizi giriniz: ");
            scanf("%d",&exit);


            if(exit==4)

            {
                printf("periodic tablodan cikis yapildi");
            }

            else if(exi==5)
            {
                printf("periodic tablodan cikis yapilmadi");

                printf("arama istediginiz elementin atom numarasini giriniz: ");
                scanf("%d",&a);

                printf("adi: hidrojen\n");
                printf("sembol: H\n");
                printf("atom numarası: 1\n");
                printf("atom agirligi: 1.00794\n");
                printf("grup: 1A\n");
                printf("periyot: 1\n");
                printf("elektron dizilimi: 1s1\n");

                printf("adi: helyum\n");
                printf("sembol: He\n");
                printf("atom numarasi: 2\n");
                printf("atom agirligi: 4.002602\n");
                printf("grup: 18A\n");
                printf("periyot: 1\n");
                printf("elektron dizilimi: 1s2\n");
                
                printf("adi : lit\n");
                printf("sembol: Li\n");
                printf("atom numarasi: 3\n");
                printf("atom agirligi: 6.941\n");
                printf("grup: 1A\n");
                printf("periyot: 2\n");
                printf("elektron dizilimi: 1s2 2s1\n");



            }
    }
} 




    return 0;
}