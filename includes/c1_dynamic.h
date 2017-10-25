#pragma once
namespace KP_NAMESPACE{
	class c1_dynamic
	{
	private:
		int *p;
	public:
		void alloc();
		c1_dynamic(void);
		~c1_dynamic(void);
	};
}

