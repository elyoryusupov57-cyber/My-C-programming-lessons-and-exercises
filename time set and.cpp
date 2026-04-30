#include <iostream>

using namespace std;

class Time
{
public:
   Time();
   void setTime(int, int, int);
   void Tick(int, int, int);
   void printTime();

private:
   int hour;   // 0-23
   int minute; // 0-59
   int second; // 0-59
};


Time::Time()
{
   hour=minute=second = 0;
}

void Time::setTime(int h, int m, int s)
{
  hour = (h>=0 && h <24) ? h : 0;
  minute = (m>=0 && m<60) ? m : 0;
  second = (s>=0 && s<60) ? s : 0;
}

void Time::Tick(int th, int tm, int ts)
{
	setTime(hour+th, minute+tm, second+ts);
}

void Time::printTime()
{
   cout << (hour < 10 ? "0" : "") << hour << ":"
		<< (minute < 10 ? "0" : "") << minute << ":"
		<< (second < 10 ? "0" : "") << second;
}

int main()
{
   Time t;
   cout << "Time is: ";
   t.printTime();
   t.setTime(15, 23, 34);
   cout << endl << "Time is: ";
   t.printTime();

   t.Tick(40, 44, 455);

   cout << endl << "After Tick: ";
   t.printTime();
   cout << endl << endl;
   system("Pause");
   return 0;
}


