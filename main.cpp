#include <iostream>

using namespace std;

int main() {
    int elemanSayisi;
    char devam;

    cout << "Arama elemanlarinin sayisini girin: ";
    cin >> elemanSayisi;

    int elemanlar[elemanSayisi];

    int i = 0;
    do {
    	
        cout << "Eleman " << (i + 1) << " girin: ";
        cin >> elemanlar[i];
        i++;

		if(i != elemanSayisi){
			        cout << "Devam etmek istiyor musunuz? (e/E = devam, herhangi bir karakter = cikis): ";
        cin >> devam;
		}
		
    } while ((devam == 'e' || devam == 'E') && i < elemanSayisi);

    cout << "Girilen elemanlar: ";
    for (int j = 0; j < i; ++j) {
        cout << elemanlar[j] << " ";
    }
    cout << endl;

    int arananEleman;
    cout << "Aranacak elemani girin: ";
    cin >> arananEleman;

    bool bulundu = false;
    for (int j = 0; j < i; ++j) {
        if (elemanlar[j] == arananEleman) {
            cout << "Aranan eleman " << arananEleman << " dizinin " << j << ". indeksinde bulundu." << endl;
            bulundu = true;
            break;
        }
    }

    if (!bulundu) {
        cout << "Aranan eleman bulunamadi." << endl;
    }

    return 0;
}
