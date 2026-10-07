//#include <iostream>
//int main()
//{
	// int d = 10;
	 //int b = 35;
	// std::cout << d + b ;
//}  

//konu:FONKSİYONLAR://

//#include <iostream>

//void mesaj() {
	//std::cout << "merhaba dunya";

//}

//int main()

//{
	//mesaj();
//}

//#include <iostream>

 
//BİLDİRİM ve TANIMLAMA 

//int topla(int sayi1, int sayi2);

//int main()
//{
	//int a = 10;
//	int b = 10;

//	std::cout << topla(a, b);

//}

//int topla(int sayi1 , int sayi2){
//return sayi1 + sayi2;

//}
//FONKSİYONU GERİ ÇAĞIRMA 
//#include <iostream>
//#include <string>

//int topla(int a, int b) {

//	return a + b;
//}

//int getir(int(fint)(int, int)  ) {

	//int a = fint(10, 10);

	//return a;
//}
		
//int main()

//{
	//int b = getir(topla);

//std::cout<< b;

//}

//KONU BAŞLIĞI SATIR İÇİ FONKSİYON (İNLİNE)//

//#include <iostream>
//#include <string>

//inline int topla(int a, int b) {

//	return a + b;
//}

//int main()

//{

//	std::cout << topla(10, 10);

//}



//KONU AKIŞ KONTROLLERİ// İF ÖRNEKLERİ

//#include <iostream>

//int main()/

//{
	//int a = 0;
	//int b = 0;
	//char islem = '+';
	//std::cout << "birinci sayi" << std::endl;

	//std::cin >> a;

	//std::cout << "ikinci sayi" << std::endl;

	//std::cin >> b;

	//std::cout << "islem giriniz" << std::endl;
	//std::cin >> islem;

	//if (islem == '+') {
		//std::cout << "sonuc" << a + b;
	//}
	//else {

	//	std::cout << "islem yok";
	//}
//}*/

//SWİTCH ÖRNEKLERİ : CASE= YAPACAĞIMIZ İŞLEMİ YAZARIZ BREAK=ALTINA YAZDIĞIN İŞLEMİ ÇALIŞTIRIR KULLANILMAZSA TÜM İŞLEMLERİ YAPAR UNUTMAAAAA!!!!!



/*/include <iostream>

int main()

{
	int a = 0;
	int b = 0;
	char islem = '+';
	std::cout << "birinci sayi" << std::endl;

	std::cin >> a;

	std::cout << "ikinci sayi" << std::endl;

	std::cin >> b;

	std::cout << "islem giriniz" << std::endl;
	std::cin >> islem;

	switch (islem) {
	case '+':

		std::cout << "sonuc:" << a + b;

		break;
	case '-':
		std::cout << "sonuc:" << a - b;

		break; 
	case '*':

		std::cout << "sonuc" << a * b;
		break;
	case'/':

		std::cout << "sonuc" << a / b;
	}
}



 
