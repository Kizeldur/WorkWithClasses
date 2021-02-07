#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>
#include <vector>

#include "Date.h"
#include "Address.h"
#include "Phone.h"

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    Date dateOfBirth;

    bool flag_firstName = true;
    bool flag_lastName = true;
    bool flag_dateOfBirth = true;
public:
    Address address;
    vector<Phone> phones;

    void SetFirstName(string firstName)
    {
        if (flag_firstName) {
            this->firstName = firstName;
            flag_firstName = false;
        }
    }
    void SetLastName(string lastName)
    {
        if (flag_lastName) {
            this->lastName = lastName;
            flag_lastName = false;
        }
    }

    void SetDateOfBirth(Date date)
    {
        if (flag_dateOfBirth) {
            this->dateOfBirth = date;
            flag_dateOfBirth = false;
        }
    }

    void AddNewPhoneNumber(Phone phone) {
        phones.push_back(phone);
    }

    Person() {}
    Person(string firstName, string lastName, Date dateOfBirth, Address address, vector<Phone> phones)
    {
        SetFirstName(firstName);
        SetLastName(lastName);
        SetDateOfBirth(dateOfBirth);
        this->address = address;
        this->phones = phones;
    }
};

#endif //UNTITLED_PERSON_H
