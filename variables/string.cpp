#include<iostream>
#include<string>
using namespace std;

int main()
{
   
   string greeting="hello world";
   // string concatenation
   string firstname= "juma", lastname="musa";
   string fullname=firstname+""+lastname;
   cout<<greeting<<endl;
   cout<<fullname<<endl;
   // string in c++ is an object and contains functions
   //eg append() wchich can be used to concatenate
   fullname=firstname.append(lastname);
   // can not add numbers and strings
   //length() to measure the length of a string
   cout<<fullname.length()<<endl;

   // character in a string can be accessed using[]
   string myName="ferri";
   cout<<myName[0];// indexing first number is indexed by 0 second 1.....
   // using the same  string characters can be changed
   myName[0]='Z';
   cout<<myName;// output zerri

// string input and output
//hence cin considers a space (whitespace, tabs, etc) as a terminating character, which means 
//that it can only display a single word (even if you type many words):
//eg cin>> juma musa  output will be juma only
// to fix these we use  getline

string fullname;
cout<<"enter your fullname";
getline(cin,fullname);


    return 0;
}
