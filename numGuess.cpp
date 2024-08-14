#include <iostream>
using namespace std;

int main()
{
	int num, guess, count = 0;
	num = rand() % 100 + 1; 
	cout << "Number Game"<<endl;

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		count++;

		if (guess > num)
			cout << "Too high!"<<endl;
		else if (guess < num)
			cout << "Too low!"<<endl;
		else
			cout << "Correct! You got it in " << count << " guesses!"<<endl;
	} while (guess != num);

	return 0;
}