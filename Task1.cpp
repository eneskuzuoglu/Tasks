// Project1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


#include <iostream>
#include <functional>
#include <vector>

class Publisher {
public:
	void subscribe(const std::function<void(int, int)>& callback) {
		subscriber = callback;
	}
	void publish(int angle1, int angle2) {
		subscriber(angle1, angle2);
	}
private:
	std::function<void(int, int)>subscriber;
};



void subscriberfunction(int angle1, int angle2) {
	int angle3 = 180 - angle1 - angle2;
	std::cout << "ucgenin ucuncu acisi : " << angle3 << std::endl;


}



int main()
{
	Publisher publisher1;

	int angle1, angle2;
	std::cout << "birinci sayiyi giriniz: ";
	std::cin >> angle1;
	std::cout << "ikinci sayiyi giriniz: ";
	std::cin >> angle2;
	publisher1.subscribe(subscriberfunction);
	publisher1.publish(angle1, angle2);

	return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin

