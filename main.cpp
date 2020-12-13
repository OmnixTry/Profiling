#include<stdio.h>
#include <string>
#include <Windows.h>

using namespace std;

void new_func1(void);

bool func1(int a)
{
	for (int i = 0; i < 10; i++)
	{
		Sleep(1);
		if (i > a)
			return true;

	}

	return false;
}

bool func2(int c)
{
	for (int i = 0; i < 10; i++)
	{
		Sleep(1);
		if (i > c)
			return true;
	}
	return false;
}

bool func3(int b)
{
	for (int i = 10; i > 3; i--)
	{	
		Sleep(1);
		if (i < b)
			return true;
	}
	return false;
}

int main(void)
{
	printf("\n Inside main()\n");
	string typeOfShape;
	//scanf_s("%s", typeOfShape);

	int i = 0;

	for (; i < 10; i++);
	{
		for (int j = 10; j > 0; j--)
		{
			if (func1(i) || func2(j - i) || func3(j)){
				printf("\n Inside if()\n");
			}
		}
	}

	return 0;
}