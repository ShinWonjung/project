#include "Book.h"

Book::Book(string name, string author, int bookID)
	:name(name), author(author), bookID(bookID)
{
	memberNum = -1;
}

string Book::GetName() const { return name; }

string Book::GetAuthor() const { return author; }

int Book::GetMemberNum() const { return memberNum; }

ostream& operator<<(ostream& os, const Book& book)
{
	os << "--도서 정보--\n"
		<< "[도서명] " << book.name << '\n'
		<< "[저자] " << book.author << '\n'
		<< "[도서번호] " << book.bookID << '\n'
		<< "[대출상태] ";
	if (book.memberNum == -1)
		os << "대출이 가능합니다\n";
	else
		os << book.GetMemberNum() << " 대출 중입니다\n";
	os << '\n';

	return os;
}