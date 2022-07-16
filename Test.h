#pragma once
#include<iostream>
#include "Custom_Exception.h"
using namespace std;
class Test
{

public:
	void GoesWrong() {
		throw Custom_Exception();
	}
};

