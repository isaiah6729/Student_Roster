#include "roster.h"

#include <string>
#include <iostream>
using namespace std;

void Roster::parse(string row) {

    size_t right = row.find(",");
    string ID = row.substr(0, right);

    size_t left = right + 1;
    right = row.find(",", left);
    string first = row.substr(left, right - left);

    left = right + 1;
    right = row.find(",", left);
    string last = row.substr(left, right - left);

    left = right + 1;
    right = row.find(",", left);
    string email = row.substr(left, right - left);

    left = right + 1;
    right = row.find(",", left);
    int age = stoi(row.substr(left, right - left));

    left = right + 1;
    right = row.find(",", left);
    int daysInCourse1 = stoi(row.substr(left, right - left));

    left = right + 1;
    right = row.find(",", left);
    int daysInCourse2 = stoi(row.substr(left, right - left));

    left = right + 1;
    right = row.find(",", left);
    int daysInCourse3 = stoi(row.substr(left, right - left));

    left = right + 1;
    right = row.find(",", left);
    string programmer = row.substr(left, right - left);

    DegreeProgram program;

    if (programmer == "SOFTWARE") {
        program = DegreeProgram::SOFTWARE;
    }
    else if (programmer == "NETWORK") {
        program = DegreeProgram::NETWORK;
    }
    else if (programmer == "SECURITY") {
        program = DegreeProgram::SECURITY;
    }

    add(ID, first, last, email, age, daysInCourse1, daysInCourse2, daysInCourse3, program);

 
}

void Roster::add(string ID, string first, string last, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram program) {

    int numdays[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

    classRosterArray[count++] = new Student(ID, first, last, email, age, numdays, program);

}

void Roster::printAll() {

    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}


void  Roster::printInvalidEmails(string email) {


        if (email.find(" ") != string::npos) {

            cout << email << " - invalid email" << endl;
        }

        if (email.find('.') == string::npos) {

            cout << email << " - invalid email" << endl;
        }

        if (email.find('@') == string::npos) {

            cout << email << "  - invalid email" << endl;
        }

}

void Roster::printAverageDaysInCourse(string studentID) {

    for (int i = 0; i < 5; i++) {

        if (classRosterArray[i]->getID() == studentID) {
            int* average = classRosterArray[i]->getdays();
            cout << "Student ID: " << studentID << " Average days in course is " << average[0] + average[1] + average[2] / 3 << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram program) {

    for (int i = 0; i < 5; i++) {

            if (classRosterArray[i]->getDegreeProgram() == program) {
                classRosterArray[i]->print();
            } 
        }
        cout << endl;
    }

void Roster::remove(string ID) {

    for (int i = 0; i < 5; i++) {

        if (classRosterArray[i] == nullptr) {

        cout << ID << " not found!" << endl;
        }
        
        else if (classRosterArray[i]->getID() == ID) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            cout << ID << " removed!" << endl;
        }
        

        
    }
    cout << endl;
}

Roster::~Roster() {}