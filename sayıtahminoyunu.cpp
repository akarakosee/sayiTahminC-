#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

int main()
{
    int hak = 10;
    int tahmin;
    setlocale(LC_ALL, "Turkish");

    cout << "Sayı Tahmin Etme Oyununa Hoşgeldin" << endl;
    cout << endl;
    cout << "0 ile 100 arasında rastgele bir sayının kaç olduğunu bulman için "<<hak<<" hakkın var." <<endl;

    int sayi, enFazla = 100, enAz = 0;

    srand(time(0));

    sayi = rand() % (enFazla - enAz + 1) + enAz;


    while (hak > 0) {
        cout << "Kalan hakkınız: " << hak << endl;
        cout << endl;
        cout << "Bir Sayı Tahmini Yapınız:  ";
        cin >> tahmin;

        if (tahmin == sayi)
        {
            cout << "Doğru bildiniz tebrikler!" << endl;
            break;
        }
        else if (tahmin < sayi)
        {
            cout << "Tahmin ettiğiniz sayıyı büyütünüz." << endl;
        }
        else
        {
            cout << "Tahmin ettiğiniz sayıyı küçültünüz." << endl;
        }
        hak--;
    }

    if (hak == 0) {
        cout << "Daha fazla deneme hakkın kalmadı." << endl;
        cout << " " << endl;
        cout<<" Rastgele sayı buydu: " << sayi << endl;
        cout << " " << endl;
    }

    return 0;
}