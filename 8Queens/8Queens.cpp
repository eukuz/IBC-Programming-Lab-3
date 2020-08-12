// 8Queens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

bool check(int xCoords[], int yCoords[])
{
	for (int i = 0; i < 8; i++)
		for (int j = i + 1; j < 8; j++)
			if (xCoords[i] == xCoords[j] || // horizontal check
				yCoords[i] == yCoords[j] || // vertical check
				xCoords[i] + yCoords[i] == xCoords[j] + yCoords[j] || // y=x+b check
				xCoords[i] - yCoords[i] == xCoords[j] - yCoords[j])	// y=-x+b check
				return false;
	return true;
}

int main()
{
	int xCoordinates[8];
	int yCoordinates[8];
	bool isAllCapable = true;

	for (size_t i = 0; i < 8; i++)
		std::cin >> xCoordinates[i] >> yCoordinates[i];

	if (!check(xCoordinates, yCoordinates))		std::cout << "YES";
	else		std::cout << "NO";

}