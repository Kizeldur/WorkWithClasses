#ifndef UNTITLED_PHONE_H
#define UNTITLED_PHONE_H

#include <string>

using namespace std;

enum TypePhone {
    Mobile, Work, Home
};

struct Phone {
    string number;
    TypePhone type;
    string TypePhoneToString() {
        if (type == TypePhone::Home) {
            return "Home phone";
        } else if (type == TypePhone::Work) {
            return "Work phone";
        }
        else {
            return "Mobile phone";
        }      
    }
    void SetTypePhone(string type) {
        if (type == "Home phone") {
            type = TypePhone::Home;
        } else if (type == "Work phone") {
            type = TypePhone::Work;
        } else {
            type = TypePhone::Mobile;
        }
    }

    Phone(){}
    Phone(string number, string type){
        this->number = number;
        SetTypePhone(type);
    }
};

#endif //UNTITLED_PHONE_H
