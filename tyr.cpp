

/* in this project Im coding program that calculates the score of that player from the number of skittles knocked down by a player in a bowling match.
each frame consists of 10 skittles and the player has 2 shots per frame.
when the player knocks down all the skittles about the first shot, it is called a strike, and when the player knocks down all the skittles in total in two shots, its called spare

*/



#include<iostream>

using namespace std;

int main() {

	int shoot_1, shoot_2, shoot_number = 0, point = 0;
	int kuka_numbers[22];

	cout << " please enter numbers:";

	for (int i = 0; i < 10; ++i) {
		cin >> shoot_1;

		kuka_numbers[shoot_number++] = shoot_1;

		if (shoot_1 != 10) {
			cin >> shoot_2;
			kuka_numbers[shoot_number++] = shoot_2;

		}
		if (shoot_1 == 10 && i == 9) {
			cin >> shoot_1;
			kuka_numbers[shoot_number++] = shoot_1;
			cin >> shoot_2;
			kuka_numbers[shoot_number++] = shoot_2;
		}

		else if (shoot_1 + shoot_2 == 10 && i == 9) {
			cin >> shoot_1;
			kuka_numbers[shoot_number++] = shoot_1;

		}
	}

	bool strike, spare;
	for (int i = 0, j = 0; i < 10; ++i) {


		strike = false;
		spare = false;
		if (kuka_numbers[j] == 10) {

			point += kuka_numbers[j] + kuka_numbers[j + 1] + kuka_numbers[j + 2];
			j += 1;
			strike = true;

		}

		else if (kuka_numbers[j] + kuka_numbers[j + 1] == 10) {
			point += kuka_numbers[j] + kuka_numbers[j + 1] + kuka_numbers[j + 2];
			j += 2;
			spare = true;

		}
		else {
			point += kuka_numbers[j] + kuka_numbers[j + 1];
			j += 2;

		}
	}

	cout << point;
	return 0;

}