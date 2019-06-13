#include <iostream>

using namespace std;

void compare(string a, bool b, string& c, int& d)
{
	char letter;

	cout << "Please try and guess a letter: ";
	cin >> letter;

	cout << c << endl;
	cout << d << endl;

	bool correctGuess = false;

	for (int i = 0; i < a.size(); i++)
	{
		if (letter == a[i])
		{
			c[i] = a[i];

			correctGuess = true;

			cout << c << endl;
		}
	}

	if (correctGuess == false)
	{
		d++;
	}

	if (d == 0)
	{
		cout << "-----" << endl;
		cout << "  |  " << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
	}

	if (d == 1)
	{
		cout << "-----" << endl;
		cout << "  |  " << endl;
		cout << "--O--" << endl;
		cout << "     " << endl;
		cout << "     " << endl;
		cout << "     " << endl;
	}

	if (d == 2)
	{
		cout << "-----" << endl;
		cout << "  |  " << endl;
		cout << "--O--" << endl;
		cout << "--|--" << endl;
		cout << "     " << endl;
		cout << "     " << endl;
	}

	if (d == 3)
	{
		cout << "-----" << endl;
		cout << "  |  " << endl;
		cout << "--O--" << endl;
		cout << "-/|\-" << endl;
		cout << "     " << endl;
		cout << "     " << endl;
	}

	if (d == 4)
	{
		cout << "-----" << endl;
		cout << "  |  " << endl;
		cout << "--O--" << endl;
		cout << "-/|\-" << endl;
		cout << "--|--" << endl;
		cout << "     " << endl;
	}
}

int main()
{
	int fails = 0;

	bool solved = false;

	string word = { "Korea" };

	string wordGuess = { "-----" };

	cout << word.size() << endl;



	while (solved == false)
	{
		compare(word, solved, wordGuess, fails);

		if (wordGuess == word)
		{
			solved = true;

			cout << "You Win";
		}
		
		if (fails == 5)
		{
			cout << "-----" << endl;
			cout << "  |  " << endl;
			cout << "--O--" << endl;
			cout << "-/|\-" << endl;
			cout << "--|--" << endl;
			cout << "-/ \-" << endl;
			cout << "" << endl;
			cout << "YOU LOSE" << endl;

			solved = true;

		}
	}
}