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
	os << "--���� ����--\n"
		<< "[������] " << book.name << '\n'
		<< "[����] " << book.author << '\n'
		<< "[������ȣ] " << book.bookID << '\n'
		<< "[�������] ";
	if (book.memberNum == -1)
		os << "������ �����մϴ�\n";
	else
		os << book.GetMemberNum() << " ���� ���Դϴ�\n";
	os << '\n';

	return os;
}