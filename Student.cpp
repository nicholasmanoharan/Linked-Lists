#include "Student.h"

Student::Student(const std::string& name, int id) : studentName(name), studentID(id) {}

Student::~Student() {
    //Memory allocation. Only if needed
}

void Student::displayInfo() const {
    std::cout << "Student Name: " << studentName << ", ID: " << studentID << std::endl;
}
