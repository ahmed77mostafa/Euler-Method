#include<iostream>
#include<list>

using namespace std;


int main()
{
	cout << "which one is your dy/dx?\n\n";
	cout << "1. 2y - 3x\n";
	cout << "2. y - x\n";
	int choice;cin >> choice;
	if (choice == 1) {
		cout << "Enter your y(0): ";
		float y0, x0 = 0;
		cin >> y0;
		cout << "Enter your h:";
		float h;cin >> h;
		cout << "Find y(?):";
		float find_y; cin >> find_y;
		float dyn_y = y0;
		for (x0; x0 < find_y; x0 += h)
		{
			cout << "X: " << x0 << " Y: " << y0 << endl;
			dyn_y = dyn_y + h * (2 * dyn_y - 3 * x0);
			cout << dyn_y << endl;
		}
	}
	else if (choice == 2) {
		cout << "Enter your y(0): ";
		float y0, x0 = 0;
		cin >> y0;
		cout << "Enter your h:";
		float h; cin >> h;
		cout << "Find y(?):";
		float find_y; cin >> find_y;
		float dyn_y = y0;
		for (x0; x0 < find_y; x0 += h)
		{
			cout << "X: " << x0 << endl;
			dyn_y = dyn_y + h * (dyn_y - x0);
			cout << "Y: " << dyn_y << endl;
		}
	}
}