#pragma once
#include <vector>
#include <iostream>
using namespace std;
class cl_base {
string name;       
cl_base* parent;       
vector<cl_base*> children;       
public:       
	~cl_base();       
	cl_base(string name, cl_base* parent);       
	void add_child(cl_base*);       
	string get_name();        
	void set_name(string name);       
	void set_parent(cl_base*);       
	cl_base* get_parent();        
	void print_tree(); 
};