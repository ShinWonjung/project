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
	os << "--ȸ�� ����--\n"
		<< "[ȸ����] " << member.name << '\n'
		<< "[��ȭ��ȣ] " << member.phoneNum << '\n'
		<< "[����] " << member.age << '\n'
		<< "[ȸ����ȣ] " << member.memID << '\n'
		<< "[���⵵��] ";
	if (member.bookID == -1)
		os << "���� ������ �����ϴ�\n";
	else
		os << member.bookID << '\n';
	os << '\n';

	return os;
}