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

/*string Roman::convertToRoman() const
{
    std::string s = std::to_string(value);
    char arr[s.length()];

    return std::string(s);
}*/

Roman Roman::operator+(const Roman &) const
{
    return Roman();
}

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