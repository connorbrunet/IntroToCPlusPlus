#include <iostream>

int main()
{
	{
		int count;
		for (int count = 0; count < 10; count++)
		{
			std::cout << count << std::endl;
		}
	}

	{
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
	}

	{
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
	}

	{
		int i = 0;
		for (int i = 0; i < 12; i += 2)
			if (i <= 12)
			{
				std::cout << i << std::endl;
			}
	}

	//Exercises
	{
		//1)
		{
			int i = 0;
			for (int i = 100; i > 0;)
			{
				i = i - 2;
				std::cout << i << std::endl;
			}
		}

		//2)
		{
			int o = 0;
			for (int o = 0; o < 101; o++)
			{
				if (o % 5 == 0 && o % 3 == 0)
				{
					std::cout << "FizzBuzz\n";
				}
				else if (o % 3 == 0)
				{
					std::cout << "Fizz\n";
				}

				else if (o % 5 == 0)
				{
					std::cout << "Buzz\n";
				}
				else
				{
					std::cout << o << std::endl;
				}
			}
		}

		//3)
		{
			int p;
			int sum = 0;

			for (int p = 0; p <= 1000; p++)
			{
				if (p % 5 == 0 || p % 3 == 0)
				{
					sum += p;
				}
			}

			std::cout << sum << std::endl;
		}

		//4)

		//1)
		{
			int numb = 100;
			while (numb > 0)
			{
				std::cout << numb << std::endl;
				numb = numb - 2;
			}
		}

		//2)
		{
			int megaNum = 0;
			while (megaNum <= 100)
			{
				if (megaNum % 5 == 0 && megaNum % 3 == 0)
				{
					std::cout << "FizzBuzz" << std::endl;
				}
				else if (megaNum % 5 == 0)
				{
					std::cout << "Buzz" << std::endl;
				}
				else if (megaNum % 3 == 0)
				{
					std::cout << "Fizz" << std::endl;
				}
				else
				{
					std::cout << megaNum << std::endl;
				}
				megaNum++;
			}
		}

		//3)
		{
			int ultranum = 0;
			int ultrasum = 0;

			while (ultranum <= 1000)
			{
				ultranum++;
				if (ultranum % 5 == 0 || ultranum % 3 == 0)
				{
					ultrasum += ultranum;
				}
			}

			std::cout << ultrasum << std::endl;
		}
	}

	system("pause");
}