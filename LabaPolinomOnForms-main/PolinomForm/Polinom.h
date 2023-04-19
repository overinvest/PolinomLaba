#pragma once
#include "Function.h"
#include "CirlcleList.h"


class Polinom
{
private:
	int maxPr;
	int count;
	CircleList list;


public:
	Polinom(int _maxPr = 10, int _count = 5)
	{
		maxPr = _maxPr;
		count = _count;
	}

	Polinom(std::string str, int _maxPr = 10, int _count = 5)
	{
		maxPr = _maxPr;
		count = _count;

		if (str != "")
		{
			std::string* pStr = nullptr;
			int size = 0;

			str = delSym(str, ' ');
			str = delSym(str, '*');

			StringToWords(pStr, size, str);


			for (int i = 0; i < size; ++i)
			{
				std::string checkStr = pStr[i];
				Monom newMon(pStr[i], maxPr, count);

				if (newMon.getCoef() != 0.0)
					list.AddMonom(newMon);
			}

			delete[] pStr;
		}
	}

	~Polinom() {}

	Polinom(const Polinom& other)
	{
		maxPr = other.maxPr;
		count = other.count;
		list = other.list;
	}

	Polinom& operator=(const Polinom& other)
	{
		if (this == &other) return *this;

		maxPr = other.maxPr;
		count = other.count;
		list = other.list;

		return (*this);
	}

	std::string getPolinom()
	{
		return list.CircleListToString(maxPr, count);
	}

	Polinom operator+(const Polinom& other)
	{
		Polinom result;

		if ((maxPr == other.maxPr) && (count == other.count))
		{
			result = Polinom(maxPr, count);
			result.list = list + other.list;
		}

		return result;
	}

	Polinom operator-(const Polinom& other)
	{
		Polinom result;

		if ((maxPr == other.maxPr) && (count == other.count))
		{
			result = Polinom(maxPr, count);
			result.list = list - other.list;
		}

		return result;
	}

	Polinom operator*(int value)
	{
		Polinom result;

		if (value != 0)
		{
			result = Polinom(*this);
			result.list = list * value;
		}

		return result;
	}

	Polinom operator*(const Polinom& other)
	{
		Polinom result;

		if ((maxPr == other.maxPr) && (count == other.count))
		{
			result = Polinom(maxPr, count);
			result.list = list.MultList(other.list, maxPr, count);
		}

		return result;
	}

	void setDegreeAndCountVar(int newMaxDegree, int newCountVar)
	{
		maxPr = newMaxDegree;
		count = newCountVar;
	}

	void clearValues()
	{
		list = CircleList();
	}


	void AddMonom(const Monom& monom)
	{
		list.AddMonom(monom);
	}
};

