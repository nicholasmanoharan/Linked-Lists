#pragma once
#include "Student.hpp"

class Node {
public:
    Node(Student* student);
    ~Node();
    Node* getNext() const;
    Student* getStudent() const;
    void setNext(Node* nextNode);
    
private:
    Student* studentPtr;
    Node* nextNodePtr;
};
