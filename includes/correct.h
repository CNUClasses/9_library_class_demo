#pragma once

namespace KP_NAMESPACE{
	class Correct
	{
	public:
		Correct(int in);

		//if you do not provide the following 4 member functions
		//THE COMPILER WILL MAKE THEM FOR YOU IF NEEDED
		//AND THEY WILL PROBABLY BE WRONG
		Correct(void);	//if you have any parameratized constructors the compiler will not make this one
											//instead you get a compiler error if you try to call a no param constructor
		~Correct(void);
		Correct(const Correct &rhs);			//copy constructor
		Correct& operator=(const Correct &rhs); //assignment operator

	private:
		int i;
		void init(int i);
		void destroy();
		void copy(Correct const &rhs);
	};
}

