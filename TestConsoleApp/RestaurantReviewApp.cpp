// TestConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cassert>
#include "Restaurant.h"
using namespace std;

int main() {
	Restaurant ourPlace;
	string currName;

	cout << "Type restaurant name: " << endl;
	getline(cin, currName);
	ourPlace.SetName(currName);
	cout << endl;

	ourPlace.ReadAllReviews();
	cout << endl;

	ourPlace.PrintCommentsByRating();

	return 0;
}
