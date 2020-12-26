#include "Class1.h"

double Class1::get(void)
{
	return length * breadth * height;
}

void Class1::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	height = hei;
}