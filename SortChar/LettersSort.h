#pragma once
#include <iostream>

class LettersSort
{
	std::string letters = "";
	std::string stringWorkFormatCast(const std::string letters);
	std::string stringOutFormatCast(const std::string letters);
	void sort();
public:
	LettersSort(std::string letters) : letters(letters) { sort(); };

	~LettersSort();

	std::string getletters();
};

