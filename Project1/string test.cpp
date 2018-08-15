#include <iostream>
#include <string>

int main()
{
	std::string MyName;
	MyName = "Connor Brunet";
	std::string MyNumber;
	MyNumber = "s188040";

	std::cout << "Name: " << MyName << std::endl;
	std::cout << "ID: " << MyNumber << std::endl;

	std::string FirstName;
	std::string LastName;

	std::cout << "Enter your first name.\n";
	std::cin >> FirstName;
	std::cout << "Enter your last name.\n";
	std::cin >> LastName;
	std::cout << "Your name is.. " + FirstName +  " " + LastName << std::endl;


	system("pause");

}