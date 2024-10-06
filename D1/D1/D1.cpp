/****************************************************************************
**					               İSMAİL DEMİR
****************************************************************************/




#include <iostream>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;

struct tarih {
	int gün, ay, yil;
};

struct ogrenci {
	string adi;
    string soyadi;
	int no;
	int kısasınav1;
	int kısasınav2;
	int ödev1;
	int ödev2;
	int proje;
	int vize;
	int final;
	int basarinotu;

	
	tarih dogumtarihi;
};

void harfnotu(int sayinot, string harfnotu)           //Puanı harf notuna çeviren fonksiyonu tanımladım
{

	if (sayinot >= 90) {
		harfnotu = "AA";
	}
	else if (sayinot >= 80 && sayinot < 90) {
		harfnotu = "AB";
	}
	else if (sayinot >= 70 && sayinot < 80) {
		harfnotu = "BB";
	}
	else if (sayinot >= 60 && sayinot < 70) {
		harfnotu = "BC";
	}
	else if (sayinot >= 50 && sayinot < 60) {
		harfnotu = "CC";
	}
	else if (sayinot >= 40 && sayinot < 50) {
		harfnotu = "CD";
	}
	else if (sayinot >= 30 && sayinot < 40) {
		harfnotu = "DD";
	}
	else if (sayinot >= 20 && sayinot < 30) {
		harfnotu = "DF";
	}
	else {
		harfnotu = "FF";
	}
}



void listeleme(string x, string y) {           //Sınıf listesi için tanımladığım fonksiyon
	
		cout  << x << "\t" << y << endl;


	
}



void enyükseknot(int a) {              //Sınıfın en yüksek notunu hesaplaması için tanımladığım fonksiyon

	cout << "Sınıfın en yüksek notu  : " << a;
}


int main()
{
	setlocale(LC_ALL, "Turkish");
	string isim[30] = { "ayse","fatma","namik","ali","ahmet","mehmet","cemile","deniz","yusuf","mustafa","nazli","zeynep","omer","elif","canan","irem","ceren","celal","adem","zelis","umit","eymen","Alp","Cem","Yigit","Emre","Kutay","Tuna","Idil","Eylül" };
	string soyad[30] = { "Yılmaz","Kaya","Demir","Celik","Sahin","Yildiz","Yildirim","Ozturk","Aydin","Ozdemir","Arslan","Dogan","Kilic","Aslan","Cetin","Kara","Koc","Kurt","Ozkan","Simsek","Polat","Ozcan","Korkmaz","Cakır","Demir","Al","Altin","Yormaz","Celik","Altan" };

	ogrenci ogrenci1[100] = {};         //100 kişilik sınıf için ogrenci1 kümesini tanımladım

	int secenek;
	cout << "Hangi secenegi istiyorsunuz \?      (secenek1: 1 veya secenek2: 2 )" << endl;    
	cin >> secenek;


	switch (secenek) {                 //Secenek 1 ve 2 icin switch-case tanımladım
	
	
	case 1:                           //SEÇENEK 1

		for (int i = 0; i < 100; i++) {              //Belli bir yüzdelik de ve belli aralık da rasgele puan alması gereken öğrenciler için tanımladığım fonksiyon
			ogrenci1[i].adi = isim[rand() % 30];   
			ogrenci1[i].soyadi = soyad[rand() % 30];

			for (int j = 0; j < 10; j++) {

				ogrenci1[j].kısasınav1 = rand() % 41;
				ogrenci1[j].kısasınav2 = rand() % 41;
				ogrenci1[j].ödev1 = rand() % 41;
				ogrenci1[j].ödev2 = rand() % 41;
				ogrenci1[j].proje = rand() % 41;
				ogrenci1[j].vize = rand() % 41;
				ogrenci1[j].final = rand() % 41;
			}

			for (int k = 10; k < 60; k++) {
				ogrenci1[k].kısasınav1 = 40 + rand() % 31;
				ogrenci1[k].kısasınav2 = 40 + rand() % 31;
				ogrenci1[k].ödev1 = 40 + rand() % 31;
				ogrenci1[k].ödev2 = 40 + rand() % 31;
				ogrenci1[k].proje = 40 + rand() % 31;
				ogrenci1[k].vize = 40 + rand() % 31;
				ogrenci1[k].final = 40 + rand() % 31;

			}

			for (int l = 60; l < 75; l++) {
				ogrenci1[l].kısasınav1 = 70 + rand() % 11;
				ogrenci1[l].kısasınav2 = 70 + rand() % 11;
				ogrenci1[l].ödev1 = 70 + rand() % 11;
				ogrenci1[l].ödev2 = 70 + rand() % 11;
				ogrenci1[l].proje = 70 + rand() % 11;
				ogrenci1[l].vize = 70 + rand() % 11;
				ogrenci1[l].final = 70 + rand() % 11;

			}

			for (int m = 75; m < 100; m++) {
				ogrenci1[m].kısasınav1 = 80 + rand() % 21;
				ogrenci1[m].kısasınav2 = 80 + rand() % 21;
				ogrenci1[m].ödev1 = 80 + rand() % 21;
				ogrenci1[m].ödev2 = 80 + rand() % 21;
				ogrenci1[m].proje = 80 + rand() % 21;
				ogrenci1[m].vize = 80 + rand() % 21;
				ogrenci1[m].final = 80 + rand() % 21;

			}
		}

		for (int u = 0; u < 100; u++) {             //100 öğrencinin başarı notunu hesaplaması için tasarladığım döngü

			ogrenci1[u].basarinotu = ((ogrenci1[u].kısasınav1 * 7 / 100) + (ogrenci1[u].kısasınav2 * 7 / 100) + (ogrenci1[u].ödev1 / 10) + (ogrenci1[u].ödev2 / 10) + (ogrenci1[u].proje * 16 / 100) + (ogrenci1[u].vize / 2)) * 55 / 100 + (ogrenci1[u].final * 45 / 100);




		}
		
		int secenek2;
		while (true) {              //Yanlış seçim olmaması için tanımladığım döngülü menü 
			
			cout << "1 - 20 kişilik sınıfın listesini yazdırma\n";
			cout << "2 - Sınıfın en yüksek notu hesaplama\n";
			cout << "3 - Sınıfın en düşük notu hesaplama\n";
			cout << "4 - Sınıfın ortalaması hesaplama\n";
			cout << "5 - Sınıfın standart sapması hesaplama\n";
			cout << "6 - Başarı notu aralığın da olanlar listelesi(50 - 70)\n";
			cout << "7 - Başarı notu değerinin altında olan öğrencilerin listesi(0 - 50)\n";
			cout << "8 - Başarı notu belirtilen değerin üstünde olan öğrencilerin listesi(70 - 100)\n\n\n";
			cin >> secenek2;

			if (secenek2 > 0 && secenek2 <= 8) {
				break;
			}
			else {
				cout << "HATAlI sayı girdiniz !!!!!"<<endl;
			}
		}



		if (secenek2 == 1) {               //menü 1 de ki rondom 20 kişilik liste döngüsü                        
			for (int w = 0; w < 20; w++) {
				listeleme(ogrenci1[w].adi, ogrenci1[w].soyadi);
			}system("pause");              //sistemi durdurur ve bir tuşa basınca devam ettirir  
			                                          
			system("cls");

			for (int w = 20; w < 40; w++) {
				listeleme(ogrenci1[w].adi, ogrenci1[w].soyadi);
			}system("pause");

			system("cls");


			for (int w = 40; w < 60; w++) {
				listeleme(ogrenci1[w].adi, ogrenci1[w].soyadi);
			}system("pause");

			system("cls");


			for (int w = 60; w < 80; w++) {
				listeleme(ogrenci1[w].adi, ogrenci1[w].soyadi);
			}system("pause");

			system("cls");


			for (int w = 80; w < 100; w++) {
				listeleme(ogrenci1[w].adi, ogrenci1[w].soyadi);
			}system("pause");

			system("cls");


		}

		else if (secenek2 == 2) {       //menü2, sınıfın en yüksek puanını bulması için döngü

			int eb = ogrenci1[0].basarinotu;
			for (int q = 0; q < 100; q++) {
				if (ogrenci1[q].basarinotu > eb) {
					eb = ogrenci1[q].basarinotu;

				}

			}
			cout << "Sınıfın en yüksek puanı : " << eb << endl;
		}



		else if (secenek2 == 3) {   //menü3, sınıfın en düşük puanını bulması için döngü

			int ek = ogrenci1[0].basarinotu;
			for (int q = 0; q < 100; q++) {
				if (ogrenci1[q].basarinotu < ek) {
					ek = ogrenci1[q].basarinotu;

				}

			}
			cout << "Sınıfın en düşük puanı : " << ek << endl;

		}

		else if (secenek2 == 4) {      //menü4, sınıfın ortalamsını bulması için tasarladıım döngü


			int a = ogrenci1[0].basarinotu;
			for (int q = 1; q < 100; q++) {

				a += ogrenci1[q].basarinotu;


			}
			a = a / 100;
			cout << "Sınıfın ortalaması puanı : " << a << endl;



		}

		else if (secenek2 == 5) {            //menü5, sınıfın standart sapmasını bulması için tasarladıım döngü
			int a = ogrenci1[0].basarinotu;
			for (int q = 1; q < 100; q++) {

				a += ogrenci1[q].basarinotu;


			}
			a = a / 100;

			int uzaklık = 0;
			int v = 0;

			for (int q = 0; q < 100; q++) {
				uzaklık = ogrenci1[q].basarinotu - a;

				uzaklık = uzaklık * uzaklık;

				v += uzaklık;
			}
			v = v / 99;
			v = sqrt(v);

			cout << "Sınıfın standart sapması :" << v << endl;
		}

		else if (secenek2 == 6) {        //menü6, Sınıf da başarı notu 50 - 70 aralığın da olanlar listelesini yazdırmak için tasarladığım döngü


		cout << " Başarı notu aralığın da olanlar listelesi(50 - 70)\n";
			cout << "İSİM \t " << "SOYAD\t " << "NOT" << endl;
			for (int q = 0; q < 100; q++) {

				int note = ogrenci1[q].basarinotu;




				if (note >= 50 && note <= 70) {


					cout << ogrenci1[q].adi << "\t " << ogrenci1[q].soyadi << "\t " << ogrenci1[q].basarinotu << endl;

				}
			}

		}

		else if (secenek2 == 7) {           //menü7, Sınıf da başarı notunun altın da olanlar listelesini yazdırmak için tasarladığım döngü

		cout << "Başarı notu değerinin altında olan öğrencilerin listesi(0 - 50)\n";

		cout << "İSİM \t " << "SOYAD\t " << "NOT" << endl;
		for (int q = 0; q < 100; q++) {

			int note = ogrenci1[q].basarinotu;




			if (note < 50 ) {


				cout << ogrenci1[q].adi << "\t " << ogrenci1[q].soyadi << "\t " << ogrenci1[q].basarinotu << endl;

			}
		}

}

		else if (secenek2 == 8) {    //menü8, Sınıf da başarı notundan yüksek puanı olanların listelesini yazdırmak için tasarladığım döngü


		cout << "Başarı notu belirtilen değerin üstünde olan öğrencilerin listesi(70 - 100)\n";

		cout << "İSİM \t " << "SOYAD\t " << "NOT" << endl;
		for (int q = 0; q < 100; q++) {

			int note = ogrenci1[q].basarinotu;




			if (note > 70) {


				cout << ogrenci1[q].adi << "\t " << ogrenci1[q].soyadi << "\t " << ogrenci1[q].basarinotu << endl;

			}
		}
}

		

			break;
	case 2:                       //SEÇENEK 2
		for (int i = 0; i < 100; i++) {                 //100 Öğrencinin verilerini almak için tasarladığım döngü

			cout << "Öğrencinin ismini giriniz : " << endl;      
			cin >> ogrenci1[i].adi;

			cout << "Öğrencinin soyadını giriniz : " << endl;
			cin >> ogrenci1[i].soyadi;

			cout << "Öğrencinin numarasını giriniz : " << endl;
			cin >> ogrenci1[i].no;



			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " kısa sınav 1 puanını giriniz : " << endl;   //puanların 0 ile 100 arasın da olması için  tasarladğım döngüler
				cin >> ogrenci1[i].kısasınav1;
				if (ogrenci1[i].kısasınav1 <= 100 && ogrenci1[i].kısasınav1 >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}

			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " kısa sınav 2 puanını giriniz : " << endl;
				cin >> ogrenci1[i].kısasınav2;
				if (ogrenci1[i].kısasınav2 <= 100 && ogrenci1[i].kısasınav2 >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}

			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " ödev 1 puanını giriniz : " << endl;
				cin >> ogrenci1[i].ödev1;
				if (ogrenci1[i].ödev1 <= 100 && ogrenci1[i].ödev1 >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}


			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " ödev 2 puanını giriniz : " << endl;
				cin >> ogrenci1[i].ödev2;
				if (ogrenci1[i].ödev2 <= 100 && ogrenci1[i].ödev2 >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}

			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " proje puanını giriniz : " << endl;
				cin >> ogrenci1[i].proje;
				if (ogrenci1[i].proje <= 100 && ogrenci1[i].proje >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}

			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " vize puanını giriniz : " << endl;
				cin >> ogrenci1[i].vize;
				if (ogrenci1[i].vize <= 100 && ogrenci1[i].vize >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}

			while (true) {
				cout << ogrenci1[i].adi << " " << ogrenci1[i].soyadi << " final puanını giriniz : " << endl;
				cin >> ogrenci1[i].final;
				if (ogrenci1[i].final <= 100 && ogrenci1[i].final >= 0) {
					break;
				}
				else {
					cout << "HATALI PUAN GİRDİNİZ !!!" << endl;
				}

			}

		}

		break;



		}
	}


	
	

	



