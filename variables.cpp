#include<iostream>
using namespace std;
int main(){
    // declaring a variable
    //     type variablename  =value;
    // eg  int      x         =4;
    int x=4,y=5;
    cout<<"The sum will be"<<x+y;
    string greating="hello";
    float pi=3.14;
    double num= 1'33333;
    // difference between float and double is how many digits can be stored after the decimal
    // float stores 7 double 15
}

/*
variables are container for storing data
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names

*/