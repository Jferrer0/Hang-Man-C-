#include <iostream>

using namespace std;

bool compare(string a)
{
	char letter;

	cout << "Please try and guess a letter: ";
	cin >> letter;

	bool correctGuess = false;

	string guess = { "_ _ _ _ _" };
	
	cout << guess << endl;

	for (int i = 0; letter != a[i]; i++)
	{
		if (a[i] == letter)
		{
			guess[i] = a[i];

			correctGuess = true;

			cout << guess << endl;
		}
	}

	return correctGuess;
}

int main()
{
	bool solved = false;

	int fails = 0;

	string word = { "Korea" };

	cout << word.size() << endl;

	while (solved == false)
	{
		bool guess = compare(word);

		if (guess == false)
		{
			fails++;
		}

		if (fails == 6)
		{
			cout << "You lose" << endl;
		}
	}
}