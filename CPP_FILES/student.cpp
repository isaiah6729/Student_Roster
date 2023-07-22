#include "student.h"
#include "degree.h"
#include <iostream>
using namespace std;


Student::Student(string ID, string first, string last, string email, int age, int numdays[], DegreeProgram program) {

    this->ID = ID;
    this->first = first;
    this->last = last;
    this->email = email;
    this->age = age;

    for (int i = 0; i < 3; ++i) {
        this->numdays[i] = numdays[i];
    }
    this->program = program;
}

void Student::setID(string ID) {
    this->ID = ID;
}

 string Student::getID() {
    return ID;
}

 void Student::setfirst(string first) {
     this->first = first;
 }

 string Student::getfirst() {
     return first;
 }

 void Student::setlast(string last) {
     this->last = last;
 }

 string Student::getlast() {
     return last;
}

 void Student::setemail(string email) {
     this->email = email;
 }

 string Student::getemail() {
     return email;
 }

 void Student::setage(int age) {
     this->age = age;
 }

 int Student::getage() {
     return age;
 }

 void Student::setdays(int numdays[]) {
     for (int i = 0; i < 3; ++i) {
         this->numdays[i] = numdays[i];
     }
 }
 
 int* Student::getdays() {
     return numdays;
 }

 void Student::setDegreeProgram(DegreeProgram program) {
         this->program = program;
     }

DegreeProgram Student::getDegreeProgram() {
         return program;
     }

void Student::print() {

    string str_programmer;

    if (program == DegreeProgram::SOFTWARE) {
        str_programmer = "SOFTWARE";
    }
    else if (program == DegreeProgram::SECURITY) {
        str_programmer = "SECURITY";
    }
    else if (program == DegreeProgram::NETWORK) {
        str_programmer = "NETWORK";
    }

    cout << ID << "\t" << first << "\t" << last << "\t" << email << "\t" << 
         age << "\t" << "{" << numdays[0] << "," << numdays[1] << "," << numdays[2] << 
        "}" << "\t" << str_programmer << endl;
}