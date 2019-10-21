#include "functions.h"

string strMenu() { // displays choices and gets input from user

	string strVariable; // variable to eventually get input from the user
	while (true) { // while we don't get a valid input

		cout << "\n\tStudent Menu\n\n1.\tDisplay Student Info\n2.\tDisplay Student Info by City"; // display options to user
		cout << "\n3.\tDisplay Student Info by City and Student per City\n4.\tQuit\n\nInput : ";
		cin >> strVariable; // getting input from user

		if (strVariable == "1") { cout << '\n'; return "1"; } // should the input be 1

		else if (strVariable == "2") { cout << '\n'; return "2"; } // should the input be 2
		
		else if (strVariable == "3") { cout << '\n'; return "3"; } // should the input be 3

		else if (strVariable == "4") { cout << '\n'; return "4"; } // should the input be 4

		else { cout << "\nInput is invalid.\n"; } // should the input be none of the above

	}

}

vector<string> vectorRead(int intParameter, string strParameter) { // function that returns are sepcific index of the file read

	int intVariable = 0; // declared for keeping track of each line of code from file
	string strVariable; // declared to be assigned when reading strings from the file
	vector<string> vectorVariable; // declared for adding important strings together
	ifstream filein(strParameter); // creating file to read
	while (filein.good()) { // while there are lines to read

		filein >> strVariable; // assigning string variable with lines from file

		if (intVariable == intParameter) { // should line in pulled file equal the desired

			vectorVariable.push_back(strVariable); // adding specific strings to vector
			intParameter += 6; // going to the next index and skipping the other columns of information

		}

		intVariable += 1; // incrementing to a new line

	}

	return vectorVariable; // return vector of specific information

}

void displayStudents(vector<string> prI, vector<string> prF, vector<string> prL, vector<string> prC, vector<string> prS, vector<string> prG) {

	for (int x = 0; x < prI.size(); x++) { // iteration of all vectors to output information unordered

		cout << '\t' << prI.at(x) << setw(15) << prF.at(x) << setw(15) << prL.at(x) << setw(25);
		cout << setw(20) << prC.at(x) << setw(10) << prS.at(x) << setw(10) << prG.at(x) << endl;

	}

}

void displayStudentsCity(vector<string> prI, vector<string> prF, vector<string> prL, vector<string> prC, vector<string> prS, vector<string> prG) {

	for (int x = 50; x >= 0; x--) { // sorting algorithm to display information sorted by city

		for (int y = 0; y < prI.size(); y++) { // iteration through vector to find greatest to least city

			if (x == prC.at(y).size()) { // if there is a qualifying element size, output all required and related information

				cout << '\t' << prI.at(y) << setw(15) << prF.at(y) << setw(15) << prL.at(y) << setw(25);
				cout << setw(20) << prC.at(y) << setw(10) << prS.at(y) << setw(10) << prG.at(y) << endl;

			}

		}

	}

}

void displayStudentsCityNumber(vector<string> prI, vector<string> prF, vector<string> prL, vector<string> prC, vector<string> prS, vector<string> prG) {
	
	// from here until next comment this algorithm build a vector of unique elements
	vector<int> vectorVariable;
	for (int x = 50; x >= 0; x--) {

		bool boolVariable = true;
		for (int y = 0; y < prI.size(); y++) {

			if (x == prC.at(y).size()) {

				for (int z = 0; z < vectorVariable.size(); z++) {

					if (x == vectorVariable.at(z)) {

						boolVariable = false;

					}

				}

				if (boolVariable == true) {

					vectorVariable.push_back(x);

				}

			}

		}

	}

	// nested for loop to iterate through unique elements to each qualifying city element size
	for (int x = 0; x < vectorVariable.size(); x++) {

		int intCity = 0, intAmount = 0;
		for (int y = 0; y < prI.size(); y++) {

			if (vectorVariable.at(x) == prC.at(y).size()) {

				intCity = y;
				intAmount += 1;

			}

		}

		// should the amount of students proceed a value of 1
		if (intAmount > 1) {

			cout << '\t' << intAmount << " students are from " << prC.at(intCity) << endl;

		}

	}

}