#include "Cl_base.h"
#include <vector>
#include <iostream>
using namespace std;
cl_base::cl_base(string name,cl_base* parent)
{       
	this->name=name;      
	this->parent=parent;       
	if(parent!=nullptr)               
		parent->children.push_back(this);
}
void cl_base::set_name(string o_name)
{        
	name=o_name;
}
string cl_base::get_name()
{       
	return(name);
}
cl_base::~cl_base(){       
	for(int i=0;i<children.size();i++)               
		delete children[i];}void cl_base::print_tree()
	{       
		if(children.size()>0)       
	{                
		cout<<endl<<this->name;               
		for (int i=0;i<children.size();i++)              
		{                       
			cout<<"  "<<children[i]->get_name();             
		}                for (int i=0;i<children.size();i++)                     
			children[i]->print_tree();        }
	}

