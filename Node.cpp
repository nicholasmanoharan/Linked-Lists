#include "Node.h"

Node::Node(Student* student) : studentPtr(student), nextNodePtr(nullptr) {}

Node::~Node() {
    //Cleaning memory if needed
}

Node* Node::getNext() const {
    return nextNodePtr;
}

Student* Node::getStudent9) const {
    return studentPtr;
}

void Node::setNext(Node* nextNode) {
    nextNodePtr = nextNode;
}
