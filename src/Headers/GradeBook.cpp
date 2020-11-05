#include "GradeBook.h"

GradeBook::GradeBook() {}

GradeBook::GradeBook(std::vector<std::string> nameExam, std::vector<int> resultExam) 
{
	for (size_t i = 0; i < nameExam.size(); i++)
	{
		exam_.insert(std::make_pair(nameExam[i], resultExam[i]));
	}
}

std::ostream& operator<<(std::ostream& os, const GradeBook& gr)
{
	for (std::map<std::string, int>::const_iterator it = gr.exam_.begin(); it != gr.exam_.end(); ++it)
	{
		os << '\n' << it->first << ' ' << it->second << ' ';
	}
	return os;
};

std::istream& operator>>(std::istream& in, GradeBook& gr)
{
	gr.exam_.clear();
	std::string nameExam; int resultExam = -1;
	for (; in >> nameExam, in >> resultExam;) {
		gr.exam_.insert(std::make_pair(nameExam, resultExam));
	}
	return in;
};
