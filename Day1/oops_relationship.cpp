#include <iostream>
#include <string>

// Forward declaration of Person class
class Person;

class Student {
private:
    std::string rollNumber;
    std::string grade;

public:
    Student(std::string rollNumber, std::string grade) : rollNumber(rollNumber), grade(grade) {}

    void displayInfo() {
        std::cout << "Roll Number: " << rollNumber << ", Grade: " << grade << std::endl;
    }

    // Setter method to establish association with a Person object
    void setPerson(Person* person); // Forward declaration
};

class Person {
private:
    std::string name;
    int age;
    Student* student; // Aggregation relationship

public:
    Person(std::string name, int age) : name(name), age(age), student(nullptr) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
        if (student != nullptr) {
            student->displayInfo(); // Display student information if available
        }
    }

    // Setter method to establish association with a Student object
    void setStudent(Student* student) {
        this->student = student;
    }
};

// Define setter method for Student class after Person class definition
void Student::setPerson(Person* person) {
    person->setStudent(this);
}

int main() {
    // Create instances of Person and Student classes
    Person person("Alice", 30);
    Student student("123", "A");

    // Establish an association between the Person and Student objects
    student.setPerson(&person);

    // Display information
    person.displayInfo(); // This will also display student information

    return 0;
}
