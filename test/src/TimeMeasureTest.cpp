#include <iostream>
#include "../../main/src/header/measureTime.h"

using namespace std;


int main() {
	
	Timer t;
	t.startTimer();
	cout << "asdf\r\n";
	int n{};
	while(++n<1000) // simulate time
		
	t.stopTimer();
	return 0;
}