#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int coke = 1;
	const int sprite = 2;
	const int water = 3;
	const int sweppes = 4;
	const int fanta = 5;

	int choice{};

	while (true) {
		cout << "You have 5 choices. \nPlease select one (Just write the number you want. \n1-coke, 2=sprite, 3-water, 4-sweppes, 5-fanta): ";
		cin >> choice;

		if (choice == 1) {
			cout << "You have selected coke. Enjoy. ";
		}
		else if (choice == 2) {
			cout << "You have selected sprite. Enjoy. ";
		}
		else if (choice == 3) {
			cout << "You have selected water. Enjoy. ";
		}
		else if (choice == 4) {
			cout << "You have selected sweppes. Enjoy. ";
		}
		else if (choice == 5) {
			cout << "You have selected fanta. Enjoy. ";
		}
		else if (choice < 1 or choice > 5) {
			cout << "That's a wrong number. Please select a valid number from the list. ";
			continue;
		}

		cout << "Do you want to take another refreshment?[y/n]: ";
		char repeat = 'n';
		cin >> repeat;

		if (repeat == 'y') {
			continue;
		}
		else if (repeat == 'n') {
			cout << "Thank you for using our machine. \n";
			break;
		}
	}

	system("pause");
	return 0;
}