#include "Library.h"
#include <string>

Library::Library()
{
	bIdx = 0;
	mIdx = 0;
}

void Library::AddBook()
{
	string name, author;
	cout << "--도서 추가--\n"
		<< "도서명 입력: ";
	cin >> name;
	cout << "저자 입력: ";
	cin >> author;

	Book book(name, author, bIdx++);
	v_book.push_back(book);
	cout << '\n';
}

void Library::ShowAllBook()
{
	for (int i = 0; i < bIdx; i++)
		cout << v_book[i];
	cout << '\n';
}

void AddMember();

void ShowAllMember();
void rentBook();
void returnBook();

int Library::GetBIdx() { return bIdx; }
int Library::GetMIdx() { return mIdx; }