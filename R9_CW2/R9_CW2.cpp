// R9_CW2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

void strcount(const std::string& in);

int main()
{
	using namespace std;
	string input = "";

	cout << "Wprowadz wiersz: " << endl;

	getline(cin, input); //	cin >> input;
	while (input.length())
	{
		strcount(input);
		cout << "Wporwadz nastepny wiersz (wiersz pusty konczy wprowadzanie)" << endl;
		getline(cin, input);
	}
	cout << "Koniec!" << endl;

	return 0;
}

void strcount(const std::string& in)
{
	using namespace std;
	static int total = 0;
	int count = 0;

	count += in.length();
	total += count;

	cout << "\"" << in << "\" zawiera ";
	cout << count << " znakow" << endl;
	cout << "Lacznie " << total << " znakow" << endl;

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
