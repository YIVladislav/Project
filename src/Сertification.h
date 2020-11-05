#pragma once
#include "Subject.h"
//T- Exam/Test
template<Typename T>
class Certification
{
public:
	Certification(T certificate)
	{
		certificate_ = certificate;
	}

	T getCertificate()
	{
		return certificate;
	}
private:
	T certificate_;
};