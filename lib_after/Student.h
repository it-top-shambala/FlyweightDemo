#pragma once

#include "Person.h"

namespace After {
    class Student {
    public:
        After::Person* person;
        string faculty;
        string group;

        Student(Person *person, const string &faculty) : person(person), faculty(faculty) {}
    };
}
