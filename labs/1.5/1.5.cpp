#include "iostream"
#include "cmath"

using namespace std;

/*
* Done by
* Student name: Svicharov Maksim
* Student group: 121
* Variant: 14
* Lab 1.5
*/
int main()
{
	//Part 1

	int a1 = 76;
	int b1 = 24;
	double c1 = 8.2;
	double d1 = 8.2;
	//Formula - <УЛО1>(<УЛО2>(a1<ОВ1>b1)<БЛО>(<УЛО3>(c1<ОВ2>d1)))
	bool result1 = !((a1 != b1) && ((c1 == d1)));
	cout << "result1: " << boolalpha << result1 << endl;

	double a2 = 44.9;
	double b2 = 44.9;
	int c2 = 31;
	int d2 = 47;
	//Formula - <УЛО1>(<УЛО2>(a2<ОВ1>b2)<БЛО>(<УЛО3>(c2<ОВ2>d2)))
	bool result2 = !((a2 != b2) && ((c2 == d2)));
	cout << "result2: " << boolalpha << result2 << endl;

	//Part 2
	int a3 = 74;
	int b3 = 50;
	double c3 = 128.3;
	int d3 = 49;
	int e3 = 17194;
	//Formula - ((a3 <БО1> <УО> b3) <АО1> <СО> c3) <ОВ> (d3 <АО2> (e3 <БО2> <БазО> long))
	bool result3 = ((a3 | -b3) - *&c3) != (d3 / (e3 >> sizeof(long)));
	cout << "result3 :" << result3 << endl;
}