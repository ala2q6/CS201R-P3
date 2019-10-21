#include "functions.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	cout << "Welcome to Student Center\n"; // welcome message to user

	vector<string> vectorID = vectorRead(0, "Student_Info.txt"); // pulling ID elements
	vector<string> vectorFirst = vectorRead(1, "Student_Info.txt"); // pulling first name elements
	vector<string> vectorLast = vectorRead(2, "Student_Info.txt"); // pullinh last name elements
	vector<string> vectorCity = vectorRead(3, "Student_Info.txt"); // pulling city elements
	vector<string> vectorState = vectorRead(4, "Student_Info.txt"); // pulling state elements
	vector<string> vectorGPA = vectorRead(5, "Student_Info.txt"); // pulling GPA elements

	while (true) { // while user doesn't enter '4'

		string strInput = strMenu(); // getting input from user

		if (strInput == "1") { // branch that executes if user enters '1'

			displayStudents(vectorID, vectorFirst, vectorLast, vectorCity, vectorState, vectorGPA); // output of unordered data

		}

		else if (strInput == "2") { // branch that executes if user enters '2'
			
			displayStudentsCity(vectorID, vectorFirst, vectorLast, vectorCity, vectorState, vectorGPA); // output of ordered data
		
		}

		else if (strInput == "3") { // branch that executes if user enters '3'
			
			displayStudentsCity(vectorID, vectorFirst, vectorLast, vectorCity, vectorState, vectorGPA); // output of ordered data
			cout << endl; // splitting information for better visual understanding
			displayStudentsCityNumber(vectorID, vectorFirst, vectorLast, vectorCity, vectorState, vectorGPA); // AND output of students/city
		
		}

		else if (strInput == "4") { // branch that executes if user enters '4'
			
			break; // break out of loop
		
		}

	}

	return 0; // program returned 0 errors

}