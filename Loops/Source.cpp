#include <iostream>

int main()
{
	/*{
		int count;
		for (int count = 0; count < 10; count++)
		{
			std::cout << count << std::endl;
		}
	}*/

	/*{
		int i = 1;
		while (i <= 10)
		{
			std::cout << i;
			i++;
			if (i < 11)
			{
				std::cout << ",";
			}
		}
		system("cls");
	}*/

	/*{
		char input;
		input = 0;

		do
		{
			std::cout << "press 'q' or 'Q' to close the application." << std::endl;
			std::cin >> input;
		} while (input != 'q' && input != 'Q');

		std::cout << "closing application";
		std::cout << std::endl;

		system("cls");
	}*/

	/*{
		int i = 0;
		for (int i = 0; i < 12; i += 2)
			if (i <= 12)
			{
				std::cout << i << std::endl;
			}
	}*/

	//Homework

	int input = 0;
	std::cout << "Enter a number\n";
	std::cin >> input;

	if (input % 5 == 0 && input % 3 == 0)
	{
		std::cout << "FizzBuzz\n";
	}
	else if (input % 3 == 0)
	{
		std::cout << "Fizz\n";
	}

	else if (input % 5 == 0)
	{
		std::cout << "Buzz\n";
	}
	else
	{
		std::cout << input << std::endl;
	}

	system("pause");
}