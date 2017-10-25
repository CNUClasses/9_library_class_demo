//============================================================================
// Name        : 9_library_class_demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "../includes/libclass.h"
#include "../includes/mylib.h"
#include "../includes/C1.h"
#include "../includes/c1_dynamic.h"

using namespace std;
int main(){
	int myint =KP_NAMESPACE::getint();

	KP_NAMESPACE::libclass mylibclass;

	KP_NAMESPACE::C1 myC1;

	{
		KP_NAMESPACE::c1_dynamic myDyn;
		myDyn.alloc();
	}

}
