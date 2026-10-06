#include "header/measureTime.h"

void Timer::startTimer() {
	sTime = clock();
}
void Timer::stopTimer() {
	std::cout << std::setprecision(7) << (float)(clock() - sTime) / CLOCKS_PER_SEC << "\t";
}
