S#pragma once
#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int id);
    ~Student();
    void displayInfo() const;
    
    
private:
    std::string studentName;
    int studentID;
};
