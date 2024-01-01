#include <iostream>
using namespace std;
int main()
{
    int anaPara = 1;
    int bahis;
    int secim;
    while (true)
    {
        cout << "oynanacak para gir" << endl;
        cin >> bahis;
        while (anaPara < bahis)
        {
            cout << "oynanacak para gir" << endl;
            cin >> bahis;
        }
        cout << "oynanacak sayiyi gir" << endl;
        cin >> secim;
        while (secim > 3 || secim < 1)
        {
            cout << "tekrara sayi gir" << endl;
            cin >> secim;
        }
        

        int rastgeleSayi;
        srand(time(NULL));
        rastgeleSayi = rand() % 100;

        int gelen;
        if (rastgeleSayi < 50)
        {
            gelen = 1;
        }
        else if (rastgeleSayi > 50)
        {
            gelen = 2;
        }
        else if (rastgeleSayi == 50)
        {
            gelen = 3;
        }
        cout << "sounc:" << gelen << endl;
        if (gelen == secim && gelen != 3)
        {
            cout << "kazandin:" << bahis * 2 << endl;
            anaPara += bahis * 2;
        }
        else if (gelen == secim && gelen == 3)
        {
            cout << "kazandins" << bahis * 14 << endl;
            anaPara += bahis * 14;
        }
        else
        {
            cout << "kaybettin" << endl;
            anaPara -= bahis;
        }
        cout << "Yeni bakiye:" << anaPara << endl;
        if(anaPara<=0){
            cout<<"siktgir git";
            break;
        }
    }

    // if(dfgsdşlöfmötş<as.lkjih<dzertpğlmhzğ<eapodolkmnö<)
    return 0;
}