




#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int sayi;
    
    cout << "write your number  ";
    cin >> sayi;

    if (sayi < 1 || sayi > 999) {
        cout << "improper integer." << endl;
        return 1;
    }

    // hundreds digit
    int yuzler = sayi / 100;
    if (yuzler > 0) {
        switch (yuzler) {
        case 1:
            cout << "yüz";
            break;
        case 2:
            cout << "iki yüz";
            break;
        case 3:
            cout << "üç yüz";
            break;
        case 4:
            cout << "dört yüz";
            break;
        case 5:
            cout << "beş yüz";
            break;
        case 6:
            cout << "altı yüz";
            break;
        case 7:
            cout << "yedi yüz";
            break;
        case 8:
            cout << "sekiz yüz";
            break;
        case 9:
            cout << "dokuz yüz";
            break;
        }
    }

    
    int onlar = (sayi / 10) % 10;
    int birler = sayi % 10;

    if (onlar > 0 || birler > 0) {
        // tenth digit 
        switch (onlar) {
        case 0:
            break;
        case 1:
            cout << " on";
            break;
        case 2:
            cout << " yirmi";
            break;
        case 3:
            cout << " otuz";
            break;
        case 4:
            cout << " kırk";
            break;
        case 5:
            cout << " elli";
            break;
        case 6:
            cout << " altmış";
            break;
        case 7:
            cout << " yetmiş";
            break;
        case 8:
            cout << " seksen";
            break;
        case 9:
            cout << " doksan";
            break;
        }

        // ones digit 
        switch (birler) {
        case 0:
            break;
        case 1:
            cout << " bir";
            break;
        case 2:
            cout << " iki";
            break;
        case 3:
            cout << " üç";
            break;
        case 4:
            cout << " dört";
            break;
        case 5:
            cout << " beş";
            break;
        case 6:
            cout << " altı";
            break;
        case 7:
            cout << " yedi";
            break;
        case 8:
            cout << " sekiz";
            break;
        case 9:
            cout << " dokuz";
            break;
        }
    }

    cout << endl;
    return 0;
}
