#include <iostream>
#include <random>
using namespace std;
int main()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    int anaPara = 100;
    int bahis = 100;
    int secim;
    int oyun = 0;

    cout << "oynanacak sayiyi gir" << endl;
    cin >> secim;

    while (secim > 3 || secim < 1)
    {
        cout << "tekrara sayi gir" << endl;
        cin >> secim;
    }

    while (anaPara > 0)
    {
       std::uniform_int_distribution<int> dist(0, 100);
       

        int gelen;
        if (dist(mt) < 50)
        {
            gelen = 1;
        }
        else if (dist(mt) > 50)
        {
            gelen = 2;
        }
        else if (dist(mt) == 50)
        {
            gelen = 3;
        }
        cout << "sounc:" << gelen << endl;

        if (gelen == secim && gelen != 3)
        {
            cout << "kazandin:" << bahis * 2 << endl;
            anaPara += bahis * 2;
            bahis = 100;
            oyun++;
            
        }

        else if (gelen == secim && gelen == 3)
        {
            cout << "kazandins" << bahis * 14 << endl;
            anaPara += bahis * 14;
            bahis = 100;
            oyun++;
        }

        else
        {
            cout << "kaybettin" << endl;
            anaPara -= bahis;
            bahis *= 2;
            oyun++;
            secim=gelen;
        }

        cout << "Yeni bakiye:" << anaPara << endl;

        if (anaPara <= 0)
        {
            cout << "siktgir git"
                 << "oynadgn oyun: " << oyun << endl;
            break;
        }
    }

    // if(dfgsdşlöfmötş<as.lkjih<dzertpğlmhzğ<easpodolkmnö<)
    return 0;
}