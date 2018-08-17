#include <iostream>

int main()

{
	{
		int number;
		number = 7;
		std::cout << number << std::endl;
		std::cout << number + 17 << std::endl;
		std::cout << number + 32 << std::endl;

		int numA;
		int numB;
		int sum;
		numA = 14;
		numB = 2;
		sum = numA + numB;
		std::cout << sum << std::endl;

		float numC;
		float numD;
		int sum2;
		numC = 25.5f;
		numD = 15.5f;
		sum2 = numC + numD;
		std::cout << sum2 << std::endl;

		int userInput;
		std::cout << "Input a whole number." << std::endl;
		std::cin >> userInput;
		std::cout << "You entered.. " << userInput << std::endl;

		system("pause");
	}

	// Exercizes

	{
		// A)
		// Expect 14, Actual 14

		int numberA = 5;

		numberA = 9;
		numberA = 11;
		numberA = 14;

		std::cout << "A) " << numberA << std::endl;

		// B)
		// Expect 9, Actual 9

		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;

		// C)
		// Expect 21, Actual 21

		int numberC = 3;
		numberC = 7;
		numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl;

		// D)
		// Expect 3, Actual 3

		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;

		// E)
		// Expect 6, Actual 6

		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;

		// F)
		// Expect 6.5, Actual 6.5
		float y = 13;
		y = y / 2;
		std::cout << "F) " << y << std::endl;
	}

	// Celsius to Fahrenheit
	{
		//takes Celsius inputted from user and converts it into Fahrenheit

		float degCelsius = 78.0f;
		float degFahrenheit = 0.0f; // Modify this variable below.

		std::cout << "Enter Celsius tempurature" << std::endl;
		std::cin >> degCelsius;
		degFahrenheit = degCelsius * 1.8 + 32;

		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "Celsius: " << degCelsius << std::endl;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	}

	// Area of a Rectangle
	{
		//takes the width and height inputted from user and converts it into the area of a rectangle

		float rectWidth = 0.0f; // Modify this variable below.
		float rectHeight = 0.0f; // Modify this variable below.
		float rectArea = 0.0f; // Modify this variable below.
							   // <Your work goes here>

		std::cout << "Enter Width" << std::endl;
		std::cin >> rectWidth;
		std::cout << "Enter Height" << std::endl;
		std::cin >> rectHeight;

		rectArea = rectWidth * rectHeight;

		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectArea << std::endl;
	}

	// Average of Five
	{
		//finds the average of 5 numbers

		float a, b, c, d, e;	// Modify these variables below.
		float avg;				// Modify this variable below.
		avg = a = b = c = d = e = 0.0f; // Initialize all to zero.
												// <Your work goes here>

		std::cout << "Enter 5 Numbers" << std::endl;
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
		std::cin >> d;
		std::cin >> e;
		avg = (a + b + c + d + e) / 5;

		std::cout << "Average of Five)" << std::endl;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << avg << std::endl;
	}

	// Number Swap
	{
		//swaps 2 numbers inputted from user

		int x = 13;
		int y = 24;

		// <Your work goes here>

		int temp;

		std::cout << "Enter A Number for X" << std::endl;
		std::cin >> x;
		std::cout << "Enter A Number for Y" << std::endl;
		std::cin >> y;

		temp = x;
		x = y;
		y = temp;

		std::cout << "Number Swap)" << std::endl;
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
	}

	// Fun Facts for Your Age
	{
		//gives months, weeks, minutes and seconds alive from inputted age from user

		int age = 0;

		// <Your work can go here.>

		std::cout << "Enter Your Age" << std::endl;
		std::cin >> age;

		int month;
		int week;
		int minute;
		int second;

		month = age * 12;
		week = 52 * age;
		minute = 10080 * week;
		second = 60 * minute;


		// <You must add more lines to output to the terminal>
		std::cout << "Howdy! You are " << age << " years old!\n";
		std::cout << age << " years is " << month << " months!\n";
		std::cout << month << " months is " << week << " weeks!\n";
		std::cout << week << " weeks is " << minute << " minutes!\n";
		std::cout << minute << " minutes is " << second << " seconds!\n";
	}

	// Conforming to Conventions)
	{
		int age;
		int bullet_count;
		float dog_years;
		int qty;
		float shield_value;
		float defense_matrix_cooldown;
		int red_armor_value;
		float red_armor_ratio;
		int happiness;
		int gandhi_aggression;

		system("pause");
	}


	// Challenges


	// The Right Tool for the Job)
	{
		//int // 16-bit integer
		//long // 32-bit integer
		//unsigned // can only store positive numbers
		//signed // can only store positive numbers
		//char // stores one character, takes 1 byte of memory
		//float // single 32-bit precision floating point, accomodates up to 7 digits
		//double // 64-bit precision floating point, accomodates up to 15-16 digits
		//long double // larger than double
		//bool // stores true or false value
		//void // no storage
	}

	// Number Swap (Difficulty Up)
	{
		//swaps a number inputted from user without using a temp int

		int x = 13;
		int y = 24;

		// <Your work goes here>

		std::cout << "Enter A Number for X" << std::endl;
		std::cin >> x;
		std::cout << "Enter A Number for Y" << std::endl;
		std::cin >> y;

		x = x + y;
		y = x - y;
		x = x - y;

		std::cout << "Number Swap)" << std::endl;
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;


		system("pause");
	}
}