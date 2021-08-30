#ifndef __BOOK_H__
#define __BOOK_H__

#include <string>
#include <iostream>

using namespace std;

class Book
{
private:
	string name;
	string author;
	int memberNum;
	int bookID;
public:
	Book(string name, string author, int bookID);
	string GetName() const;
	string GetAuthor() const; 
	int GetMemberNum() const;
	
	friend ostream& operator<<(ostream&, const Book&);
};

#endif // !__BOOK_H__
