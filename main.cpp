#include <iostream>

#include "./lib_before/Student.h"
#include "./lib_before/Teacher.h"

#include "./lib_after/Person.h"
#include "./lib_after/Student.h"
#include "./lib_after/Teacher.h"

using namespace std;

int main() {
    auto* student = new Before::Student("Starinin", "Andrey", "SoftDev");
    auto* teacher = new Before::Teacher("Starinin", "Andrey", "SoftDev");
    cout << student->first_name << " " << student->last_name << endl;
    cout << teacher->first_name << " " << teacher->last_name << endl;

    auto* person = new After::Person("Starinin", "Andrey");
    auto* student_2 = new After::Student(person, "SoftDev");
    auto* teacher_2 = new After::Teacher(person, "SoftDev");

    cout << student_2->person->first_name << " " << student_2->person->last_name << endl;
    cout << teacher_2->person->first_name << " " << teacher_2->person->last_name << endl;

    return 0;
}
