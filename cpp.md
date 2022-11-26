# Programy

## Trójkąt pitagorejski

```cpp
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	// Trójkat pitagorejski
	int x;
	int y;
	int z;

	cin >> x >> y >> z;

	const int N = 3;
	int liczby[N] = { x,y,z };

	// Sortujemy od najmniejszej do największej
	// bo nie wiemy w jakiej kolejności wpisze użytkownik
	sort(liczby, liczby + N); //sort mamy z biblioteki algorithm

	if (pow(liczby[0], 2) + pow(liczby[1], 2) == pow(liczby[2], 2))
		cout << "TO jest poprawny trojkat pitagorejski";
}
```

## Algorytm Euklidesa
```cpp
#include <iostream>

using namespace std;
int main()
{
	// Algorytm euklidesa
	int a;
	int b;

	cin >> a >> b;

	if (a < 0)
		a = abs(a);

	if (b < 0)
		b = abs(b);

	int reszta = 0;
	// Chcemy pętle do while, ponieważ zwykła pętla while się nigdy nie wykona
	// while(reszta != 0) - nasza reszta na początku przyjmuje wartość 0

	do
	{
		reszta = a % b;

		if (reszta == 0)
		{
			cout << "NWD=" << b;
			break;
		}

		a = b;
		b = reszta;

	} while (reszta != 0);
}
```
## Konwerter temperatur

```cpp
#include <iostream>
using namespace std;

double konwersja(int x, char jednostka) {

	switch (jednostka)
	{
	case 'F':
		return (x - 32) * ((double)5 / 9);
		break;
	case 'C':
		return (x * ((double)9 / 5)) + 32;
		break;
	default:
		cout << "Nieznana jednostka";
		return -1;
		break;
	}
}

int main()
{
	// Konwerter temperatur
	double x;
	char jednostka;

	cin >> x >> jednostka;
	
	switch (jednostka)
	{
	case 'F':
		cout << "Wynik to:" << konwersja(x, jednostka) << " C";
		break;
	case 'C':
		cout << "Wynik to:" << konwersja(x, jednostka) << " F";
		break;
	default:
		cout << "Nieznana jednostka";
		break;
	}
}
```

## Rekurencyjna silnia
```cpp
#include <iostream>
using namespace std;

int obliczSilnie(int x) {
	if (x == 0) {
		return 1;
	}
	else {
		return x * obliczSilnie(x - 1);
	}
}

int main()
{
	int x;
	
	cin >> x;

	int wynik = obliczSilnie(x);

	cout << "Silnia to: " << wynik;
}
```

## Zadania na stringach
### Wyodrębnij nazwisko i imię, do dwóch zmiennych
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string napis;

    // Do getline potrzebujemy biblioteki <string>
	getline(cin, napis);

	// Wyodrędbnienie imienia i nazwiska
	string imie = napis.substr(0, napis.find(' '));
	string nazwisko = napis.substr(napis.find(' ') + 1); //+1 bo chcemy zacząć czytać od pierwszej litery nazwiska, a nie od spacji
}
```

### Zamieniamy miejscami nazwisko z imieniem
```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string napis;

    // Do getline potrzebujemy biblioteki <string>
	getline(cin, napis);

	// Wyodrędbnienie imienia i nazwiska
	string imie = napis.substr(0, napis.find(' '));
	string nazwisko = napis.substr(napis.find(' ') + 1); //+1 bo chcemy zacząć czytać od pierwszej litery nazwiska, a nie od spacji

	// Zamiana miejscami imie i nazwisko
	swap(imie, nazwisko);
}
```
### Stwórz anagramy nazwiska i imienia
```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string napis;

    // Do getline potrzebujemy biblioteki <string>
	getline(cin, napis);

	// Wyodrędbnienie imienia i nazwiska
	string imie = napis.substr(0, napis.find(' '));
	string nazwisko = napis.substr(napis.find(' ') + 1); //+1 bo chcemy zacząć czytać od pierwszej litery nazwiska, a nie od spacji
	
	// Anagram imie
	for (int i = 0; i < imie.length() / 2; i++)
	{
		swap(imie[i], imie[imie.length() - 1 - i]);
	}
	
	//Anagram nazwisko
	for (int i = 0; i < nazwisko.length() / 2; i++)
	{
		swap(nazwisko[i], nazwisko[nazwisko.length() - 1]);
	}
}
```
### wyświetl inicjały NI
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string napis;

    // Do getline potrzebujemy biblioteki <string>
	getline(cin, napis);

	// Wyodrędbnienie imienia i nazwiska
	string imie = napis.substr(0, napis.find(' '));
	string nazwisko = napis.substr(napis.find(' ') + 1); //+1 bo chcemy zacząć czytać od pierwszej litery nazwiska, a nie od spacji

	// Wyświetlenie inicjałów
	cout << nazwisko[0] << imie[0];
}
```
### Zamień miejscami pierwsze litery (Nmie Iazwisko)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string napis;

    // Do getline potrzebujemy biblioteki <string>
	getline(cin, napis);

	// Wyodrędbnienie imienia i nazwiska
	string imie = napis.substr(0, napis.find(' '));
	string nazwisko = napis.substr(napis.find(' ') + 1); //+1 bo chcemy zacząć czytać od pierwszej litery nazwiska, a nie od spacji
	// Zamiana miejscami pierwszych znaków w stringu
	char bufor = imie[0]; // musimy mieć bufor, aby zapamiętać pierwszy znak imienia zanim go podmienimy
	imie[0] = nazwisko[0];
	nazwisko[0] = bufor; // nie możemy tutaj wpisać imie[0], bo ten znak został już nadpisany, z tego powodu mamy bufor!
}
```

### Program, który utworzy string z tabliy char[]

```cpp
#include <iostream>
using namespace std;

int main()
{
	string napis;
	char napisZnakami[] = { 'M', 'a', 'r', 'y', 's', 'i', 'a' };

	for (int i = 0; i < sizeof(napisZnakami) / sizeof(char); i++)
	{
		napis.push_back(napisZnakami[i]);
	}

	cout << napis;
}
```

### Napisz funkcję, która policzy wszystkie litery w zdaniu bez spacji oraz symbolów.
```cpp
#include <iostream>
using namespace std;

int policzLitery(string zdanie) {
	int licznik = 0;
	for (int i = 0; i < zdanie.length(); i++)
	{
		if (zdanie[i] >= 'a' && zdanie[i] <= 'z')
		{
			licznik++;
		}
	}

	return licznik;
}
int main()
{
	string zdanie = "Przykładowe zdanie";
	int wynik = policzLitery(zdanie);
	cout << wynik;
}
```

### Mini szyfrowanie. Napisz funkcję, która zwróci zaszyfrowany tekst. Zasada szyfrowania: kod ASCII każdego znaku zwiększamy o konkretną liczbę.
```cpp
#include <iostream>
using namespace std;

string miniSzyfrowanie(string zdanie, int przesuniecie) {
	for (int i = 0; i < zdanie.length(); i++)
	{
		zdanie[i] = zdanie[i] + przesuniecie;
	}

	return zdanie;
}

int main()
{
	string zdanie = "Przykładowe zdanie";
	string zaszyfrowanyTekst = miniSzyfrowanie(zdanie, 1);
	cout << zaszyfrowanyTekst;
}
```

### Mini szyfrowanie. Napisz funkcję, która zwróci zaszyfrowany tekst. Zasada szyfrowania: przestawiamy znaki w tekście 1-2 3-4 5-6 itd.
```cpp
#include <iostream>
using namespace std;

string miniSzyfrowanie(string zdanie) {
	for (int i = 0; i < zdanie.length(); i++)
	{
		// Wnioskujemy że chcemy zamienić znaki parzyste
		// Dodalismy zabezpieczenie aby nie zmieniać ostatniego znaku, bo po nim nie ma żadnego innego
		if (i % 2 == 0 && i < zdanie.length() - 1) {
			zdanie[i] = zdanie[i + 1];
		}
	}

	return zdanie;
}

int main()
{
	string zdanie = "Marysia";
	string zaszyfrowanyTekst = miniSzyfrowanie(zdanie);
	cout << zaszyfrowanyTekst;
}
```

### Napisz funkcję, która zliczy samogłoski (spółgłoski) w tekście
```cpp
#include <iostream>
using namespace std;

void zliczSpolgloskiOrazSamogloski(string zdanie) {
	char samogloski[] = { 'a', 'e', 'o', 'u', 'x', 'y' };
	char spolgloski[] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'r', 's', 't', 'w', 'z' };

	int ileSamoglosek = 0;
	int ileSpolglosek = 0;
	for (int i = 0; i < zdanie.length(); i++)
	{
		// Ta zmienna pozwala nam na optymalizacje kodu
		bool czySamogloska = false;

		for (int j = 0; j < sizeof(samogloski) / sizeof(char); j++)
		{
			// Pamiętajmy, że druga pętla ma iterator o nazwie j!
			if (samogloski[j] == zdanie[i])
			{
				ileSamoglosek++;
				czySamogloska = true;
				break;
			}
		}

		// Skoro wiemy, że aktualnie odczytywany znak jest samogloska
		// to chcemy przejść do następenj iteracji pętli
		if (czySamogloska == true)
			continue; // chcemy nastepna iteracje, bo aktualny znak na pewno nie jest spolgloska

		for (int j = 0; j < sizeof(spolgloski) / sizeof(char); j++)
		{
			if (spolgloski[j] == zdanie[i])
			{
				ileSpolglosek++;
				break;
			}
		}

	}

	cout << "Spolgloski: " << ileSpolglosek << endl;
	cout << "Samogloski: " << ileSamoglosek << endl;
}

int main()
{
	string napis = "Marysia";
	zliczSpolgloskiOrazSamogloski(napis);
}
```

### Napisz funkcję, która zliczy słowa w zdaniu.
```cpp
#include <iostream>
using namespace std;

void policzSlowa(string zdanie) {
	int iloscSlow = 0;

	for (int i = 0; i < zdanie.length(); i++)
	{
		// Zakładamy, że jeśli ostatni znak nie jest spacją, to jest to jakiś znak końca słowa lub spójnik itd.
		// Doliczamy wtedy taki wyraz jako słowo
		if (i == zdanie.length() - 1 && zdanie[i] != ' ')
		{
			iloscSlow++;
			continue;
		}

		if (zdanie[i] == ' ') {
			iloscSlow++;
		}
	}

	cout << iloscSlow;
}

int main()
{
	string napis = "Marysia uczy sie w Olsztynie";
	policzSlowa(napis);
}
```

### Napisz program, która w podanym wyrazie zamienia wszystkie litery 'a' na 'A' oraz 'b' na 'B', a także podaje liczbę wszystkich dokonanych zmian. Ponadto, jeżeli liczba znaków wyrazu jest nieparzysta to środkowa litera również musi być zamieniona na dużą.

```cpp
#include <iostream>
using namespace std;

int main()
{
	string napis = "Marysia";

	int iloscZmian = 0;
	for (int i = 0; i < napis.length(); i++)
	{
		if (napis[i] == 'a') {
			napis[i] = 'A';

		}
		else if (napis[i] == 'b')
		{
			napis[i] = 'B';
		}
	}

	if (napis.length() % 2 != 0) {
		int indexSrodkowejLitery = napis.length() / 2;
		if (napis[indexSrodkowejLitery] >= 'a' && napis[indexSrodkowejLitery] <= 'z')
			napis[indexSrodkowejLitery] = napis[indexSrodkowejLitery] - 32;
	}

	cout << napis;
}
```

###  Zmień wielkie litery na małe w napisie przeczytanym z klawiatury
```cpp
#include <iostream>
using namespace std;

int main()
{
	string napis = "MARYSIA";

	for (int i = 0; i < napis.length(); i++)
	{
		if (napis[i] >= 'A' && napis[i] <= 'Z')
			napis[i] = napis[i] + 32;
	}

	cout << napis;
}
```

### Napisz funkcję ANAGRAM, która zamieni podany jako parametr tekst na jego odwrotność.

```cpp
#include <iostream>
using namespace std;

string zwrocAnagram(string zdanie) {
	for (int i = 0; i < zdanie.length() / 2; i++)
	{
		swap(zdanie[i], zdanie[zdanie.length() - 1 - i]);
	}

	return zdanie;
}
int main()
{
	string zdanie = "Marysia";
	string anagram = zwrocAnagram(zdanie);

	cout << anagram;
}
```

### Napisz program, sprawdzający, czy zdanie jest palindromem.
```cpp
#include <iostream>
using namespace std;

bool czyPalindrom(string zdanie) {
	for (int i = 0; i < zdanie.length(); i++)
	{
		if (zdanie[i] != zdanie[zdanie.length() - 1 - i])
			return false;
	}

	return true;
}
int main()
{
	string zdanie = "radar";
	bool wynik = czyPalindrom(zdanie);

	cout << wynik;
}
```

### Napisz program, który na wejściu dostaje napis postaci "W Roku Pańskim 1345, władca Henryk 12, na rzecz swoich 143209 poddanych uchwalił dekret o 20 procentowej zniżce podatków". Twoim zadaniem jest wyłuskaś wszystkie liczby (niech będą tylko całkowite) i wyświetlić ich sumę. W tym zadaniu można używać cmath

```cpp
#include <iostream>
using namespace std;

int zamienNaLiczbe(string liczba) {
	int i = 0;
	int num = 0;
	while (liczba[i] != 0)
	{
		num = (liczba[i] - '0') + (num * 10);
		i++;
	}
	return num;
}

int policzSumeLiczb(string zdanie) {
	int suma = 0;
	string liczba;

	for (int i = 0; i < zdanie.length(); i++)
	{
		if (zdanie[i] >= '0' && zdanie[i] <= '9') {
			liczba.push_back(zdanie[i]);

			// czy następny znak to cyfra
			if (zdanie[i + 1] >= '0' && zdanie[i + 1] <= '9')
				continue;

			suma += zamienNaLiczbe(liczba);
			liczba.clear();
		}
	}

	return suma;
}
int main()
{
	string zdanie = "W Roku Pańskim 1345, władca Henryk 12, na rzecz swoich 143209 poddanych uchwalił dekret o 20 procentowej zniżce podatków";
	int wynik = policzSumeLiczb(zdanie);

	cout << wynik;
}
```
