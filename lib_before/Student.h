#pragma once

#include "Person.h"

namespace Before {
    class Student : public Before::Person {
    public:
        string faculty;
        string group;

        Student(const string &firstName, const string &lastName, const string &faculty) : Person(firstName, lastName),
                                                                                          faculty(faculty) {}
    };
}
