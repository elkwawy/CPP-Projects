#include<iostream>
#include<windows.h>
using namespace std;
// Digital Clock
int main() {
	// variables
	int hours = 0;
	int min = 0;
	int sec = 0;
	//end of variables
	
	// Get the current time from the user
	cout << "Enter the current time in hours, minutes, and seconds.\n";
	cout << "Hours : ";
	cin >> hours;
	cout << "Minute : ";
	cin >> min;
	cout << "Seconds : ";
	cin >> sec;

	// Loop forever
	while (true) {

		// Clear the console screen
		system("cls");

		// Update the time
		if (sec > 59) {
			min++;
			sec = 0;
		}
		if (min > 59) {
			hours++;
			min = 0;
		}
		if (hours > 23) {
			hours = 0;
		}

		// Print the time to the console
		cout << hours << " : " << min << " : " << sec;

		sec++;

		// Wait for one second
		Sleep(1000);
}
	return 0;
}