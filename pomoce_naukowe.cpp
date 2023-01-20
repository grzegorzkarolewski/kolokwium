// ConsoleApplication17.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool szukaj_a(string s) {
	return s.find('a') != std::string::npos;
}
void wypisz_na_ekranie(string zdanie) {
	cout << zdanie << endl;
}

void wypisz_na_ekranie_liczby(int liczby) {
	cout << liczby << endl;
}

int main()
{
	string test = "Marsia";
	size_t wynik = test.find('z');
	size_t xxx = std::string::npos;
	//max element
	vector<double> moj_wektor = { 1,2,3,4,5,60,8,9,10,11,12,13,14,15 }; 
	double max = 0;
	for (int i = 0; i < moj_wektor.size(); i++) {
		if (moj_wektor[i] > max) 
		{
			max = moj_wektor[i];

		}
	}	 
	cout << max<<endl;

	//max i min element sposób 2 

	vector<double> moj_vc1 = { 1,2,3,4,5,60,8,9,10,11,12,13,14,15 };
	vector<double> ::iterator itm;
	itm = max_element(moj_vc1.begin(), moj_vc1.end());
	cout << moj_vc1[itm - moj_vc1.begin()] << '\n';

	itm = min_element(moj_vc1.begin(), moj_vc1.end());
	cout << moj_vc1[itm - moj_vc1.begin()] << '\n';

	moj_vc1.push_back(44);


	vector<double> moj_wektor1 = { 1,2,3,4,5,60,8,9,10,11,12,13,14,15,188};
	vector <double > ::iterator  pozycja_max = max_element(moj_wektor1.begin(), moj_wektor1.end());
	cout << moj_wektor1[pozycja_max - moj_wektor1.begin()]<<endl;

	vector<double> moj_wektor2 = { 1,2,3,4,-5,60,8,9,10,11,12,13,14,15,188 };
	vector <double > ::iterator  pozycja_min = min_element(moj_wektor2.begin(), moj_wektor2.end());
	cout << moj_wektor2[pozycja_min - moj_wektor2.begin()]<<endl;

	vector<string> moj_wektor3 = { "kot","malpa", "kon", "pies", "zaba" };
	for_each(moj_wektor3.begin(), moj_wektor3.end(), [](string i) {cout << i << ' '; });
	for_each(moj_wektor3.begin(), moj_wektor3.end(), wypisz_na_ekranie);

	for (int i = 0; i < moj_wektor3.size(); i++)
		if (szukaj_a(moj_wektor3[i])) cout << moj_wektor3[i] << ' ';
	 


	vector<char> wektor_charow = { 'G','r','z','e','g','o','r','z'};
	for_each(wektor_charow.begin(), wektor_charow.end(), [](char i) {cout << i << ' '; });

	vector<int>wektor_intow = { 1,2,3,4,5,6,7,8,9,10 };
	for_each(wektor_intow.begin(), wektor_intow.end(), wypisz_na_ekranie_liczby);

	//all_of
	vector <int>v = { 2,6,6,-8,4 };
	if (all_of(v.begin(), v.end(), [](int i) {return i % 2 == 0; }))
	{
		cout << "Wszystkie liczby sa podzielne przez 2" << endl;
	}
	


	//any_0f
	vector <int>v1 = { 2,6,6,-8,4 };
	if (any_of(v.begin(), v.end(), [](int i) {return i % 2 == 0; }))
	{
		cout << "Przynajmniej jeden element tablicy jest podzielny przez 2" << endl;
	}
	//none_of
	vector<char> v2 = { 'a','b','c','d','e' };
	if (none_of(v2.begin(), v2.end(), [](char znak) {return znak == 'a'; }))
		cout << "nie ma litery a  " << endl;
	else cout << "Jest litera a" << endl;

	//count_if 
	vector <int>v3 = { 2,6,6,-8,4 };
	int n= (count_if(v3.begin(), v3.end(), [](int i) {return i % 2 == 0; }));
	{
		cout << "Ilosc liczb podzielnych przez 2: " <<n<< endl;
	}


	vector<double> moj_wektor_sumy = { 1,2,3,4,5,60,8,9,10,11,12,13,14,15 };
	double suma = 0;
	for (int i = 0; i < moj_wektor_sumy.size(); i++) {
		suma += moj_wektor_sumy[i];
	}
	cout << suma<<endl;


	vector<double> moj_wektor_iloczynu = { 1,2,3,4,5,6,8,9,10,11,12,13,14,15 };
	double iloczyn = 1;
	for (int i = 0; i < moj_wektor_iloczynu.size(); i++) {
		iloczyn *= moj_wektor_iloczynu[i];
	}
	cout << iloczyn << endl;


	vector<double> moj_wektor_sumaDwochwektorow = {};
	double suma_dw = 0;
	for (int i = 0; i < moj_wektor_iloczynu.size(); i++)
	{
		suma_dw+=moj_wektor_sumy[i] + moj_wektor_iloczynu[i];
		
	}
	cout << suma_dw;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
