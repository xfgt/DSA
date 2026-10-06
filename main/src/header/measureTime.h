#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


struct Timer {
	unsigned sTime;
	void startTimer();
	void stopTimer();
};