#include "roster.h"
#pragma once

#include <iostream>
using namespace std;

int main() {

    cout << "C867-Scripting & Programming: Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 008121326" << endl;
    cout << "Name: Isaiah Francis" << endl;

    cout << endl;

    Roster classRoster;

    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Isaiah,Francis,ifran@wgu.edu,36,30,36,90,SOFTWARE"};

    cout << "Showing all students!" << endl;

    cout << endl;

    for (int i = 0; i < 5; ++i) {
        classRoster.parse(studentData[i]);
    }

    classRoster.printAll();

    cout << endl;

    cout << "Showing all invalid emails." << endl;

    cout << endl; 
    
    for (int i = 0; i < 5; ++i) {
        classRoster.printInvalidEmails(classRoster.classRosterArray[i]->getemail());
    }

    cout << endl;

    cout << "Showing students in degree program: SOFTWARE." << endl;

    cout << endl; 
    
    classRoster.printByDegreeProgram(SOFTWARE);

    cout << "Showing students average days." << endl;

    cout << endl; 
    
    for (int i = 0; i < 5; ++i) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getID());
    }

    cout << endl;

    cout << "Removing A3." << endl;

    cout << endl; 
    
    classRoster.remove("A3");

    classRoster.printAll();
   
    classRoster.remove("A3");

    

    return 0;
}
