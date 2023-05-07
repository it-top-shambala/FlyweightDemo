#pragma once

#include <string>

using namespace std;

namespace Before {
    class Person {
    public:
        string first_name;
        string last_name;
        int age;

    protected:
        Person(const string &firstName, const string &lastName) : first_name(firstName), last_name(lastName) {}
    };
}
