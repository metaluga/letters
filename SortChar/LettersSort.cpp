#include "stdafx.h"
#include "lettersSort.h"
#include <cstdlib>
#include <algorithm>
#include <string>


std::string LettersSort::stringWorkFormatCast(const std::string letters)
{
	std::string tmp = "";
	for (int i = 0; i < letters.length(); ++i)
	{
		if (letters[i] != ' ')
		{
			tmp += letters[i];
		}
	}
	return tmp;
}

std::string LettersSort::stringOutFormatCast(const std::string letters)
{
	std::string tmp = "";
	for (int i = 0; i < letters.length(); ++i)
	{
		if (letters.length() - 1 != i)
		{
			tmp += letters[i];
			tmp += " ";
		}
		else
		{
			tmp += letters[i];
		}
	}
	return tmp;
}

void LettersSort::sort()
{
	std::string tmp = stringWorkFormatCast(letters);
	std::sort(tmp.begin(), tmp.end());
	letters = stringOutFormatCast(tmp);

}

LettersSort::~LettersSort()
{
}

std::string LettersSort::getletters()
{
	return letters;
}
