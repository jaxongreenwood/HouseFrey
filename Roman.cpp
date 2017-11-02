//
// Created by Main on 10/26/2017.
//
#include <iostream>
#include <string>
#include "Roman.h"

#include <string>
using namespace std;

/*!
 * Default Constructor
 */


//This helps with testing, do not modify.
bool checkTest(string testName, int whatItShouldBe, const Roman& obj )
{
    if (whatItShouldBe == obj.value)
    {
        cout << "Passed " << testName << endl;
        return true;
    }
    else
    {
        cout << "****** Failed test " << testName << " ****** " << endl << "     Object contained: "<< obj.value << endl << "     Output should have contained: " << whatItShouldBe << endl;
        return false;
    }
}


Roman::Roman()
{
    value = 0;

}

Roman::Roman(const string &str)
{
    convertFromRoman(str);

}

/*!
 * takes the string of roman numerals and converts it to numbers
 * @param str
 */

void Roman::convertFromRoman(const string &str)
{
    unsigned int i = 0, total = 0;

    i = str.length();

    for (int j = 0; j < i; j++)
    {

        char c = str.at(j);
        switch (c)
        {
            case 'I':
                total += 1;
                break;

            case 'V':
                total += 5;
                break;

            case 'X':
                total += 10;
                break;

            case 'L':
                total += 50;
                break;

            case 'C':
                total += 100;
                break;

            case 'D':
                total += 500;
                break;

            case 'M':
                total += 1000;
                break;
        }


    }
    value = total;
    cout << "Decimal value: " << total << endl;
}

/*!
 * takes the numbers and converts them into roman numerals
 * @return
 */

string Roman::convertToRoman() const
{
    int temp = value;
    string roman;

    while(temp > 0){
        if(temp > 1000){
            temp - 1000;
            roman.append("M");
        }
        if(temp > 500){
            temp - 500;
            roman.append("D");
        }
        if(temp > 100){
            temp - 100;
            roman.append("C");
        }
        if(temp > 50){
            temp - 50;
            roman.append("L");
        }
        if(temp > 10){
            temp - 10;
            roman.append("X");
        }
        if(temp > 5){
            temp - 5;
            roman.append("V");
        }
        if(temp > 1){
            temp - 1;
            roman.append("I");
        }
    }


    return std::string();
}

/*Roman Roman::operator+(const Roman &) const
{
    Roman t;
    t.value = a.value + b.value;
    t.convertToRoman();
    return Roman(t);
}*/

/*Roman Roman::operator+(Roman, const int) const {
    Roman a, t;
    int temp;
    t.value = a.value + temp;
    return Roman(t);
}*/

/*Roman Roman::operator++() {
    int temp = Roman().value;
    ++temp;
    value = temp;
    return Roman();
}*/

/*void Roman::operator+=(Roman a, const int r) {
    Roman t;
    int temp = a.value;
    temp + r;
    t.value = temp;
    t.convertToRoman();
    return;
}*/

/*void Roman::operator+=(const Roman a, const int r) {
    Roman t;
    int temp = a.value;
    temp + r;
    t.value = temp;
    t.convertToRoman();
    return;
}*/

/*Roman Roman::operator+(Roman a, const int r) const
{
    Roman t;
    int temp = a.value;
    temp + r;
    t.value = temp;
    t.convertToRoman();
    return Roman(t);
}*/

//This helps with testing, do not modify.
bool checkTest(string testName, string whatItShouldBe, string whatItIs )
{
    if (whatItShouldBe == whatItIs)
    {
        cout << "Passed " << testName << endl;
        return true;
    }
    else
    {
        cout << "****** Failed test " << testName << " ****** " << endl << " Object contained: "<< whatItIs << endl <<
                 "  Output should have contained: " << whatItShouldBe << endl;
        return false;
    }
}