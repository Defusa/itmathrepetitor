#pragma once

#include <iostream>
#include <ctime>

void getCurrentTimeCtime() {
	time_t curr_time;
	curr_time = time(NULL);

	char* tm = ctime(&curr_time);
	std::cout << "Сегодня : " << curr_time << "\n";
	std::cout << "Сегодня : " << tm << "\n";

}

void getCurrentTimeDefusa() {
	time_t secondsAmmount;
	secondsAmmount = time(NULL);

	for (int i = 0; i < 20; i++) {
		std::cout << "*";
	}
	
	std::cout << "\nМоя функция\n";

	for (int i = 0; i < 20; i++) {
		std::cout << "*";
	}


	std::cout << "\n\n\nПрошло секунд : " << secondsAmmount << "\n";

	int minutesFromStart;
	
	minutesFromStart = secondsAmmount / 60;
	int curr_seconds;
	curr_seconds = secondsAmmount % 60;

	std::cout << "Прошло секунд : " << minutesFromStart << " " << curr_seconds << "\n";

}

