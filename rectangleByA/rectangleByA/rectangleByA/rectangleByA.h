// rectangleByA.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

void rectangle(int* width, int* height) {

	for (int i = 0; i < *height; i++) {
		for (int j = 0; j < *width; j++) {
			std::cout << "A";
		}
		std::cout << "\n";
	}

}

// TODO: Reference additional headers your program requires here.
