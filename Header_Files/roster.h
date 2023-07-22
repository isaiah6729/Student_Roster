#pragma once
#include <iostream>
#include "student.h"
#include "degree.h"
using namespace std;

class Roster {

public:

    Student* classRosterArray[5];

    int count = 0;

public:

    void parse(string row);

    void add(string ID, string first, string last, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram program);

    void printAll();

    void printInvalidEmails(string email);

    void printAverageDaysInCourse(string studentID);

    void printByDegreeProgram(DegreeProgram program);

    void remove(string ID);

    ~Roster();

};