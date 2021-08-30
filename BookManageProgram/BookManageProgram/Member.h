#ifndef __MEMBER_H__
#define __MEMBER_H__

#include <string>
#include <iostream>

using namespace std;

class Member
{
private:
	string name;
	string phoneNum;
	int memID;
	int age;
	int bookID;

public:
	Member(string name, int age, string phoneNum, int memID);
	string GetName() const;
	int GetMemID() const;
	int GetBookID() const;

	friend ostream& operator<<(ostream&, const Member&);
};

#endif // !__MEMBER_H__
