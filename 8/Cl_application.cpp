#include "Cl_application.h"
#include "Cl_base.h"
#include "Cl_1.h"
#include "Cl_2.h"
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;
void cl_application::build_tree_objects()
{        
	srand(time(NULL));        
	int i;
	cl_base* parent;        
	cl_base* childe = nullptr;        
	string parent_name, childe_name;        
	cin >> parent_name;        
	parent = this;        
	this->set_name(parent_name);        
	while (true) 
	{ 
		cin >> parent_name >> childe_name;                
		if (parent_name == childe_name)                        
			break;                
		if (childe != nullptr && parent_name == childe->get_name())                        
			parent = childe;                
		i = rand() % 2;                
		if (i == 0)                        
			childe = new cl_1(childe_name,parent);               
		else                        
			childe = new cl_2(childe_name, parent); 
	}
}      
int cl_application::exec_app()
{ 
	cout << this->get_name();        
	this->print_tree();       
	return(0);
}