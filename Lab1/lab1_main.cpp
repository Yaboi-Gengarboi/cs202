//lab1_main.cpp
//Justyn P. Durnford
//Created on 1/21/2020
//Last Updated on 1/21/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Lab1

#include <iostream>
using std::cout;
using std::endl;

void jumpsuit()
{
	cout << "jumpsuit" << endl;
}

int main()
{
	if (5 % 2 == 0)
		cout << "jump" << endl;
	else
		cout << "suit" << endl;

	int num = 0;
	switch (num)
	{
		case 0:
			cout << "jump" << endl;
			break;
		default:
			cout << "suit" << endl;
			break;
	}

	jumpsuit();

	num = 0;
	while (num < 3)
	{
		cout << "jump" << endl;
		++num;
	}

	num = 0;
	do
	{
		cout << "suit" << endl;
		++num;
	} while (num < 3);

	char js[] = "jumpsuit";

	for (int i = 7; i >= 0; --i)
		cout << js[i];
	cout << endl;

	for (char c : js)
		cout << c;
	cout << endl;

	return 0;
}