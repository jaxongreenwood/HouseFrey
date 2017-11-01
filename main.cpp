#include <iostream>
#include <string>
#include "Roman.h"

using namespace std;


//Function Prototype
void testConstructor();
void testOperatorPlus();

// Class Definition
int main()
{

    testConstructor();
    testOperatorPlus();


    return 0;
}
//This helps with testing, do not modify.
void testConstructor()
{
    //Test to make sure that empty objects are set to zero.
    Roman blank;
    checkTest("testConstructor #1", 0, blank);

    //Test reading in a number.
    Roman a("LXVI");
    checkTest("testConstructor #2", 66, a);

    //Test a bigger number.
    Roman b("MMMDDCCLLXXVVII");
    checkTest("testConstructor #3", 4332, b);
}

void testOperatorPlus()
{
    //Test adding two roman objects
    Roman a("XVI");
    Roman b("MDCLXVI");
    Roman c = a + b;
    checkTest("testOperatorPlus #1", 1682, c);
    //make sure the left and right operands weren't modified
    checkTest("testOperatorPlus #2", 16, a);
    checkTest("testOperatorPlus #3", 1666, b);

    //Test adding an object with an int
    //c = a + 52;
    //checkTest("testOperatorPlus #4", 68, c);
    //make sure the left operand wasn't modified
    //checkTest("testOperatorPlus #5", 16, a);

    //Test adding an int with an object
    //c = 578 + a;
    //checkTest("testOperatorPlus #6", 594, c);
    //make sure the right operand wasn't modified
    //checkTest("testOperatorPlus #7", 16, a);

}
