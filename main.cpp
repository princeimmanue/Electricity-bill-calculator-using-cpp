//|||||||||||||||||||||ELECTRICITY BILL CALCULATOR|||||||||||||||||||||||||||||||||||||||||

//\\\\\\\\\\\\\\\\\\\\\  by PRINCE IMMANUEL \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

#include<iostream>
#include<conio.h>
using namespace std;
//usig class and object in the "ELECTRICITY BILL  CALCULATOR" in a program.

class elec_bill
{
private:			//  using private in our class 
  int C_reading, P_reading, cpu, unit;

public:			// Using public in our class
  void get ();
  void printamount ();
};
void
elec_bill::get ()
{
  //Get the input from previous reding 
  cout << "-->Enter previous reading:" << endl;
  cin >> P_reading;

  //Get the input from current reading
  cout << "-->Enter current reading:" << endl;
  cin >> C_reading;

}

void elec_bill::printamount ()
{
  unit = C_reading - P_reading;
  if (unit > 0 && unit <= 100)	//using if condition in printamount()
    {
      cpu = unit * 0;
    }
  if (unit > 100 && unit <= 200)
    {
      cpu = unit * 2;
    }
  if (unit > 200 && unit <= 400)
    {
      cpu = unit * 4;
    }
  if (unit > 400 && unit <= 600)
    {
      cpu = unit * 6;
    }
  if (unit > 600 && unit <= 800)
    {
      cpu = unit * 8;
    }
  if (unit <= 800)
    {
      cpu = unit * 10;
    }
  cout << "-->Bill amount is:" << cpu << endl;	// bill amount display
}

int
main ()
{
  cout << "\t\t\t\t\t\t:::>ELECTRICITY BILL CALCULATOR<:::" << endl;	//output screen design
  cout << " \t\t\t\t\t\t\t    ::>WELCOME<::\t :>by prince " << endl;	//output screen design

  elec_bill cal;
  cal.get ();
  cal.printamount ();
  getch ();

  return 0;
}



