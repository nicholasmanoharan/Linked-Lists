#include "Node.hpp"
#include "Student.hpp"  // Make sure the correct header file is included

int main() {
    Student* student1 = new Student("Student 1", 1);
    Student* student2 = new Student("Student 2", 2);
    Node* node1 = new Node(student1);
    Node* node2 = new Node(student2);

    node1->setNext(node2);

    Node* currentNode = node1;
    while (currentNode != nullptr) {
        Student* currentStudent = currentNode->getStudent();
        currentStudent->displayInfo();
        currentNode = currentNode->getNext();
    }

    // Cleaning up memory
    delete node1;
    delete node2;
    delete student1;
    delete student2;

    return 0;
}
