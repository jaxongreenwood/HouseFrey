//
// Created by Main on 10/26/2017.
//

#ifndef HOUSEFREY_ROMAN_H
#define HOUSEFREY_ROMAN_H
#include <string>
using namespace std;

class Roman
{
private:
    unsigned int value;

public:
    Roman();    //Default constructor

    friend bool checkTest(string, int, const Roman&);
    friend void testOutput();
};



#endif //HOUSEFREY_ROMAN_H
