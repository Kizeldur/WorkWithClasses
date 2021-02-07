#ifndef UNTITLED_ADDRESS_H
#define UNTITLED_ADDRESS_H

#include <string>

using namespace std;

struct Address {

    string country;
    string region;
    string city;
    string street;
    string house;
    int post_code;
 
   
    Address(){}
    Address(string country, string region, string city, string street, string house, int post_code) {
        this->country = country;
        this->region = region;
        this->city = city;
        this->street = street;
        this->house = house;
        this->post_code = post_code;
    }
};

#endif //UNTITLED_ADDRESS_H
