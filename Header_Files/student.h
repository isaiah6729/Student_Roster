#pragma once
#include <iostream>
#include "degree.h"
using namespace std;

class Student {

public:

    Student(string ID, string first, string last, string email, int age, int numdays[], DegreeProgram program);
    
    void setID(string ID);
    string getID();
    void setfirst(string first);
    string getfirst();
    void setlast(string last);
    string getlast();
    void setemail(string email);
    string getemail();
    void setage(int age);
    int getage();
    void setdays(int numdays[]);
    int* getdays(); 
    void setDegreeProgram(DegreeProgram program);
    DegreeProgram getDegreeProgram();
   
    void print();

private:

    string ID;
    string first; 
    string last; 
    string email; 
    int age; 
    int numdays[3];
    DegreeProgram program;

};