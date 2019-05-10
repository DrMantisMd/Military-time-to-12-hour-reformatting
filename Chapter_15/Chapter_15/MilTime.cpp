
#include "pch.h"
#include"MilTime.h"
#include"Time.h"
#include<iostream>
#include "Time.h"
using namespace std;

  int main()
  {
	  double MilHours = 0;
	  double MilMinutes = 0;
	  double MilSeconds = 0;

	  do {
		  cout << "Please enter an hour of the day 1-23 " << endl;
		  cin >> MilHours;
	  } while (MilHours < 1 || MilHours > 23);
  
	  do {
		  cout << "\nPlease enter an minute of an hour 1-59 " << endl;
		  cin >> MilMinutes;
	  } while (MilMinutes < 1 || MilMinutes > 59);

	  do {
	  cout << "\nPlease enter an second of the minute 1-59. " << endl;
	  cin >> MilSeconds;
	  } while (MilSeconds < 1 || MilSeconds > 59);

	  MilTime MilTGiven(MilHours, MilMinutes, MilSeconds);

	  cout << "\n The Military Time given is " << MilHours << ":" << MilMinutes;
	  cout << " Standard time will be ";
	  cout << MilTGiven.getStandHr() << ":" << MilTGiven.getStandM();
	  if (MilHours < 11)
	  {
		  cout << "PM";
	  }
	  else cout  << "AM";
	  cout << " and seconds " << MilTGiven.getStandS() << endl;

	  //  PRINT TIME OUT !!

	return 0;
  }