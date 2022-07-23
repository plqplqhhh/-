#include<iostream>

class Date
{
public:
	int GetMonthDay(int year, int month)// ��ȡĳ��ĳ�µ�����
	{
		int month_day[] = {0,31,28,31,30,31,30,31,31,30,31,31};

		if (year % 400 == 0 || year % 4 == 0 || year % 100 != 0)
		{
			return 29;
		}

		return month_day[month];
	}

	Date(int year = 1900, int month = 1, int day = 1)// ȫȱʡ�Ĺ��캯��
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& d)// �������캯��		// d2(d1)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	// ��ֵ���������

  // d2 = d3 -> d2.operator=(&d2, d3)

	Date& operator=(const Date& d);

	~Date()// ��������
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}

	Date& operator+=(int day)// ����+=����
	{
		_day + day;
		while (day > GetMonthDay(_year, _month))
		{
			day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_month = 1;
				_year++;
			}
		}
		return *this;
	}

	Date operator+(int day)// ����+����
	{
		Date ret = (*this);
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month))
		{
			_day-= GetMonthDay(_year, _month);
			ret._month++;
			if (ret._month == 13)
			{
				ret._month = 1;
				ret._year++;
			}
		}
		return *this;	
	}

	Date operator-(int day)// ����-����
	{
		Date ret = (*this);
		ret._day -= day;
		while (ret._day <= 0)
		{
			_day += GetMonthDay(ret._year, ret._month);
			ret._month--;
			if (ret._month == 0)
			{
				ret._month = 12;
				ret._year--;
			}
		}
		return *this;
	}

	Date& operator-=(int day)// ����-=����
	{
		_day -= day;
		while ( _day<= 0)
		{
			_day += GetMonthDay(_year, _month);
			_month--;
			if (_month == 0)
			{
				_month = 12;
				_year--;
			}
		}
		return *this;
	}


	// ǰ��++

	Date& operator++();



	// ����++

	Date operator++(int);



	// ����--

	Date operator--(int);



	// ǰ��--

	Date& operator--();



	// >���������

	bool operator>(const Date& d);



	// ==���������

	bool operator==(const Date& d);



	// >=���������

	bool operator >= (const Date& d);



	// <���������

	bool operator < (const Date& d);



	// <=���������

	bool operator <= (const Date& d);



	// !=���������

	bool operator != (const Date& d);



	// ����-���� ��������

	int operator-(const Date& d);

private:

	int _year;

	int _month;

	int _day;

};
int main()
{
	return 0;
}
