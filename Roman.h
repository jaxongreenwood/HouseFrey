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
    const string convetToRoman();
    void convertFromRoman(const string&);
public:
    Roman();
    Roman(const string&);

    const Roman operator+(const Roman&);
    const Roman operator+(const int);
    friend Roman operator +(const int, const Roman&);
    void operator +=(const Roman&);
    void operator +=(const int);
    Roman operator++();

    friend ostream& operator << (ostream&, const Roman&);
    friend istream& operator >> (istream&, Roman&);

    friend bool checkTest(string, int, const Roman&);
    friend void testOutput();

};



#endif //HOUSEFREY_ROMAN_H
