// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter title of book: ";
	string book_title;
	cin >> book_title;
	cout << "Enter authors name: ";
	string authors_name;
	cin >> authors_name;
	cout << "Enter year the book was published: ";
	int year = 0;
	cin >> year;
	cout << "Enter the number of pages in book: ";
	int page_number = 0;
	cin >> page_number;

	const int current_year = 2019;
	int book_age = 0;
	book_age = current_year - year;
	if (book_age < 10)
	{
		cout << "This book is less than 10 years old.\n";
	}
	else
	{
		cout << "This book is at least 10 years old.\n";
	}

	if (page_number < 100) {
		cout << "This book is a short book.\n";

	}
	else if ((page_number >= 100) && (page_number <= 300))
	{
		cout << "This book is an average book.\n";
	}

	else
	{
		cout << "This book is a long book.\n";
	}
	return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
