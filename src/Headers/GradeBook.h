#pragma once
#include "Subject.h"
class GradeBook
{
public:
	GradeBook();
	GradeBook(std::vector<std::string> nameExam, std::vector<int> resultExam);

	friend std::ostream& operator<<(std::ostream& os, const GradeBook& gr);
	friend std::istream& operator>>(std::istream& in, GradeBook& gr);

private:
	//nameExam resultExam
	std::map<std::string, int> exam_;
};

