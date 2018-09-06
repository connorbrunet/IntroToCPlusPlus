#include <iostream>

int sum(int a, int b, int c)
{
	int intResult = a + b + c;
	return intResult;
	
}

void helloWorld()
{
	std::cout << "Hello world!" << std::endl;
}

int main()
{
	int a;
	a = sum(1, 2, 3);
	system("pause");
}