// Bowling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;
	std::vector<bool> skittle;

	for (int i = 0; i < n; i++)
		skittle.push_back(true);
	for (int i = 0; i < k; i++)
	{
		int first, last;
		std::cin >> first >> last;
		for (int i = first-1; i < last; i++)
			skittle.at(i) = false;
	}

	std::cout << "\n";
	for (size_t i = 0; i < n; i++)
		if (skittle.at(i)) std::cout << "I";
		else std::cout << ".";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
