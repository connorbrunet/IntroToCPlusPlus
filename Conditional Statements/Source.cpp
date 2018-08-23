#include <iostream>

int main()
{
	//Grade
	{

		/*int grade;
		char gradeLetter;

		std::cout << "Input a grade" << std::endl;
		std::cin >> grade;

		if (grade >= 90)
		{
			gradeLetter = 'A';
		}

		else if (grade >= 80)
		{
			gradeLetter = 'B';
		}

		else if (grade >= 70)
		{
			gradeLetter = 'C';
		}

		else if (grade >= 60)
		{
			gradeLetter = 'D';
		}

		else
		{
			gradeLetter = 'F';
		}

		std::cout << gradeLetter << std::endl;*/

	}

	//FizzBuzz
	{
		/*int input = 0;
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
		}*/
	}

	//Add or Subtract
	{
		/*int lhs;
		int rhs;
		char op;

		std::cout << "Input 2 numbers\n";
		std::cin >> lhs >> rhs;
		std::cout << "Do you want to Add(+) or Subtract(-)?\n";
		std::cin >> op;
		switch (op)
		{
		case '+':
			std::cout << lhs + rhs << std::endl;
			break;
		case '-':
			std::cout << lhs - rhs << std::endl;
			break;
		default:
			std::cout << "Invalid math operation\n";
			break;
		}*/
	}

	//Low Health
	{

		/*int health;
		char potionAsk;
		int potion;
		potion = 25;

		std::cout << "Enter health value 0 to 50\n";
		std::cin >> health;

		if (health > 0)
		{
			std::cout << "You are alive.\n";

			if (health <= 25)
			{
				std::cout << "Critical HP\n";
			}
			std::cout << "Health at " << health << "." << std::endl;
		}

		else if (health >= 0)
		{
			std::cout << "You died.";
		}*/

	}

	//Homework

	{

		//1)

		/*int y, x;
		y = 0;

		if (y == 0)
		{
			x = 100;
		}

		std::cout << x << std::endl;*/

		//2)

		/*int num1, num2;

		std::cout << "Enter 2 Numbers" << std::endl;
		std::cin >> num1 >> num2;

		if (num1 < num2)
		{
			std::cout << num2;
		}
		else
			std::cout << num1;*/

		//3)
		
		int a, b, c, d, e;
		std::cout << "Enter 5 Numbers";
		std::cin >> a >> b >> c >> d >> e;

		if (a > b && a > c && a > d && a > e)
		{
			std::cout << a << b << c << d << e;
		}


	}

	system("pause");
}