#include <iostream>
#include <string>

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

	char names[5][5];
	std::string name;

	std::cout << "Enter 5 Names" << std::endl;
	std::cin >> names[0];

	for (int i = 0; i < 5; i++)
	{
		std::cin.getline >> names[i];
	}

	//2)

	int i;
	for (i = name.length() - 1; i >= 0; i--) 
	{
		std::cout << name.at(i);
	}

	std::cout << "\n";

	//3)



	system("pause");
}