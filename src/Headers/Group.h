#pragma once
#include "GradeBook.h"
class Group
{
public:
	Group();
	Group(std::string nameGroup, std::map<std::string, GradeBook> Gradebooks);
	Group(std::string nameGroup, std::vector<std::string> fio,
		std::vector<std::string> nameExams, std::vector<std::vector<int>> resultExam);
	~Group();

	void deleteGradeBook(std::string fio);
	void addGradeBook(std::string fio, std::vector<int> resultExam);
	void addGradeBook(std::string fio);

	void operator+(Group& G);
	void operator-(Group& G);

	GradeBook& getGradeBook(std::string key);

private:

	static std::map<int, std::string> plane;
	std::string nameGroup_;
	std::vector<std::string> nameExams_;
	//fio, GradeBook
	std::map<std::string, GradeBook> Gradebooks_;
};


std::map<int, std::string> Group::plane = Ex.getSbjPlane();


