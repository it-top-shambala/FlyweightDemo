#pragma once

#include "Person.h"

namespace After {
    class Teacher {
    public:
        After::Person* person;
        string faculty;
        string department;

        Teacher(Person *person, const string &faculty) : person(person), faculty(faculty) {}
    };
}
