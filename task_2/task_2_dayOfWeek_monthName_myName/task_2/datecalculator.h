#pragma once

#include <ctime>
#include <iostream>

int currentDate(int) {

	std::time_t now = time(0);

	char* dt = ctime(&now);

	std::cout << "The local date and time is: " << dt << std::endl;

	tm* gmtm = gmtime(&now);
	dt = asctime(gmtm);
	
	std::cout << "The UTC date and time is: " << dt << std::endl;

}
