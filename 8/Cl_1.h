#pragma once
#include "Cl_base.h"
#include <vector>
#include <iostream>
using namespace std;
class cl_1:public cl_base
{
public:
	cl_1(string name,cl_base*parent):cl_base(name,parent){}
};