#include "Group.h"

Group::Group() {};
Group::Group(std::string nameGroup, std::map<std::string, GradeBook> Gradebooks)
{
	this->nameGroup_ = nameGroup;
	this->Gradebooks_ = Gradebooks;
};

Group::Group(std::string nameGroup, std::vector<std::string> fio,
	std::vector<std::string> nameExams, std::vector<std::vector<int>> resultExam)
{
	this->nameGroup_ = nameGroup;
	this->nameExams_ = nameExams;
	for (size_t i = 0; i < fio.size(); i++)
	{
		Gradebooks_.insert(std::make_pair(fio[i], GradeBook(nameExams_, resultExam[i])));
	}
}

Group::~Group() {}

void Group::deleteGradeBook(std::string fio) 
{
	Gradebooks_.erase(Gradebooks_.find(fio));
}

void Group::addGradeBook(std::string fio, std::vector<int> resultExam) 
{
	Gradebooks_.insert(std::make_pair(fio, GradeBook(nameExams_, resultExam)));
}

void Group::addGradeBook(std::string fio) 
{
	Gradebooks_.insert(std::make_pair(fio, GradeBook()));
}

void Group::operator+(Group& G) 
{
	for (auto it = G.Gradebooks_.begin(); it != G.Gradebooks_.end(); ++it)
		this->Gradebooks_.insert(std::make_pair(it->first, it->second));
}

void Group::operator-(Group& G) 
{
	for (auto it = G.Gradebooks_.begin(); it != G.Gradebooks_.end(); ++it)
		this->Gradebooks_.erase(it->first);
}

GradeBook& Group::getGradeBook(std::string key) 
{
	return Gradebooks_[key];
}
