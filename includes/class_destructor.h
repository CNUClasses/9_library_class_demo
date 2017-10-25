#pragma once
#include "classs_initlist.h"

namespace KP_NAMESPACE{
	class class_destructor
	{
	private:
		int* i;
		classs_initlist * pCil;
	public:
		class_destructor(void);
		~class_destructor(void);
	};
}

