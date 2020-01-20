#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//19010011027
//Mehmet Emin Ozkurkculer

int main()
{
    int ana_menu, basit_islem_menusu, gelismis_islem_menusu, donusturucu_menusu; //Menuler
    int sayi, sayi1, sayi2, sonuc, secim;                                        //Basit ve Gelismis islemler
    int miktar, birim, donusturulecek_birim, yeni_miktar;                        //Donusturme islemleri
    float bolme_sonuc;                                                           //Basit islemler

    do
    {
        //Menu secim ekrani
        printf("**************************************************\n\n");
        printf("\tHesap Makinesi ve Donusturucu v1.0\n\n");
        printf("1-Basit Islemler\n");
        printf("2-Gelismis Islemler\n");
        printf("3-Donusturucu\n");
        printf("4-Dort Islem Ortak\n");
        printf("5-Cikis\n");
        printf("\n**************************************************\n\n");
        printf("Yapmak istediginiz islemi seciniz:");
        scanf("%d", &ana_menu);

        switch (ana_menu)
        {
        case 1: //Basit islemler menusu
            do
            {
                sonuc = 0;
                printf("\n************** Basit Islemler Menusu *************\n\n");
                printf("1-Toplama (+)\n");
                printf("2-Cikarma (-)\n");
                printf("3-Carpma (*)\n");
                printf("4-Bolme (/)\n");
                printf("5-Ana menuye don\n");
                printf("\n**************************************************\n\n");
                printf("Yapmak istediginiz islemi seciniz:");
                scanf("%d", &basit_islem_menusu);

                switch (basit_islem_menusu)
                {
                case 1: //Toplama islemi
                    do
                    {
                        //sonuc=0;
                        printf("\nToplama islemi icin ilk sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        printf("Toplama islemi icin ikinci sayiyi giriniz:");
                        scanf("%d", &sayi2);
                        sonuc = sayi1 + sayi2;
                        printf("\n%d + %d  isleminin sonucu: %d\n", sayi1, sayi2, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir toplama islemi baslat 2:Sonuca yeni bir sayi ekle 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2) //Tekrar toplama islemi yapma.
                        {
                            printf("\n***************\nSonuc: %d\n***************\n", sonuc);
                            printf("Sonuca eklemek icin sayi giriniz:");
                            scanf("%d", &sayi);
                            sonuc += sayi;
                            printf("\nToplama isleminin sonucu: %d\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir toplama islemi baslat 2:Sonuca yeni bir sayi ekle 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("\nHatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                    break;
                case 2: //Cikarma islemi
                    do
                    {
                        sonuc = 0;
                        printf("\nCikarma islemi icin ilk sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        printf("Cikarma islemi icin ikinci sayiyi giriniz:");
                        scanf("%d", &sayi2);
                        sonuc = sayi1 - sayi2;
                        printf("\n%d - %d  isleminin sonucu: %d\n", sayi1, sayi2, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir cikarma islemi baslat 2:Sonuctan yeni bir sayi cikar 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2)
                        {
                            printf("\n***************\nSonuc: %d\n***************\n", sonuc);
                            printf("Sonuctan cikarmak icin sayi giriniz:");
                            scanf("%d", &sayi);
                            sonuc -= sayi;
                            printf("\nCikarma isleminin sonucu: %d\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir cikarma islemi baslat 2:Sonuctan yeni bir sayi cikar 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1)
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("\nHatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 2);
                    break;
                case 3: //Carpma islemi
                    do
                    {
                        sonuc = 0;
                        printf("\nCarpma islemi icin ilk sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        printf("Carpma islemi icin ikinci sayiyi giriniz:");
                        scanf("%d", &sayi2);
                        sonuc = sayi1 * sayi2;
                        printf("\n%d * %d  isleminin sonucu: %d\n", sayi1, sayi2, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir carpma islemi baslat 2:Sonucla yeni bir sayiyi carp 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2)
                        {
                            printf("\n***************\nSonuc: %d\n***************\n", sonuc);
                            printf("Sonucu carpmak icin sayi giriniz:");
                            scanf("%d", &sayi);
                            sonuc = sonuc * sayi;
                            printf("\nCarpma isleminin sonucu: %d\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir carpma islemi baslat 2:Sonucla yeni bir sayiyi carp 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1)
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("\nHatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 2);
                    break;
                case 4: //Bolme islemi
                    do
                    {
                        sonuc = 0;
                        printf("\nBolme islemi icin ilk sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        printf("Bolme islemi icin ikinci sayiyi giriniz:");
                        scanf("%d", &sayi2);
                        bolme_sonuc = (double)sayi1 / sayi2;
                        printf("\n%d / %d  isleminin sonucu: %.2f\n", sayi1, sayi2, bolme_sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir bolme islemi baslat 2:Sonucu yeni bir sayiya bol 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2)
                        {
                            printf("\n***************\nSonuc: %.2f\n***************\n", bolme_sonuc);
                            printf("Sonucu tekrar bolmek icin sayi giriniz:");
                            scanf("%d", &sayi);
                            bolme_sonuc = bolme_sonuc / sayi;
                            printf("\nBolme isleminin sonucu: %.2f\n", bolme_sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir bolme islemi baslat 2:Sonucu yeni bir sayiya bol 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1)
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("\nHatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                    break;
                case 5: //Ana Menu
                    printf("Ana menuye donuyorsunuz.\n");
                    break;
                default:
                    printf("Hatali bir sayi girdiniz, lutfen tekrar giriniz.\n");
                }
            } while (basit_islem_menusu != 5);
            break;
        case 2: //Gelismis islemler menusu
            do
            {
                sonuc = 0;
                printf("\n************ Gelismis Islemler Menusu ************\n\n");
                printf("1-Mod alma\n");
                printf("2-Karekok alma\n");
                printf("3-Us alma\n");
                printf("4-Logaritma (10 tabaninda)\n");
                printf("5-Logaritma (e tabaninda)\n");
                printf("6-Ana menuye don\n");
                printf("\n**************************************************\n\n");
                printf("Yapmak istediginiz islemi seciniz:");
                scanf("%d", &gelismis_islem_menusu);

                switch (gelismis_islem_menusu)
                {
                case 1: //Mod Alma
                    do
                    {
                        //sonuc=0;
                        printf("\nModunu almak istediginiz sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        printf("Mod almak istediginiz sayiyi giriniz:");
                        scanf("%d", &sayi2);
                        sonuc = sayi1 % sayi2;
                        printf("\n%d MOD %d  isleminin sonucu: %d\n", sayi1, sayi2, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir mod alma islemi baslat 2:Sonuctan yeni bir mod al 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2) //Tekrar toplama islemi yapma.
                        {
                            printf("\n***************\nSonuc: %d\n***************\n", sonuc);
                            printf("Sonuctan alacaginiz modu giriniz:");
                            scanf("%d", &sayi);
                            sonuc = sonuc % sayi;
                            printf("\nMOD isleminin sonucu: %d\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir mod alma islemi baslat 2:Sonuctan yeni bir mod al 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }

                        else if (secim != 3)
                        {
                            printf("\nHatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                    break;
                case 2: //Karekok Alma
                    do
                    {
                        float sonuc;
                        printf("\nKarekokunu almak istediginiz sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        sonuc = sqrt((double)sayi1);
                        printf("\n%d sayisinin karekoku : %.2f\n", sayi1, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir karekok alma islemi baslat 2:Sonuctan yeni bir karekok al 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2) //Tekrar toplama islemi yapma.
                        {
                            printf("\n***************\nSonuc: %.2f\n***************\n", sonuc);
                            sonuc = sqrt(sonuc);
                            printf("\nKarekok alma isleminin sonucu: %.4f\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir karekok alma islemi baslat 2:Sonuctan yeni bir karekok al 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("Hatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                    break;
                case 3: //Us Alma
                    do
                    {
                        float sonuc;
                        printf("\nUssunu alacaginiz sayiyi giriniz:");
                        scanf("%d", &sayi1);
                        printf("Sayinin kacinci kuvvetini almak istediginizi yaziniz:");
                        scanf("%d", &sayi2);
                        sonuc = pow((double)sayi1, sayi2);
                        printf("\n%d sayisinin %d'nci kuvveti : %.2f\n", sayi1, sayi2, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir us alma islemi baslat 2:Sonuctan yeni bir us al 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2) //Tekrar toplama islemi yapma.
                        {
                            printf("\n***************\nSonuc: %.2f\n***************\n", sonuc);
                            printf("Sonucun kacinci kuvvetini almak istediginizi yaziniz:");
                            scanf("%d", &sayi);
                            sonuc = pow(sonuc, sayi);
                            printf("\nIslemin sonucu : %.2f\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir us alma islemi baslat 2:Sonuctan yeni bir us al 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("Hatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                    break;
                case 4: //Logaritma
                    do
                    {
                        float sonuc;
                        printf("\n--------------------------------------------------\n");
                        printf("DIKKAT! Bu islem logaritmayi 10 tabaninda alir.\n");
                        printf("--------------------------------------------------\n");
                        printf("\nLogaritmasini alacaginiz sayiyi girin:");
                        scanf("%d", &sayi1);
                        sonuc = log10((double)sayi1);
                        printf("\n%d sayisinin logaritmasi kuvveti : %.2f\n", sayi1, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir log alma islemi baslat 2:Sonuctan yeni bir log al 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2) //Tekrar toplama islemi yapma.
                        {
                            printf("\n***************\nSonuc: %.2f\n***************\n", sonuc);
                            sonuc = log10(sonuc);
                            printf("\nIslemin sonucu : %.2f\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir log alma islemi baslat 2:Sonuctan yeni bir log al 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("Hatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                    break;
                case 5: //Logaritma e
                    do
                    {
                        float sonuc;
                        printf("\n--------------------------------------------------\n");
                        printf("DIKKAT! Bu islem logaritmayi 'e' tabaninda alir.\n");
                        printf("--------------------------------------------------\n");
                        printf("Logaritmasini alacaginiz sayiyi girin:");
                        scanf("%d", &sayi1);
                        sonuc = log((double)sayi1);
                        printf("\n%d sayisinin logaritmasi kuvveti : %.2f\n", sayi1, sonuc);
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir log alma islemi baslat 2:Sonuctan yeni bir log al 3:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        while (secim == 2) //Tekrar toplama islemi yapma.
                        {
                            printf("\n***************\nSonuc: %.2f\n***************\n", sonuc);
                            sonuc = log(sonuc);
                            printf("\nIslemin sonucu : %.2f\n", sonuc);
                            printf("--------------------------------------------------\n");
                            printf("1:Yeni bir log alma islemi baslat 2:Sonuctan yeni bir log al 3:Ana menuye don\n");
                            printf("Lutfen yapmak istediginiz islemi seciniz:");
                            scanf("%d", &secim);
                        }
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 3)
                        {
                            break;
                        }
                        else if (secim != 3)
                        {
                            printf("Hatali bir secim yaptiniz, menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 3);
                case 6: //Ana Menu
                    printf("Ana menuye donuyorsunuz.\n");
                    break;
                default:
                    printf("Hatali bir islem girdiniz, lutfen tekrar giriniz.\n");
                }
            } while (gelismis_islem_menusu != 6);
            break;
        case 3: //Donusturucu menusu
            do
            {
                printf("\n*************** Donusturucu Menusu ***************\n\n");
                printf("1-Uzunluk Donusturucusu\n");
                printf("2-Kute/Agirlik Donusturucusu\n");
                printf("3-Zaman Donusturucusu\n");
                printf("4-Veri Donusturucusu\n");
                printf("5-Ana menuye don\n");
                printf("\n**************************************************\n\n");
                printf("Yapmak istediginiz islemi seciniz:");
                scanf("%d", &donusturucu_menusu);

                switch (donusturucu_menusu)
                {
                case 1: //Uzunluk Donusturucu
                    do
                    {
                        int yeni_miktar = 0;
                        printf("--------------------------------------------------\n");
                        printf("Bu donusturucude kullanabileceginiz birimler ve sayisal karsiliklari: 1-km 2-m 3-cm 4-mm\n");
                        printf("--------------------------------------------------\n");
                        printf("Uzunlugunuzun miktarini ve biriminin sayisal karsiligini \naralarinda bir bosluk olacak sekilde yaziniz. | Ornek Kullanim: '1 1' = 1 km | :");
                        scanf("%d %d", &miktar, &birim);
                        printf("\nDonusturmek istediginiz birimi yaziniz:");
                        scanf("%d", &donusturulecek_birim);
                        if (birim == 1)
                        {
                            if (donusturulecek_birim == 1)
                            {
                                printf("\n******************************\n");
                                printf("%d km, %d km'ye esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d km, %d m'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 100000;
                                printf("\n******************************\n");
                                printf("%d km, %d cm'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 1000000;
                                printf("\n******************************\n");
                                printf("%d km, %d mm'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 2)
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d m, %.3f km'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                printf("\n******************************\n");
                                printf("%d m, %d m'ye esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 100;
                                printf("\n******************************\n");
                                printf("%d m, %d cm'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d m, %d mm'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 3)
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 100000;
                                printf("\n******************************\n");
                                printf("%d cm, %.5f km'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 100;
                                printf("\n******************************\n");
                                printf("%d cm, %.2f m'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                printf("\n******************************\n");
                                printf("%d cm, %d cm'ye esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 10;
                                printf("\n******************************\n");
                                printf("%d cm, %d mm'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 4)
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000000;
                                printf("\n******************************\n");
                                printf("%d mm, %.6f km'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d mm, %.3f m'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 10;
                                printf("\n******************************\n");
                                printf("%d mm, %.1f cm'ye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                printf("\n******************************\n");
                                printf("%d mm, %d mm'ye esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                        }
                        else
                        {
                            printf("Hatali bir birim girdiniz, lutfen gecerli bir birim giriniz.\n");
                            continue;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir uzunluk miktari islemi yap 2:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 2) //Cikis
                        {
                            break;
                        }
                        else if (secim != 2)
                        {
                            printf("Hatali bir secim yaptiniz, menuye donduruluyorsunuz.");
                            break;
                        }
                    } while (secim != 2);
                    break;
                case 2: //Kutle-Agirlik Donusturucu
                    do
                    {
                        int yeni_miktar = 0;
                        printf("--------------------------------------------------\n");
                        printf("Bu donusturucude kullanabileceginiz birimler ve sayisal karsiliklari: 1-kg 2-g 3-mg\n");
                        printf("--------------------------------------------------\n");
                        printf("Kutle/Agirliginizin miktarini ve biriminin sayisal karsiligini \naralarinda bir bosluk olacak sekilde yaziniz. | Orn.: '1 1' = 1 kg | :");
                        scanf("%d %d", &miktar, &birim);
                        printf("\nDonusturmek istediginiz birimi yaziniz:");
                        scanf("%d", &donusturulecek_birim);

                        if (birim == 1) //Kilogram
                        {
                            if (donusturulecek_birim == 1)
                            {
                                printf("\n******************************\n");
                                printf("%d kg, %d kg'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d kg, %d g'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 1000000;
                                printf("\n******************************\n");
                                printf("%d kg, %d mg'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 2) //Gram
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d g, %.3f kg'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                printf("\n******************************\n");
                                printf("%d g, %d g'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d g, %d mg'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 3) //Miligram
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000000;
                                printf("\n******************************\n");
                                printf("%d mg, %.6f kg'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d mg, %.3f g'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                printf("\n******************************\n");
                                printf("%d mg, %d mg'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                        }
                        else
                        {
                            printf("Hatali bir birim girdiniz, lutfen gecerli bir birim giriniz.\n");
                            continue;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir Kutle-Agirlik donusturme islemi yap 2:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 2) //Cikis
                        {
                            break;
                        }
                        else
                        {
                            printf("\nHatali bir secim yaptiniz.Ana menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 2);
                    break;
                case 3: //Zaman Donusturucu
                    do
                    {
                        int yeni_miktar = 0;
                        printf("--------------------------------------------------\n");
                        printf("Bu donusturucude kullanabileceginiz birimler ve sayisal karsiliklari: 1-gun 2-saat 3-dakika 4-saniye\n");
                        printf("--------------------------------------------------\n");
                        printf("Kutle/Agirliginizin miktarini ve biriminin sayisal karsiligini \naralarinda bir bosluk olacak sekilde yaziniz. | Orn.: '1 1' = 1 gun | :");
                        scanf("%d %d", &miktar, &birim);
                        printf("\nDonusturmek istediginiz birimi yaziniz:");
                        scanf("%d", &donusturulecek_birim);

                        if (birim == 1) //Gun
                        {
                            if (donusturulecek_birim == 1)
                            {
                                printf("\n******************************\n");
                                printf("%d gun, %d gune esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                yeni_miktar = miktar * 24;
                                printf("\n******************************\n");
                                printf("%d gun, %d saate esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 1440;
                                printf("\n******************************\n");
                                printf("%d gun, %d dakikaya esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 86400;
                                printf("\n******************************\n");
                                printf("%d gun, %d saniyeye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 2) //Saat
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 24;
                                printf("\n******************************\n");
                                printf("%d saat, %.2f gune esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                printf("\n******************************\n");
                                printf("%d saat, %d saate esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 60;
                                printf("\n******************************\n");
                                printf("%d saat, %d dakikaya esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 3600;
                                printf("\n******************************\n");
                                printf("%d saat, %d saniyeye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 3) //Dakika
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1440;
                                printf("\n******************************\n");
                                printf("%d dakika, %f gune esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 60;
                                printf("\n******************************\n");
                                printf("%d dakika, %.3f saate esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                printf("\n******************************\n");
                                printf("%d dakika, %d dakikaya esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 60;
                                printf("\n******************************\n");
                                printf("%d dakika, %d saniyeye esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 4) //Saniye
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 86400;
                                printf("\n******************************\n");
                                printf("%d saniye, %f gune esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 3600;
                                printf("\n******************************\n");
                                printf("%d saniye, %.5f saate esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 60;
                                printf("\n******************************\n");
                                printf("%d saniye, %.3f dakikaya esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                printf("\n******************************\n");
                                printf("%d saniye, %d saniyeye esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                        }
                        else
                        {
                            printf("\nHatali bir birim girdiniz, lutfen gecerli bir birim giriniz.\n");
                            continue;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir zaman donusturme islemi yap 2:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 2) //Cikis
                        {
                            break;
                        }
                        else
                        {
                            printf("\nHatali bir secim yaptiniz.Ana menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 2);
                    break;
                case 4: //Veri Donusturucu
                    do
                    {
                        int yeni_miktar = 0;
                        printf("--------------------------------------------------\n");
                        printf("Bu bolumdeki cevrime verileri Wikipedia'dan alinmistir.\n");
                        printf("Bu donusturucude kullanabileceginiz birimler ve sayisal karsiliklari: 1-terabyte 2-gigabyte 3-megabyte 4-kilobyte\n");
                        printf("--------------------------------------------------\n");
                        printf("Kutle/Agirliginizin miktarini ve biriminin sayisal karsiligini \naralarinda bir bosluk olacak sekilde yaziniz. | Orn.: '1 1' = 1 terabyte | :");
                        scanf("%d %d", &miktar, &birim);
                        printf("\nDonusturmek istediginiz birimi yaziniz:");
                        scanf("%d", &donusturulecek_birim);

                        if (birim == 1) //Terabyte
                        {
                            if (donusturulecek_birim == 1)
                            {
                                printf("\n******************************\n");
                                printf("%d terabyte, %d terabyte'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d terabyte, %d gigabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                long long int yeni_miktar;
                                yeni_miktar = (double)miktar * 1000000;
                                printf("\n******************************\n");
                                printf("%d terabyte, %lld megabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                long long int yeni_miktar;
                                yeni_miktar = (double)miktar * 1000000000;
                                printf("\n******************************\n");
                                printf("%d terabyte, %lld kilobyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 2) //Gigabyte
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d gigabyte, %.3f terabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                printf("\n******************************\n");
                                printf("%d gigabyte, %d gigabyte'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d gigabyte, %d megabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                long long int yeni_miktar;
                                yeni_miktar = (double)miktar * 1000000;
                                printf("\n******************************\n");
                                printf("%d gigabyte, %lld kilobyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 3) //Megabyte
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000000;
                                printf("\n******************************\n");
                                printf("%d megabyte, %f terabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d megabyte, %.3f gigabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                printf("\n******************************\n");
                                printf("%d megabyte, %d megabyte'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                yeni_miktar = miktar * 1000;
                                printf("\n******************************\n");
                                printf("%d megabyte, %d kilobyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                        }
                        else if (birim == 4) //kilobyte
                        {
                            if (donusturulecek_birim == 1)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000000000;
                                printf("\n******************************\n");
                                printf("%d kilobyte, %.9f terabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 2)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000000;
                                printf("\n******************************\n");
                                printf("%d kilobyte, %f gigabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 3)
                            {
                                float yeni_miktar;
                                yeni_miktar = (double)miktar / 1000;
                                printf("\n******************************\n");
                                printf("%d kilobyte, %.3f megabyte'a esittir. \n", miktar, yeni_miktar);
                                printf("******************************\n");
                            }
                            else if (donusturulecek_birim == 4)
                            {
                                printf("\n******************************\n");
                                printf("%d kilobyte, %d kilobyte'a esittir. \n", miktar, miktar);
                                printf("******************************\n");
                            }
                        }
                        else
                        {
                            printf("\nHatali bir birim girdiniz, lutfen gecerli bir birim giriniz.\n");
                            continue;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1:Yeni bir veri donusumu islemi yap 2:Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                        if (secim == 1) //Yeni islem
                        {
                            continue;
                        }
                        else if (secim == 2) //Cikis
                        {
                            break;
                        }
                        else
                        {
                            printf("\nHatali bir secim yaptiniz.Ana menuye yonlendiriliyorsunuz.\n");
                            break;
                        }
                    } while (secim != 2);
                    break;
                case 5: //Ana Menu
                    printf("Ana menuye donuyorsunuz.\n");
                    break;
                default:
                    printf("Hatali bir sayi girdiniz, lutfen tekrar giriniz.\n");
                }
            } while (donusturucu_menusu != 5);
            break;
        case 4: //Dort islem ortak
            do
            {
                char islem, islem_2;
                printf("\n**************************************************\n");
                printf("-Bu bolumde 4 islemi ortak bir sekilde gerceklestirebilir, sonucunuz uzerinden tekrar islem yapabilirsiniz.\n");
                printf("-Herhangi bir hata ile karsilasmamak adina lutfen islemlerinizi tam sayilar ile yapiniz.\n");
                printf("-Bu bolumde kullanabileceginiz islemler: +,-,/,*\n");
                printf("**************************************************\n");
                printf("Lutfen yapmak istediginiz islemi arasinda isareti ile birlikte yaziniz | Orn. : 2+5 | :");
                scanf("%d%c%d", &sayi1, &islem, &sayi2);

                if (islem == '+')
                {
                    float sonuc;
                    sonuc = sayi1 + sayi2; //İlk yapilan toplama islemi
                    printf("\n%d + %d isleminin sonucu: %.0f\n", sayi1, sayi2, sonuc);
                    printf("--------------------------------------------------\n");
                    printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz:");
                    scanf("%d", &secim);
                    while (secim == 2) //Tekrar islemi
                    {
                        printf("\n***************\nSonuc: %.0f\n***************\n", sonuc);
                        printf("Sonuca yapmak istediginiz islemi giriniz | Orn. : 5+ |:");
                        scanf("%d%c", &sayi, &islem_2);
                        if (islem_2 == '+')
                        {
                            sonuc = sonuc + sayi;
                            printf("\nToplama isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '-')
                        {
                            sonuc = sonuc - sayi;
                            printf("\nCikarma isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '*')
                        {
                            sonuc = sonuc * sayi;
                            printf("\nCarpma isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '/')
                        {
                            bolme_sonuc = sonuc / (double)sayi;
                            printf("\nBolme isleminin sonucu: %.2f\n", bolme_sonuc);
                            sonuc = bolme_sonuc;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                    }
                    if (secim == 1)
                    {
                        sonuc = 0;
                        continue;
                    }
                    else if (secim == 3)
                    {
                        break;
                    }
                    else
                    {
                        printf("\nHatali bir secim yaptiniz. Ana menuye yonlendiriliyorsunuz.\n");
                        break;
                    }
                }
                else if (islem == '-') //Cikarma
                {
                    float sonuc;
                    sonuc = sayi1 - sayi2; //İlk cikarma toplama islemi
                    printf("\n%d - %d isleminin sonucu: %.0f\n", sayi1, sayi2, sonuc);
                    printf("--------------------------------------------------\n");
                    printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz:");
                    scanf("%d", &secim);
                    while (secim == 2) //Tekrar islemi
                    {
                        printf("\n***************\nSonuc: %.0f\n***************\n", sonuc);
                        printf("Sonuca yapmak istediginiz islemi giriniz | Orn. : 5+ |:");
                        scanf("%d%c", &sayi, &islem_2);
                        if (islem_2 == '+')
                        {
                            sonuc = sonuc + sayi;
                            printf("\nToplama isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '-')
                        {
                            sonuc = sonuc - sayi;
                            printf("\nCikarma isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '*')
                        {
                            sonuc = sonuc * sayi;
                            printf("\nCarpma isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '/')
                        {
                            bolme_sonuc = sonuc / (double)sayi;
                            printf("\nBolme isleminin sonucu: %.2f\n", bolme_sonuc);
                            sonuc = bolme_sonuc;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                    }
                    if (secim == 1)
                    {
                        sonuc = 0;
                        continue;
                    }
                    else if (secim == 3)
                    {
                        break;
                    }
                    else
                    {
                        printf("\nHatali bir secim yaptiniz. Ana menuye yonlendiriliyorsunuz.\n");
                        break;
                    }
                }
                else if (islem == '*') //Carpma
                {
                    float sonuc;
                    sonuc = sayi1 * sayi2; //İlk yapilan carpma islemi
                    printf("\n%d * %d isleminin sonucu: %.0f\n", sayi1, sayi2, sonuc);
                    printf("--------------------------------------------------\n");
                    printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz:");
                    scanf("%d", &secim);
                    while (secim == 2) //Tekrar islemi
                    {
                        printf("\n***************\nSonuc: %.0f\n***************\n", sonuc);
                        printf("Sonuca yapmak istediginiz islemi giriniz | Orn. : 5+ |:");
                        scanf("%d%c", &sayi, &islem_2);
                        if (islem_2 == '+')
                        {
                            sonuc = sonuc + sayi;
                            printf("\nToplama isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '-')
                        {
                            sonuc = sonuc - sayi;
                            printf("\nCikarma isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '*')
                        {
                            sonuc = sonuc * sayi;
                            printf("\nCarpma isleminin sonucu: %.0f\n", sonuc);
                        }
                        else if (islem_2 == '/')
                        {
                            bolme_sonuc = sonuc / (double)sayi;
                            printf("\nBolme isleminin sonucu: %.2f\n", bolme_sonuc);
                            sonuc = bolme_sonuc;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                    }
                    if (secim == 1)
                    {
                        sonuc = 0;
                        continue;
                    }
                    else if (secim == 3)
                    {
                        break;
                    }
                    else
                    {
                        printf("\nHatali bir secim yaptiniz. Ana menuye yonlendiriliyorsunuz.\n");
                        break;
                    }
                }
                else if (islem == '/') //Bolme
                {
                    float sonuc;
                    sonuc = (double)sayi1 / sayi2; //İlk yapilan bolme islemi
                    printf("\n%d / %d isleminin sonucu: %.2f\n", sayi1, sayi2, sonuc);
                    printf("--------------------------------------------------\n");
                    printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz:");
                    scanf("%d", &secim);
                    while (secim == 2) //Tekrar islemi
                    {

                        printf("\n***************\nSonuc: %.2f\n***************\n", sonuc);
                        printf("Sonuca yapmak istediginiz islemi giriniz | Orn. : 5+ |:");
                        scanf("%d%c", &sayi, &islem_2);
                        if (islem_2 == '+')
                        {
                            sonuc = sonuc + sayi;
                            printf("\nToplama isleminin sonucu: %.2f\n", sonuc);
                        }
                        else if (islem_2 == '-')
                        {
                            sonuc = sonuc - sayi;
                            printf("\nCikarma isleminin sonucu: %.2f\n", sonuc);
                        }
                        else if (islem_2 == '*')
                        {
                            sonuc = sonuc * sayi;
                            printf("\nCarpma isleminin sonucu: %.2f\n", sonuc);
                        }
                        else if (islem_2 == '/')
                        {
                            bolme_sonuc = sonuc / (double)sayi;
                            printf("\nBolme isleminin sonucu: %.2f\n", bolme_sonuc);
                            sonuc = bolme_sonuc;
                        }
                        printf("--------------------------------------------------\n");
                        printf("1-Yeni bir islem baslat 2-Sonuc uzerinden yeni bir islem baslat 3-Ana menuye don\n");
                        printf("Lutfen yapmak istediginiz islemi seciniz:");
                        scanf("%d", &secim);
                    }
                    if (secim == 1)
                    {
                        sonuc = 0;
                        continue;
                    }
                    else if (secim == 3)
                    {
                        break;
                    }
                    else
                    {
                        printf("\nHatali bir secim yaptiniz. Ana menuye yonlendiriliyorsunuz.\n");
                        break;
                    }
                }
                else
                {
                    printf("\nHatali bir islem yaptiniz, ana menuye aktariliyorsunuz.\n");
                    break;
                }
            } while (secim != 3);
            break;
        case 5: //Cikis
            printf("\n**************************************************\n");
            printf("\nUygulamadan cikiliyor...\n");
            printf("\n**************************************************\n");
            break;
        default:
            printf("\nGecersiz bir sayi girdiniz, lutfen tekrar giriniz.\n");
            break;
        }
    } while (ana_menu != 5);
    return 0;
}
