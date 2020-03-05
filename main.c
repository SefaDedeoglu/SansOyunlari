#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
// Sefa DEDEOÐLU 172802051 || Muhammed KADIOÐLU 172803032
// Ýstatislerde yapamadýklarýmýz var hocam :) affýnýza
int main (void)
{
    int sansoyunlari, cikis, cekilisist, secim, alts,istalts,osm,oyna,don,cik,toplampuan=0,x;
    int istatiksayisal[49]={0};
    int istatiksanstop[34]={0};
    int istatiksanstop2[14]={0};
    int istatikonnumar[80]={0};
    int istatiksuperlo[54]={0};
    menu:
    printf("\t\t***ANA MENU ***\n");
    printf("\t\t\t 1. SANS OYUNLARI \n");
    printf("\t \t \t 2. CEKILIS ISTATISTIKLERI \n");
    printf("\t\t\t 3. CIKIS \n");
    printf("Toplam puaniniz: %d\n\n ",toplampuan);
    printf("-->");
    scanf("%d",&secim);
    while(secim<1 || secim>3){
            printf("Lutfen gecerli bir deger giriniz !\n");
               printf("-->");
               scanf("%d",&secim);
    }
    switch(secim){
        case 1 :
                 altsmenu:
                 printf("\t \t**SANS OYUNLARI\n");
                 printf("\t\t\t 1.Sayisal loto oynama\n");
                 printf("\t\t\t 2.Sans topu oynama \n");
                 printf("\t\t\t 3.On numara oynama \n");
                 printf("\t\t\t 4.Super loto oynama\n");
                 printf("\t\t\t 5.ANA MENU\n");
                 printf("-->");
                 scanf("%d",&alts);
                 while(alts<1 || alts>5){
                     printf("Lutfen gecerli bir deger giriniz !\n");
                         printf("-->");
                         scanf("%d",&alts);
                 }
         switch(alts){
             case 1 :
             {
                int i, j,sayi[6], sonuc[6], rasgele[6], puan=0, dogru=0,osa;
                char secim;
                sayisal:
                printf("Sayisal Loto Oyunana Hosgeldiniz\n");
                for(i=0;i<6;i++){
                    printf("Lutfen %d. sayiyi giriniz :",i+1);
                       scanf("%d",&sayi[i]);
                abcd:
                if(i>0){ //kullanici ayni sayiyi girdiginde yeniden bir sayi girmesi istendi
                    for(j=i-1;j>-1;j--){
                        for( ; ; ){
                            if(sayi[i]== sayi[j]){
                                printf("Onceden girdiginiz bir deger girdiniz lutfen giriniz :\n");
                                    scanf("%d",&sayi[i]);
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
                    while(sayi[i]>49 ||sayi[i]<1){ // kullanicinin belirtilen araklik disinda bir deger girmesi halinde uyari verildi
                       printf("Lutfen 1-49 araliginda bir deger giriniz !! : \n");
                          scanf("%d",&sayi[i]);
                            goto abcd;
                    }
                }
                for(i=0;i<6;i++){
                int j;
                    for(j=0;j<5;j++){
                        if(sayi[j] > sayi[j+1]){
                            int gecici; // Seçtiðimiz Sayýlar Küçükten Büyüðe Sýralandý.
                                gecici = sayi[j];
                                sayi[j] = sayi[j+1];
                                sayi[j+1] = gecici;
                        }
                    }
                }
                srand(time(NULL));
                printf("Girisler : ");
                for(i=0;i<6;i++){
                    rasgele[i]=1+rand()%49;
                    sonuc[i]=rasgele[i];
                    printf(" %d  ",sayi[i]);
                    for(x=-1;x<i;x++)
{
                if (sonuc[i]==sonuc[x])
    {
                rasgele[i]=1+rand()%49;
                sonuc[i]=rasgele[i];
        }
}
                }
                for(i=0;i<6;i++){
                    osa=rasgele[i];
                    istatiksayisal[osa-1]=istatiksayisal[osa-1]+1;
                }
                for(i=0;i<6;i++){
                int j;
                    for(j=0;j<5;j++){
                        if(sonuc[j] > sonuc[j+1]){
                            int gecici; // Rastgele Secilen Sayýlar Küçükten Büyüðe Sýralandý.
                                gecici = sonuc[j];
                                   sonuc[j] = sonuc[j+1];
                                      sonuc[j+1] = gecici;
                        }
                    }
                }
                printf("\n");
                    printf("Sonuclar : ");

                for(i=0;i<6;i++){
                    printf(" %d ",sonuc[i]);
                }
                for(i=0;i<6;i++){
                    for(j=0;j<6;j++){
                        if(sonuc[i] == sayi[j])
                            dogru++;// dogru sayisi
                    }
                }
                switch(dogru){ // puanlama sistemi
                    case 1 :
                        break;
                    case 2 :
                        break;
                    case 3 : puan=32;
                        break;
                    case 4 : puan=64;
                        break;
                    case 5: puan=128;
                        break;
                    case 6: puan=256;
                }
                printf("\n");
                printf("Dogru sayiniz : %d \n",dogru);
                printf("Bu oyundan kazandiniz puaniniz : %d\n",puan);
                  toplampuan=toplampuan+puan;

                oyunmenu:
                     printf("\n\t**Oyun Sonu Menusu**\n");
                     printf("\t  1. Oyunu Tekrar Oyna  \n");
                     printf("\t  2. Menuye Don         \n");
                     printf("\t  3. Cikis              \n");
                      printf("Toplam puaniniz: %d\n\n ",toplampuan);
                     printf("-->");
                     scanf("%d",&osm);
                     imam:
                     while(osm<1 || osm>3){
                        printf("Lutfen Gecerli Bir Deger Giriniz !! \n");
                        printf("-->");
                        scanf("%d",&osm);
                        goto imam;
                     }

	            if(osm==1){
                   printf("\tOyunu tekrar oynamak istediginize emin misiniz ?\n");
                   printf("\t1. EVET\n");
                   printf("\t2. HAYIR\n");
                   printf("-->");
                   scanf("%d",&oyna);
                tirt:
                if (oyna==1){
                   goto sayisal;
                }
                else if (oyna==2){
                    printf("Demek oyun oynamak istemiyosunuz sizi oyun sonu menusune geri alalim :) \n");
                       goto oyunmenu;
                }
                else{
                    while (oyna<1|| oyna>2){
                       printf("Lutfen gecerli bir deger giriniz !!\n");
                          printf("-->");
                          scanf("%d",&oyna);
                             goto tirt;
                   }
	            }
	            }
	            else if(osm==2){
                    printf("\tMenuye donmek istediginize emin misiniz ?\n");
                    printf("\t1. EVET\n");
                    printf("\t2. HAYIR\n");
                    printf("-->");
                    scanf("%d",&don);
                sirt:
                if (don==1){
                    goto altsmenu;
                }
                else if (don==2){
                    printf("Galiba kafaniz karisti oyun sonu menusune geri gidin bi bakalim :) \n");
                        goto oyunmenu;
                }
                else{
                    while (don<1|| don>2){
                        printf("Lutfen gecerli bir deger giriniz !!\n");
                            printf("-->");
                            scanf("%d",&don);
                                goto sirt;
                    }
                }
	            }
                else if	(osm==3){
                    printf("\tCikmak istediginize emin misiniz ?\n");
                        printf("\t1. EVET\n");
                            printf("\t2. HAYIR\n");
                                printf("-->");
                                scanf("%d",&cik);
                pirt:
                if (cik==1){
                    goto aan;
                }
                else if(cik==2){
                    printf("Akliniz oyunda kaldi demek :) \n");
                        goto oyunmenu;
                }
                else {
                    while (cik<1|| cik>2){
                        printf("Lutfen gecerli bir deger giriniz !!\n");
                            printf("-->");
                            scanf("%d",&cik);
                                goto pirt;
                    }
    	        }
                }

             }

             break;
             case 2:
             {
             sans:
                 printf("Sans Topu\n");
             int i, j, sayi[5], sonuc[5], sayix, sonucx, puan=0,rastgelex ,rastgele[5], dogru=0,dogrux=0,osa2,osa3;
             for(i=0;i<5;i++){
                printf("Lutfen %d. sayiyi giriniz :",i+1);
                    scanf("%d",&sayi[i]);
             a:
             if(i>0){
                for(j=i-1;j>-1;j--){
                    for( ; ; ){
                        if(sayi[i]== sayi[j]){
                            printf("Onceden girdiginiz bir deger girdiniz lutfen giriniz :\n");
                                scanf("%d",&sayi[i]);
                        }
                        else {
                           break;
                        }
                    }
                }
             }
             while(sayi[i]>34 ||sayi[i]<1){
                printf("Lutfen 1-34 araliginda bir deger giriniz !! : \n");
                   scanf("%d",&sayi[i]);
             goto a;
             }
             }
             printf("lutfen 1 ile 14 arasinda 1 sayi giriniz : \n");
                scanf("%d",&sayix);
             while(sayix>14 ||sayix<1){
                 printf("Lutfen 1-14 araliginda bir deger giriniz !! : \n");
                    scanf("%d",&sayix);
             }
             for(i=0;i<5;i++){
             int j;
                 for(j=0;j<4;j++){
                    if(sayi[j] > sayi[j+1]){
                       int gecici; // Seçti?imiz Say?lar Küçükten Büyü?e S?raland?
                           gecici = sayi[j];
                           sayi[j] = sayi[j+1];
                           sayi[j+1] = gecici;
                    }
                 }
              }
              srand(time(NULL));
              printf("Girisler  : ");
              for(i=0;i<5;i++){
                 rastgele[i]=1+rand()%34;
                 sonuc[i]=rastgele[i];
                  printf(" %d  ",sayi[i]);
                  for(x=-1;x<i;x++)
{
                    if (sonuc[i]==sonuc[x])
    {
                    rastgele[i]=1+rand()%34;
                    sonuc[i]=rastgele[i];
    }
}
              }
              for(i=0;i<5;i++){
                    osa2=rastgele[i];
                    istatiksanstop[osa2-1]=istatiksanstop[osa2-1]+1;
                }
              rastgelex=1+rand()%14;
              sonucx=rastgelex;
              printf("  ++ %d ",sayix);
              osa3=rastgelex;
              istatiksanstop2[osa3-1]=istatiksanstop2[osa3-1]+1;
              for(i=0;i<5;i++){
                 int j ;
                    for(j=0;j<4;j++){
                       if(sonuc[j] > sonuc[j+1]){
                          int gecici;
                          gecici = sonuc[j];
                          sonuc[j] = sonuc[j+1];
                          sonuc[j+1] = gecici;
                       }
                    }
               }
               printf("\n");
               printf("Sonuclar  : ");
               for(i=0;i<5;i++){
                  printf(" %d ",sonuc[i]);
               }
               printf("  ++  %d ",sonucx);
               printf("\n");
               for(i=0;i<5;i++){
                  for(j=0;j<5;j++){
                     if(sonuc[i]==sayi[j]){
                        dogru++;
                     }
                  }
               }
               toplampuan=toplampuan+puan;
               if(sonucx==sayix){
                     dogrux=1;
               }
               else{
                     dogrux=0;
               }
               switch(dogru){
                  case 1 :
                     if(dogrux==1){
                        puan=2;
                     }
                     else{
                        puan=0;
                     }
                     break;
                  case 2 :
                     if(dogrux==1){
                        puan=4;
                     }
                     else{
                        puan=0;
                     }
                     break;
                  case 3 :
                     if(dogrux==1){
                        puan=16;
                     }
                     else{
                        puan=8;
                     }
                     break;
                  case 4 :
                     if(dogrux==1){
                        puan=64;
                     }
                     else{
                        puan=32;
                     }
                     break;
                  case 5 :
                     if(dogrux==1){
                        puan=256;
                     }
                     else{
                        puan=128;
                     }
                     break;
              }
              printf("Dogru sayiniz: %d ",dogru);
                 printf("+%d\n",dogrux);
                     printf("Puaniniz : %d \n",puan);
toplampuan=puan+toplampuan;
              oyunmenu2:
                 printf("\n\t**Oyun Sonu Menusu**\n");
                 printf("\t  1. Oyunu Tekrar Oyna  \n");
                 printf("\t  2. Menuye Don         \n");
                 printf("\t  3. Cikis              \n");
                  printf("Toplam puaniniz: %d\n\n ",toplampuan);
                 printf("-->");
                 scanf("%d",&osm);
              imam2:
              while(osm<1 || osm>3){
                    printf("Lutfen Gecerli Bir Deger Giriniz !! \n");
                        printf("-->");
                        scanf("%d",&osm);
                            goto imam2;
              }
              if(osm==1){
                    printf("\tOyunu tekrar oynamak istediginize emin misiniz ?\n");
                    printf("\t1. EVET\n");
                    printf("\t2. HAYIR\n");
                    printf("-->");
                    scanf("%d",&oyna);
              tirt2:
                   if (oyna==1){
                       goto sans;
                   }
                   else if (oyna==2){
                       printf("Demek oyun oynamak istemiyosunuz sizi oyun sonu menusune geri alalim :) \n");
                          goto oyunmenu2;
                   }
                   else{
                       while (oyna<1|| oyna>2){
                          printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&oyna);
                                goto tirt2;
                       }
	               }
	               }
	               else if(osm==2){
                       printf("\tMenuye donmek istediginize emin misiniz ?\n");
                      printf("\t1. EVET\n");
                      printf("\t2. HAYIR\n");
                      printf("-->");
                      scanf("%d",&don);
                  sirt2:
                  if (don==1){
                      goto altsmenu;
                  }
                  else if (don==2){
                      printf("Galiba kafaniz karisti oyun sonu menusune geri gidin bi bakalim :) \n");
                          goto oyunmenu2;
                  }
                  else{
                      while (don<1|| don>2){
                         printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&don);
                                 goto sirt2;
                     }
                 }
	             }
                 else if	(osm==3){
                     printf("\tCikmak istediginize emin misiniz ?\n");
                         printf("\t1. EVET\n");
                             printf("\t2. HAYIR\n");
                                 printf("-->");
                                 scanf("%d",&cik);
                 pirt2:
                 if (cik==1){
                    goto aan;
                 }
                 else if(cik==2){
                     printf("Akliniz oyunda kaldi demek :) \n");
                         goto oyunmenu2;
                 }
                 else {
                     while (cik<1|| cik>2){
                         printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&cik);
                                 goto pirt2;
                     }
    	         }
                 }
              }
              break;
              case 3:
              {
                  on:
                printf("On Numara\n");

              int a,i, j, sayi[10], sonuc[22], rasgele[22], puan=0, dogru=0,osa4;
              for(i=0;i<10;i++){
                 printf("Lutfen %d. sayiyi giriniz :",i+1);
                    scanf("%d",&sayi[i]);
              asd:
              if(i>0){ //kullanici ayni sayiyi girdiginde yeniden bir sayi girmesi istendi
                for(j=i-1;j>-1;j--){
                   for( ; ; ){
                      if(sayi[i]== sayi[j]){
                         printf("Onceden girdiginiz bir deger girdiniz lutfen giriniz :\n");
                            scanf("%d",&sayi[i]);
                      }
                      else{
                         break;
                      }
                   }
                }
             }
             while(sayi[i]>80 ||sayi[i]<1){ // kullanicinin belirtilen araklik disinda bir deger girmesi halinde uyari verildi
                printf("Lutfen 1-80 araliginda bir deger giriniz !! : \n");
                   scanf("%d",&sayi[i]);
                      goto asd;
             }
             }
             for(i=0;i<10;i++){
             int j;
                for(j=0;j<9;j++){
                   if(sayi[j] > sayi[j+1]){
                      int gecici; // Seçti?imiz Say?lar Küçükten Büyü?e S?raland?.
                          gecici = sayi[j];
                          sayi[j] = sayi[j+1];
                          sayi[j+1] = gecici;

                   }
                }
             }
             srand(time(NULL));
             printf("Girisler :  ");
             for(i=0;i<22;i++){
                 rasgele[i]=1+rand()%80;
                     sonuc[i]=rasgele[i];
                    for(x=-1;x<i;x++)
{
                    if (sonuc[i]==sonuc[x])
    {
                    rasgele[i]=1+rand()%80;
                    sonuc[i]=rasgele[i];
    }
}
             }
             for(i=0;i<22;i++){
                    osa4=rasgele[i];
                    istatikonnumar[osa4-1]=istatikonnumar[osa4-1]+1;
                }
             for(i=0;i<10;i++){
                 printf(" %d  ",sayi[i]);
             }
             for(i=0;i<22;i++){
             int j;
                 for(j=0;j<21;j++){
                    if(sonuc[j] > sonuc[j+1]){
                       int gecici; // Rastgele Secilen Say?lar Küçükten Büyü?e S?raland?.
                           gecici = sonuc[j];
                           sonuc[j] = sonuc[j+1];
                           sonuc[j+1] = gecici;
                    }
                 }
              }
              printf("\n");
              printf("Sonuclar : ");
              for(i=0;i<22;i++){
                 printf(" %d ",sonuc[i]);
              }
              for(i=0;i<10;i++){
                 for(j=0;j<10;j++){
                    if(sonuc[i] == sayi[j])
                       dogru++;// dogru sayisi
                 }
              }
              switch(dogru){ // puanlama sistemi
                 case 0 : puan=8;
                     break;
                 case 1 :
                     break;
                 case 2 :
                     break;
                 case 3 :
                      break;
                 case 4 :
                     break;
                 case 5 :
                     break;
                 case 6 : puan=16;
                     break;
                 case 7 : puan=32;
                     break;
                 case 8 : puan=64;
                     break;
                 case 9: puan=128;
                     break;
                 case 10: puan=256;
              }
              toplampuan=toplampuan+puan;
              printf("\n");
                 printf("Dogru sayiniz : %d \n",dogru);
                    printf("Bu oyundan kazandiniz puaniniz : %d\n",puan);

                          oyunmenu3:
                 printf("\n\t**Oyun Sonu Menusu**\n");
                 printf("\t  1. Oyunu Tekrar Oyna  \n");
                 printf("\t  2. Menuye Don         \n");
                 printf("\t  3. Cikis              \n");
                  printf("Toplam puaniniz: %d\n\n ",toplampuan);
                 printf("-->");
                 scanf("%d",&osm);
              imam3:
              while(osm<1 || osm>3){
                    printf("Lutfen Gecerli Bir Deger Giriniz !! \n");
                        printf("-->");
                        scanf("%d",&osm);
                            goto imam3;
              }
              if(osm==1){
                    printf("\tOyunu tekrar oynamak istediginize emin misiniz ?\n");
                    printf("\t1. EVET\n");
                    printf("\t2. HAYIR\n");
                    printf("-->");
                    scanf("%d",&oyna);
              tirt3:
                   if (oyna==1){
                       goto on;
                   }
                   else if (oyna==2){
                       printf("Demek oyun oynamak istemiyosunuz sizi oyun sonu menusune geri alalim :) \n");
                          goto oyunmenu3;
                   }
                   else{
                       while (oyna<1|| oyna>2){
                          printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&oyna);
                                goto tirt3;
                       }
	               }
	               }
	               else if(osm==2){
                       printf("\tMenuye donmek istediginize emin misiniz ?\n");
                      printf("\t1. EVET\n");
                      printf("\t2. HAYIR\n");
                      printf("-->");
                      scanf("%d",&don);
                  sirt3:
                  if (don==1){
                      goto altsmenu;
                  }
                  else if (don==2){
                      printf("Galiba kafaniz karisti oyun sonu menusune geri gidin bi bakalim :) \n");
                          goto oyunmenu3;
                  }
                  else{
                      while (don<1|| don>2){
                         printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&don);
                                 goto sirt3;
                     }
                 }
	             }
                 else if	(osm==3){
                     printf("\tCikmak istediginize emin misiniz ?\n");
                         printf("\t1. EVET\n");
                             printf("\t2. HAYIR\n");
                                 printf("-->");
                                 scanf("%d",&cik);
                 pirt3:
                 if (cik==1){
                     goto aan;
                 }
                 else if(cik==2){
                     printf("Akliniz oyunda kaldi demek :) \n");
                         goto oyunmenu3;
                 }
                 else {
                     while (cik<1|| cik>2){
                         printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&cik);
                                 goto pirt3;
                     }
    	         }
                 }
          }
             break;
          case 4 :
          {   super:
             printf("Super Loto\n");

          int i, j, sayi[6], sonuc[6], rasgele[6], puan=0, dogru=0,osa5;
             for(i=0;i<6;i++){
                printf("Lutfen %d. sayiyi giriniz :",i+1);
                   scanf("%d",&sayi[i]);
             xyz:
             if(i>0){ //kullanici ayni sayiyi girdiginde yeniden bir sayi girmesi istendi
                for(j=i-1;j>-1;j--){
                   for( ; ; ){
                      if(sayi[i]== sayi[j]){
                          printf("Onceden girdiginiz bir deger girdiniz lutfen giriniz :\n");
                             scanf("%d",&sayi[i]);
                      }
                      else {
                         break;
                      }
                   }
                }
             }
             while(sayi[i]>54 ||sayi[i]<1){ // kullanicinin belirtilen araklik disinda bir deger girmesi halinde uyari verildi
                printf("Lutfen 1-54 araliginda bir deger giriniz !! : \n");
                   scanf("%d",&sayi[i]);
             goto xyz;
             }
             }
             for(i=0;i<6;i++){
             int j;
                for(j=0;j<5;j++){
                   if(sayi[j] > sayi[j+1]){
                      int gecici; // Seçtiðimiz Sayýlar Küçükten Büyüðe Sýralandý.
                          gecici = sayi[j];
                          sayi[j] = sayi[j+1];
                          sayi[j+1] = gecici;
                   }
                }
             }
             srand(time(NULL));
             printf("Girisler : ");
             for(i=0;i<6;i++){
                rasgele[i]=1+rand()%54;
                sonuc[i]=rasgele[i];
                printf(" %d  ",sayi[i]);
                for(x=-1;x<i;x++)
{
                if (sonuc[i]==sonuc[x])
    {
                rasgele[i]=1+rand()%54;
                sonuc[i]=rasgele[i];
    }
}
             }
             for(i=0;i<6;i++){
                    osa5=rasgele[i];
                    istatiksuperlo[osa5-1]=istatiksuperlo[osa5-1]+1;
                }
             for(i=0;i<6;i++){
                int j;
                   for(j=0;j<5;j++){
                      if(sonuc[j] > sonuc[j+1]){
                         int gecici; // Rastgele Secilen Sayýlar Küçükten Büyüðe Sýralandý.
                            gecici = sonuc[j];
                            sonuc[j] = sonuc[j+1];
                            sonuc[j+1] = gecici;
                      }
                   }
             }
             printf("\n");
             printf("Sonuclar : ");
             for(i=0;i<6;i++){
                 printf(" %d ",sonuc[i]);
             }
             for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                   if(sonuc[i] == sayi[j])
                      dogru++;// dogru sayisi
                }
             }
             switch(dogru){ // puanlama sistemi
                 case 1 :
                     break;
                 case 2 :
                     break;
                 case 3 : puan=32;
                     break;
                 case 4 : puan=64;
                     break;
                 case 5: puan=128;
                     break;
                 case 6: puan=256;
             }
             printf("\n");
                 printf("Dogru sayiniz : %d \n",dogru);
                     printf("Bu oyundan kazandiniz puaniniz : %d\n",puan);
                         toplampuan=toplampuan+puan;

                             oyunmenu4:
                 printf("\n\t**Oyun Sonu Menusu**\n");
                 printf("\t  1. Oyunu Tekrar Oyna  \n");
                 printf("\t  2. Menuye Don         \n");
                 printf("\t  3. Cikis              \n");
                  printf("Toplam puaniniz: %d\n\n ",toplampuan);
                 printf("-->");
                 scanf("%d",&osm);
              imam4:
              while(osm<1 || osm>3){
                    printf("Lutfen Gecerli Bir Deger Giriniz !! \n");
                        printf("-->");
                        scanf("%d",&osm);
                            goto imam4;
              }
              if(osm==1){
                    printf("\tOyunu tekrar oynamak istediginize emin misiniz ?\n");
                    printf("\t1. EVET\n");
                    printf("\t2. HAYIR\n");
                    printf("-->");
                    scanf("%d",&oyna);
              tirt4:
                   if (oyna==1){
                       goto super;
                   }
                   else if (oyna==2){
                       printf("Demek oyun oynamak istemiyosunuz sizi oyun sonu menusune geri alalim :) \n");
                          goto oyunmenu4;
                   }
                   else{
                       while (oyna<1|| oyna>2){
                          printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&oyna);
                                goto tirt4;
                       }
	               }
	               }
	               else if(osm==2){
                       printf("\tMenuye donmek istediginize emin misiniz ?\n");
                      printf("\t1. EVET\n");
                      printf("\t2. HAYIR\n");
                      printf("-->");
                      scanf("%d",&don);
                  sirt4:
                  if (don==1){
                      goto altsmenu;
                  }
                  else if (don==2){
                      printf("Galiba kafaniz karisti oyun sonu menusune geri gidin bi bakalim :) \n");
                          goto oyunmenu4;
                  }
                  else{
                      while (don<1|| don>2){
                         printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&don);
                                 goto sirt4;
                     }
                 }
	             }
                 else if	(osm==3){
                     printf("\tCikmak istediginize emin misiniz ?\n");
                         printf("\t1. EVET\n");
                             printf("\t2. HAYIR\n");
                                 printf("-->");
                                 scanf("%d",&cik);
                 pirt4:
                 if (cik==1){
                     goto aan;
                 }
                 else if(cik==2){
                     printf("Akliniz oyunda kaldi demek :) \n");
                         goto oyunmenu4;
                 }
                 else {
                     while (cik<1|| cik>2){
                         printf("Lutfen gecerli bir deger giriniz !!\n");
                             printf("-->");
                             scanf("%d",&cik);
                                 goto pirt4;
                     }
    	         }
                 }
         }
             break;
             case 5: goto menu;
             break;
         }
             case 2:
{                int secimist, don1, i, j, gecici, k;
                 istmenu:
                 printf("\t*****Istatistikler Menusu*****\n");
                 printf("\t1. Sayisal Loto Istatistikleri \n");
                 printf("\t2.Sans Topu Istatistikleri \n");
                 printf("\t3.On Numara Istatistikleri\n");
                 printf("\t4.Super Loto Istatistikleri\n");
                 printf("\t5. Ana Menu\n");
                 printf("-->:\n");
                 scanf("%d",&secimist);
                 secimistdon:
                     while(secimist<1 || secimist>5){
                            printf("Lutfen Gecerli Bir Deger Giriniz !! \n");
                            printf("-->");
                            scanf("%d",&secimist);
                            goto secimistdon;
              }
                 switch(secimist){
             case 1: printf("Sayisal Loto Istatistikleri\n");

                                    for(i=0;i<49;i++)
                              {
                                       for(j=0;j<48;j++)
                                       {
                                             if(i<=j)
                                             {
                                                    gecici=i;
                                                    i=j;
                                                    j=gecici;
                                             }
                                       }
                              }

                                        for(i=48;i>=0;i--){
                                                 if(istatiksayisal[i]!=0)
                                 printf("%dsayisi %d defa cikmis \n",i+1,istatiksayisal[i]);
                                        }
             printf("\n\n\n\n\n");

             goto istmenu;
                     break;
             case 2:
                 printf("Sans Topu Istatikleri\n");

             for(i=34;i>=0;i--){
             if(istatiksanstop[i]!=0)
             printf("%d sayisi %d defa tuttu\n",i+1,istatiksanstop[i]);
             }
             for(i=14;i>=0;i--){
                if(istatiksanstop2[i]!=0)
                    printf("+%d sayisi %d defa tuttu ",i+1,istatiksanstop2[i]);
             }
              printf("\n\n\n\n\n");

             goto istmenu;
                 break;
             case 3:
                 printf("On Numara Istatikleri\n");
                 for(i=80;i>=0;i--){
                    if(istatikonnumar[i]!=0)
                        printf("%d. sayi %d defa tuttu\n",i+1,istatikonnumar[i]);
                 }
            printf("\n\n\n\n\n");
            goto istmenu;
                 break;
             case 4:printf("Super Loto Istatistikleri \n");
             for(i=54;i>=0;i--){
                if(istatiksuperlo[i]!=0)
                    printf("%d sayisi %d defa tuttu\n ",i+1,istatiksuperlo[i]);
             }
            printf("\n\n\n\n\n");
            goto istmenu;
                 break;
             case 5:
                      printf("\tMenuye donmek istediginize emin misiniz ?\n");
                      printf("\t1. EVET\n");
                      printf("\t2. HAYIR\n");
                      printf("-->");
                      scanf("%d",&don1);
                  istana:
                  if (don1==1){
                      goto menu;
                  }
                  else if (don1==2){
                  goto istmenu;
                  }
                  else{
                      while (don<1|| don>2){
                      printf("Lutfen gecerli bir deger giriniz !!\n");
                      printf("-->");
                      scanf("%d",&don1);
                      goto istana;
                     }}
                     break;
                 }
            }
    }
    aan:
    return 0;
}


