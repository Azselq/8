#include <iostream>
#include "Cl_base.h"
#include "Cl_1.h"
#include "Cl_2.h"
#include "Cl_application.h"
using namespace std;


int main() {
	cl_application ob_cl_application(nullptr);       
	ob_cl_application.build_tree_objects();        
	return ob_cl_application.exec_app();
}


