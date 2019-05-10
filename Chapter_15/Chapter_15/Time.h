#ifndef TIME_H
#define TIME_H
using namespace std;

class Time 
{
protected:
	double hour;
	double min;
	double sec;
public:
	
	Time()
	{
		hour = 0; min = 0; sec = 0;
	}

	//Constructor
	Time(double h, double m, double s)
	{
		hour = h; min = m; sec = s;
	}

	//Accessor functions
	double getHour() const
	{
		return hour;
	}

	double getMin() const
	{
		return min;
	}

	double  getSec() const
	{
		return sec;
	}

	//Set functions
	void setHour(double h)
	{
		hour = h;
	}

	void setMin(double m)
	{
		min = m;
	}

	void setSec(double s)
	{
		sec = s;
	}
};
#endif