#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <ios>

class Subject
{
public:
	Subject(std::string name);
	Subject();

	std::map<int, std::string> getSbjPlane();
	void setSbjPlane(std::map<int, std::string> sbjPlane);
	virtual void showSubjectType() = 0;

protected:
	std::string name_;
	std::map<int, std::string> sbjPlane;

private:
	size_t count = 1;
};

class frst : public Subject
{
public:
	void showSubjectType();
}Ex;

class scnd : public Subject
{
public:
	void showSubjectType();
}Tst;
