#include "Member.h"

Member::Member(string name, int age, string phoneNum, int memID)
	:name(name), age(age), phoneNum(phoneNum), memID(memID) 
{
	bookID = -1;
}

string Member::GetName() const { return name; }

int Member::GetMemID() const { return memID; }

int Member::GetBookID() const { return bookID; }

ostream& operator<<(ostream& os, const Member& member)
{
	os << "--회원 정보--\n"
		<< "[회원명] " << member.name << '\n'
		<< "[전화번호] " << member.phoneNum << '\n'
		<< "[나이] " << member.age << '\n'
		<< "[회원번호] " << member.memID << '\n'
		<< "[대출도서] ";
	if (member.bookID == -1)
		os << "대출 도서가 없습니다\n";
	else
		os << member.bookID << '\n';
	os << '\n';

	return os;
}