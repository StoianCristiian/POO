#include <iostream>
#include <cstring>
#include <cstdarg>
#include "math.h"
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

double Math::Add(double x, double y)
{
	return x + y;
}

double Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

double Math::Mul(double x, double y)
{
	return x * y;
}

double Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count...)
{
	int rez = 0;
	va_list nr;
	va_start(nr, count);
	for (int i = 0; i < count; ++i) {
		int adauga = va_arg(nr, int);
		rez+= adauga;
	}
	va_end(nr);
	return rez;
}

char* Math::Add(const char* s, const char* t)
{
	if (s == nullptr || t == nullptr) return nullptr;

	size_t lungime_s = strlen(s);
	size_t lungime_t = strlen(t);
	size_t lungime_total= lungime_s + lungime_t + 1;  

	char* p = new char[lungime_total];

	if (p == nullptr) return nullptr;

	strcpy(p, s);
	strcat(p, t);

	return p;
}
