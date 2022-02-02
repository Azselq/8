#pragma once
#include "Cl_base.h"
class cl_application:public cl_base
{        
public:        
	cl_application(cl_base* parent,string name="" ):cl_base(name,parent){};        
	void build_tree_objects();        
	int exec_app();        
};