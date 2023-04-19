#pragma once
#include <string>


void StringToWords(std::string*& str, int& size, std::string polStr)
{
	std::string monom{};

	if (polStr[0] == '-' || polStr[0] == '+')
	{
		monom += polStr[0];
		polStr = polStr.substr(1, polStr.size() - 1);
	}

	for (const auto& sym : polStr)
		if (sym == '+' || sym == '-') ++size;

	++size;

	str = new std::string[size];
	int index = 0;

	for (const auto& sym : polStr)
	{
		if (sym == ' ') continue;

		if (sym == '+' || sym == '-')
		{

			str[index++] = monom;
			monom.clear();

			if (sym == '-')	monom += '-';
		}
		else monom += sym;
	}

	str[index++] = monom;
}


std::string delSym(const std::string& str, char symbol)
{
	std::string newStr{};

	for (const auto& sym : str)
		if (sym != symbol) newStr += sym;

	return newStr;
}