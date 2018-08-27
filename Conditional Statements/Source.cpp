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

		//i still don't understand this at all

		/*int a, b, c, d, e;
		int num1, num2, num3, num4, num5;
		int sum;
		//Poll input for five values
		std::cout << "Enter 5 Numbers";
		std::cin >> a >> b >> c >> d >> e;
		sum = a + b + c + d + e;
			//Check if positive sum
				//Sort in ascending order
			//else if negative sum
				//sort in ascending order
			//else
				//output in same order input

		if (sum > 0)
		{
			if (a < b && a < c && a < d && a < e)
			{
				num1 = a;
				if (b < c && b < d && b < e)
				{
					num2 = b;
					if (c < d && c < e)
					{
						num3 = c;
						if (d < e)
						{
							num4 = d;
							num5 = e;
						}
						else
						{
							num4 = e;
							num5 = d;
						}
					}
					else if (d < c && d < e)
					{
						num3 = d;
						if (c < e)
						{
							num4 = c;
							num5 = e;
						}
						else
						{
							num4 = e;
							num5 = c;
						}
					}
				}
			}
		}
		std::cout << num1 << num2 << num3 << num4 << num5 << std::endl;*/



		//4)

		/*int userInput;
		std::cout << "Enter 1 2 3 or 4\n";
		std::cin >> userInput;
		switch (userInput)
		{
		case 1:
			std::cout << "1\n" << std::endl;
			break;
		case 2:
			std::cout << "2 or 3\n" << std::endl;
			break;
		case 3:
			std::cout << "2 or 3\n" << std::endl;
			break;
		case 4:
			std::cout << "4\n" << std::endl;
			break;
		default:
			std::cout << "Invalid\n" << std::endl;
			break;*/

		//5)

		//result = (value1 < value2) ? 24 : 16;

		//6)

		/*int num1, num2;
		char operation;

		std::cout << "enter 2 numbers\n";
		std::cin >> num1 >> num2;
		std::cout << "add(+), subtract(-), multiply(*), divide(/) or mod(%)\n";
		std::cin >> operation;

		switch (operation)
		{
		case '+':
			std::cout << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << num1 - num2 << std::endl;
			break;
		case '*':
			std::cout << num1 * num2 << std::endl;
			break;
		case '/':
			std::cout << num1 / num2 << std::endl;
			break;
		case '%':
			std::cout << num1 % num2 << std::endl;
			break;
		}*/

		//7)

		/*int month;
		std::cout << "input a number that represents a month of the year" << std::endl;
		std::cin >> month;
		switch (month)
		{
		case 1:
			std::cout << "31 days." << std::endl;
			break;
		case 2:
			std::cout << "28 days and 29 days in leap years." << std::endl;
			break;
		case 3:
			std::cout << "31 days." << std::endl;
			break;
		case 4:
			std::cout << "30 days." << std::endl;
			break;
		case 5:
			std::cout << "31 days." << std::endl;
			break;
		case 6:
			std::cout << "30 days." << std::endl;
			break;
		case 7:
			std::cout << "31 days." << std::endl;
			break;
		case 8:
			std::cout << "31 days." << std::endl;
			break;
		case 9:
			std::cout << "30 days." << std::endl;
			break;
		case 10:
			std::cout << "31 days." << std::endl;
			break;
		case 11:
			std::cout << "30 days." << std::endl;
			break;
		case 12:
			std::cout << "31 days." << std::endl;
			break;*/


		//8)

		/*bool flag = true;
		int numPos = 35, numNeg = -55;
		char frstChar = 'J', scndChar = 'O';
		double frstPrice = 5.60;

		/*a. numPos > numNeg - true
		b. frstChar > scndChar - false
		c. !(numPos + numNeg) - false
		d. (numPos == -30) || (numNeg == -55) - true
		e. (frstPrice >= 4.1) && (frstPrice <= 9.9) - true
		f. !flag && (scndChar <= ‘R’) - false
		g. (numPos < 66) || (flag && numPos > 35) - true
		h. ++numPos == 36 - true
		i. numPos++ == 36 - true
		j. (frstChar == ‘j’) || (frstChar == ‘J’) - true*/

		//9)

		/*a. (a || b) || (a && b) - true
		b. !((!a) && (a)) || (a && b) - true
		c. !((5 || a) || (!b)) && (!(a) && b) - false
		d. a || b && a - true
		e. !a&&b - true*/

	}

	system("pause");
}