#ifndef __LIBRARY_H__
#define __LIBRARY_H__

#include "Book.h"
#include "Member.h"
#include <vector>
#include <iostream>

using namespace std;

class Library
{
private:
	vector<Book>v_book;
	vector<Member>v_mem;
	int bIdx;
	int mIdx;
public:
	Library();
	void AddBook();
	void AddMember();
	void ShowAllBook();
	void ShowAllMember();
	void rentBook();
	void returnBook();
	int GetBIdx();
	int GetMIdx();
};

#endif
