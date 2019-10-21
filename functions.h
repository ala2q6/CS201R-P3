#pragma once

#include <iostream> // input and output data
#include <fstream> // read files
#include <vector> // use vectors to our advantage
#include <iomanip> // organize our data because \t doesn't always cut it
#include <string> // use of string methods
using namespace std; // no need for std::

vector<string> vectorRead(int intParameter, string strParameter); // declaration of reading file and pulling specific information

string strMenu(); // declaration of menu input

// declaration of menu options
void displayStudents(vector<string> prI, vector<string> prF, vector<string> prL, vector<string> prC, vector<string> prS, vector<string> prG);
void displayStudentsCity(vector<string> prI, vector<string> prF, vector<string> prL, vector<string> prC, vector<string> prS, vector<string> prG);
void displayStudentsCityNumber(vector<string> prI, vector<string> prF, vector<string> prL, vector<string> prC, vector<string> prS, vector<string> prG);