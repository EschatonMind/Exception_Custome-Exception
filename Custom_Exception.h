#pragma once
#include<iostream>
#include<exception>
using namespace std;
class Custom_Exception : public exception
{

public:
	virtual const char* what() const throw() {
		return "Something bad happened";
	}
};

