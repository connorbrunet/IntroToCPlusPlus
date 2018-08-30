#include <iostream>

int main()

{
	/*{
		char name[] = "Connor";
		for (int i = 0; i < 6; i++)
		{
			std::cout << int(name[i]) << std::endl;
		}
	}*/

	/*{
		char name2[] = "AIEUS";
		int count = 0;

		while (name2[count] != '\0')
		{
			count++;
		}

		std::cout << count << std::endl;
	}*/

	/*{
		char one[] = "click";
		char two[] = "clique";

		int countOne = 0;
		int countTwo = 0;

		for (int i = 0; one[countOne] != '\0'; i++)
		{
			countOne++;
		}

		for (int i = 0; one[countTwo] != '\0'; i++)
		{
			countTwo++;
		}

		bool same = true;

		if (countOne == countTwo)
		{
			for (int i = 0; i < countOne; i++)
			{
				if (one[i] == two[i])
				{
					continue;
				}
				else
				{
					same = false;
					break;
				}
			}
		}
		else
		{
			same = false;
		}
		std::cout << same << std::endl;
	}*/

	//Homework 

	//1)

	char name[255];

	std::cout << "Enter Your Full Name" << std::endl;
	std::cin.getline(name, 255);
	for (int i = 0; i < 255; i--);
	{
		std::cout << "Hello, " << name << "!\n";
	}

	//2)

	system("pause");
}