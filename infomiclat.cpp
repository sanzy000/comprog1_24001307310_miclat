#include <iostream>
#include <string>
using namespace std;

string name;

int main() {
    
  cout << "Hello, I am Kloy, Welcome to my First C++ application \n";
  
  cout<<"Hey! What is your name: ";
  cin>>name;
  
  // ask the name
  
  cout<<"Good Day! " <<name<<" It's nice to meet you \n";
  
  cout<<"When is your Birthday ? \n";
  int month, day, year;
  cout<< "month: ";
  cin>>month;
  cout<<"day: ";
  cin>>day;
  cout<<"Year: ";
  cin>>year;
  
  int leapyear=year%4;
  
  cout<<"value of year: "<< leapyear;
  if (year == 0) 
  {
      cout<<" I am leapyear";
  }
else
    cout<<" I am not leapyear";
  
  return 0;
}