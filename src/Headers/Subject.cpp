#include "Subject.h"

Subject::Subject(std::string name)
{
	name_ = name;
	sbjPlane.insert(std::make_pair(count, name_));
	count++;
};
Subject::Subject() 
{
	sbjPlane.insert(std::make_pair(count, "Unnamed"));
	count++;
};

std::map<int, std::string> Subject::getSbjPlane()
{
	return this->sbjPlane;
};

void Subject::setSbjPlane(std::map<int, std::string> sbjPlane)
{
	this->sbjPlane = sbjPlane;
};

void frst::showSubjectType()
{
	std::cout << "Exam" << std::endl;
};

void scnd::showSubjectType()
{
	std::cout << "Test" << std::endl;
};