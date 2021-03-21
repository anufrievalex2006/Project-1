#ifndef MATHICT_H
#define MATHICT_H
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string to_string(int n)
{
	stringstream ss;
    ss << n;
    return ss.str();
}
double Dplus(double x)
{
    return pow(x, 2) / 2;
}
double Dminus(double x)
{
    return 2 / pow(x, 2);
}
template <typename T>
int len(T mas)
{
    return sizeof(mas);
}
double integ(double a)
{
    return Dplus(a) - (2 * a);
}
double Ke(int a, int b)
{
    return a / static_cast<double>(b);
}
int ind(int index)
{
    return index + 1;
}
int index(int ind)
{
    return ind - 1;
}
int clng(double a)
{
    return (int)a;
}
int cint(double a)
{
    return static_cast<int>(a);
}
int fasc(char c)
{
    return static_cast<int>(c);
}
char tasc(int c)
{
    return static_cast<char>(c);
}
double Cs(double a, double b)
{
    return sqrt(a + b);
}
double sigma(double x)
{
    return (pow(Dplus(x), 2) + sqrt(Dminus(x))) / Dminus(x);
}
int hexn(int n)
{
	int r;
    string t = to_string(n);
    for (int i = 0; i < t.length(); i++)
    {
		if (char(t) == 'a' || char(t) == 'b' || char(t) == 'c' || char(t) == 'd' || char(t) == 'e' || char(t) == 'f') char(t) = '1';
    }
	istringstream(t) >> r;
	return r;
}
#endif
