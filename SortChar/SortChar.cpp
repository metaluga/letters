// SortChar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "lettersSort.h"


std::string const letters = "A B C R K H H F D I E F G B N T O H G H F J K L F D";

int main()
{
	LettersSort lettersSort = LettersSort(letters);

	std::cout << letters << std::endl;
	std::cout << lettersSort.getletters() << std::endl;

    return 0;
}

