
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ // This gathers and validates all of the user input needed for this program.
	int minimum_number, maximum_number;
	cout << "Please enter a range that you would like to find all of the prime numbers in." << endl
		 << "First enter the minimum number in the range, then the maximum number" << endl;

	cout << "What is the minimum number?" << endl;
	cin >> minimum_number;

	if (cin.fail())
	{
		do
		{
			cin.clear();
			cin.ignore(1000, '\n'); // This discards the input in the stream, and in this case it will discard ALL of the input. It's size is as big as the stream.
									// cin.ignore(std::numeric_limits<streamsize>::max(), '/n'
			cout << "No silly, please type in a range of numbers that is the SMALLER number first, then the BIGGER number last. Hit enter between each entry. Do not enter any characters." << endl;

			cin >> minimum_number;
		} while (cin.fail());
	}

	cout << "What is the maximum number?" << endl;
	cin >> maximum_number;
	if (cin.fail())
	{
		do
		{
			cin.clear();
			cin.ignore(1000, '\n'); // This discards the input in the stream, and in this case it will discard ALL of the input. It's size is as big as the stream.
									// cin.ignore(std::numeric_limits<streamsize>::max(), '/n'

			cout << "No silly, please type in a range of numbers that is the SMALLER number first, then the BIGGER number last. Hit enter between each entry. Do not enter any characters." << endl;

			cin >> maximum_number;
		} while (cin.fail());
	}

	if (minimum_number > maximum_number)
	{
		int temp, temp2;

		temp = minimum_number;	// min assigned to temp
		temp2 = maximum_number; // max assigned to temp2

		minimum_number = temp2; // temp2 assigned to min
		maximum_number = temp;	// temp assigned to max

		cout << "min " << minimum_number << endl;
		cout << "max " << maximum_number << endl;
	}

	bool is_prime = true;

	while (minimum_number <= maximum_number)
	{
		for (int x = 2; x < minimum_number; ++x)
		{
			if (minimum_number % x == 0)
			{
				is_prime = false;
				break; // as soon as it meets the condition, it breaks out of this loop and goes back to the while loop
			}

			else
			{
				is_prime = true;
			}
		}

		if (is_prime == true)
		{
			cout << minimum_number << endl;
		}
		++minimum_number;
	}
}

// A back up of previous loop
/*
for (minimum_number; minimum_number <= maximum_number; minimum_number++)
	{
		if (minimum_number % 2 == 0)
		{
			is_prime = false;
		}

		else if (minimum_number % 5 == 0)
		{
			is_prime = false;
		}

		else
		{
			is_prime = true;
		}

		if (is_prime)
		{
			cout << minimum_number << endl;
		}
	}
}


*/
