#pragma once

#include <iostream>
#include <vector>

void printStar(int);
void printSpace(int);


void wWithStarTwo(int height) {

	int d = 4; // difference of arithmetic progression

	int maxSpaces = ((1 + (height-1) * d) - 3) / 2;

	printStar(1);
	printSpace(maxSpaces);
	printStar(1);
	printSpace(maxSpaces);
	printStar(1);
	std::cout << "\n";

	std::vector<int> spaces;


	while (maxSpaces > 0)
	{		
		spaces.push_back(maxSpaces);
		maxSpaces -= 2;

	}

	for (int i = 1; i < spaces.size(); i++) {

		printSpace(i);
		printStar(1);
		printSpace(spaces[i]);
		printStar(1);
		printSpace(spaces[spaces.size() - i]);
		printStar(1);
		printSpace(spaces[i]);
		printStar(1);
		printSpace(i);

		std::cout << "\n";

	}

	printSpace(height - 1);
	printStar(1);
	printSpace(spaces[0]);
	printStar(1);
	printSpace(height - 1);

	std::cout << "\n";


}

void wWithStar(int height) {
	
	

	int d = 4; // difference of arithmetic progression

	
	int spacesKef = ((1 + (height - 1) * d) - 3) / 2; // Kef that uses arithmetic progression formula, that finds first number of decreasing ar prog and divides it on 2 halfs
	int a_HeightStart = -1;

	printStar(1);
	printSpace(spacesKef);
	printStar(1);
	printSpace(spacesKef);
	printStar(1);
	std::cout << "\n";

	


	for (int i = 1; i < height - 1; i++) {

		spacesKef -= (d / 2);
		a_HeightStart += (d / 2);

		printSpace(i);
		printStar(1);
		printSpace(spacesKef);
		printStar(1);
		printSpace(a_HeightStart);
		printStar(1);
		printSpace(spacesKef);
		printStar(1);
		printSpace(i);

		std::cout << "\n";
	}

	printSpace(height - 1);
	printStar(1);
	printSpace(a_HeightStart + 2);
	printStar(1);
	printSpace(height - 1);
	

}

void wWithStarThree(int height) { //ChatGPT func :D it doesnt work
	int width = height * 2 - 1;
	int mid = (width + 1) / 2;

	for (int i = 1; i <= height; i++) {
		if (i == 1 || i == height) { // top and bottom rows
			for (int j = 1; j <= width; j++) {
				if (j == 1 || j == width) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}
		}
		else { // middle section
			int left_space = i - 2;
			int right_space = width - i - 1;
			std::cout << " ";
			for (int j = 1; j <= left_space; j++) {
				std::cout << " ";
			}
			std::cout << "*";
			for (int j = 1; j <= right_space; j++) {
				std::cout << " ";
			}
			std::cout << "*";
			for (int j = 1; j <= left_space; j++) {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}


void printStar(int ammount) {
	for (int i = 0; i < ammount; i++) {
		std::cout << "*";
	}
}

void printSpace(int ammount) {
	for (int i = 0; i < ammount; i++) {
		std::cout << " ";
	}
}
