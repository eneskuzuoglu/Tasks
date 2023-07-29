#include <iostream>
#include <valarray>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Missing parameter." << std::endl;
        return 1;
    }

    // Returning Constant 
    int katsayi = std::atoi(argv[1]);

    // Returning line numver
    int satir_sayisi = std::atoi(argv[2]);

    if (argc != 3 + satir_sayisi) {
        std::cerr << "Girilen matris elemanları sayısı satır sayısına eşit değil." << std::endl;
        return 1;
    }

    
    std::valarray<int> matris(satir_sayisi);

  
    for (int i = 0; i < satir_sayisi; ++i) {
        matris[i] = std::atoi(argv[3 + i]);
    }

    // multiply matrix and constant 
    std::valarray<int> sonuc = matris * katsayi;

    // writing to terminal 
    int sutun_sayisi = sonuc.size();
    for (int i = 0; i < satir_sayisi; ++i) {
        for (int j = 0; j < sutun_sayisi; ++j) {
            std::cout << sonuc[i * sutun_sayisi + j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
