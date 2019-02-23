#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	//randomzahl wird generiert
	srand(time(NULL));
	int randomZahl = (rand() % 100) + 1;

	//Abfrage
	std::cout << "Errate die Zahl zwischen 1-100. Du hast 7 Versuche!\n";
	std::cout << "Erster Versuch: ";
	int eingabe{ 0 };
	std::cin >> eingabe;	for(int i=2;i<=7;i++)
	{
		if (eingabe < randomZahl)
		{
			std::cout << "zu klein!\n";
			std::cout << i<<". Versuch :";
			std::cin >> eingabe;
		}
		else if (eingabe > randomZahl)
		{
			std::cout << "zu gro"<<static_cast<unsigned char>(225)<<"!\n";
			std::cout << i << ". Versuch :";
			std::cin >> eingabe;
		}
		else if (eingabe == randomZahl)
		{
			std::cout << "Richtig!";
			return true;
		}

	}
	if (eingabe == randomZahl)
	{
		std::cout << "Richtig!";
	}
	else
	{
		std::cout << "\nGame over!\n";
	}
	return 0;
}