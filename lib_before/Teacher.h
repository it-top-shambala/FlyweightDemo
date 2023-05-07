#pragma once

#include "Person.h"

namespace Before {
    class Teacher : public Before::Person {
    public:
        string faculty;
        string department;

        Teacher(const string &firstName, const string &lastName, const string &faculty) : Person(firstName, lastName),
                                                                                          faculty(faculty) {}
    };
}
