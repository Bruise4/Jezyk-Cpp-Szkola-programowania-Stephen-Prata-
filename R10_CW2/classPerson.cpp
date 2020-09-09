#include "classPerson.h"

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	memcpy(fname, fn, strlen(fn) + 1);
}

void Person::Show() const
{
	using std::cout;
	using std::endl;
	
	cout << "fname : ";
	int len = strlen(this->fname);
	for (size_t i = 0; i < len; i++)
		cout << this->fname[i];
	cout << endl;

	cout << "lname : " << this->lname << endl << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;

	cout << "lname : " << this->lname << endl;

	cout << "fname : ";
	int len = strlen(this->fname);
	for (size_t i = 0; i < len; i++)
		cout << this->fname[i];
	cout << endl << endl;
}