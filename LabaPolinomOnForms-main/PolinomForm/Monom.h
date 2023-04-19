#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>


class Monom
{
private:
	float coef;
	int fold;
	Monom* next;


public:
	Monom(float _coef = 0, int _fold = -1)
	{
		coef = _coef;
		fold = _fold;
		next = this;
	}
	Monom(std::string str, int maxPr, int count)
	{
		coef = getCoef(str);
		fold = makeFold(str, maxPr, count);

		next = this;
	}
	Monom(const Monom& other)
	{
		coef = other.coef;
		fold = other.fold;
		next = this;
	}


	~Monom()
	{
		next = nullptr;
	}



	int makeFold(std::string str, int maxPr, int count)
	{
		int* arrPr = new int[count];
		int result = 0;

		for (int i = 0; i < count; i++)
		{
			arrPr[i] = 0;
		}

		bool flagVarriable = (str.find("x") != std::string::npos);
		bool flagCheck = false;


		for (int i = count; i > 0; i--)
		{
			std::string variable = "x" + std::to_string(i);
			int pos = str.find(variable);

			if (pos != std::string::npos)
			{
				flagCheck = true;

				str.erase(pos, variable.length());

				if (str[pos] == '^')
				{
					str.erase(pos, 1);
					std::string p = "";

					while (str[pos] != '\0')
					{
						p = p + str[pos];
						str.erase(pos, 1);
					}

					arrPr[count - i] = stoi(p);
				}
				else
				{
					arrPr[count - i] = 1;
				}
			}
		}

		if (flagCheck == false && flagVarriable == true) coef = 0.0;

		for (int i = 0; i < count; i++)
		{
			result = result + arrPr[i] * pow(maxPr, i);
		}

		delete[] arrPr;

		return result;
	}


	float getCoef(std::string str)
	{
		std::string temp = str;
		float result = 0;
		int pos = temp.find("x");

		if (pos == std::string::npos)
		{
			result = stof(str);
		}

		if (pos > 1)
		{
			temp.erase(pos);
			result = stof(temp);
		}
		else
		{
			if (pos == 1)
			{
				if (temp[0] == '-')
				{
					result = -1;
				}
				else
				{
					std::string tmp = "";
					tmp = temp[0];
					result = stof(tmp);
				}
			}
			else if (pos == 0)
			{
				result = 1;
			}
		}

		return result;
	}
	int getFold() { return fold; }
	int getCoef() { return coef; }
	Monom* getNext() { return next; }
	Monom getMonom() { return *this; }


	void setFold(int value) { fold = value; }
	void setCoef(int value) { coef = value; }
	Monom* setNext(Monom* other)
	{
		next = other;
		return this;
	}


	Monom& operator=(const Monom& other)
	{
		coef = other.coef;
		fold = other.fold;
		next = this;

		return *this;
	}
	Monom operator+(const Monom& other)
	{
		Monom result;

		if (fold == other.fold)
		{
			if (coef + other.coef != 0)
			{
				result.coef = coef + other.coef;
				result.fold = fold;
			}
		}

		return result;
	}
	Monom operator-(const Monom& other)
	{
		Monom result;

		if (fold == other.fold)
		{
			if (coef - other.coef != 0)
			{
				result.coef = coef - other.coef;
				result.fold = fold;
			}
		}

		return result;
	}
	Monom operator -()
	{
		return Monom(-coef, fold);
	}

	Monom operator*(int value)
	{
		Monom result;

		if (value != 0)
		{
			result.coef = coef * value;
			result.fold = fold;
		}

		return result;
	}
	Monom Mult(const Monom& other, int maxPr, int count)
	{
		Monom result;

		int newCoef = coef * other.coef;
		int newReduction = 0;
		bool flag = true;

		int rn1 = fold;
		int rn2 = other.fold;

		for (int i = 0; i < count; i++)
		{
			int pr1 = rn1 % (maxPr);
			rn1 = rn1 / (maxPr);
			int pr2 = rn2 % (maxPr);
			rn2 = rn2 / (maxPr);

			if (pr1 + pr2 < maxPr)
			{
				newReduction = newReduction + (pr1 + pr2) * pow(maxPr, i);
			}
			else
			{
				flag = false;
				break;
			}
		}


		if (!flag)
		{
			return Monom(0, 0);
		}

		result.coef = newCoef;
		result.fold = newReduction;

		return result;
	}
	std::string MonomToString(int maxPr, int count)
	{
		std::string result{};

		if (coef == 0)
		{
			return "0";
		}

		if (fold == 0)
		{
			if (coef < 0) result += " - ";
			return result += std::to_string(static_cast<int>(abs(round(coef))));

		}
		else
		{
			int thisRn = fold;

			for (int i = 0; i < count; i++)
			{
				int rn = thisRn % (maxPr);
				thisRn = thisRn / (maxPr);

				if (rn != 0)
				{
					if (rn == 1)
					{
						/*result = result + "x" + std::to_string(i + 1);*/
						result = "x" + std::to_string(count - i) + "*" + result;
					}
					else
					{
						/*result = result + "x" + std::to_string(i + 1) + "^" + std::to_string(rn);*/
						result = "x" + std::to_string(count - i) + "^" + std::to_string(rn) + "*" + result;
					}
				}
			}


			if (coef == -1)
			{
				result = " - " + result;
			}
			else if (coef != 1)
			{
				std::string strSign{};
				if (coef < 0) strSign = std::string(" - ");

				int roundCoef = static_cast<int>(abs(round(coef)));
				result = strSign + std::to_string(roundCoef) + "*" + result;
			}

			result.erase(result.length() - 1);
		}

		return result;
	}
};