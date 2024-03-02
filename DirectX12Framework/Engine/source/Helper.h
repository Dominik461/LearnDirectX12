#pragma once
#include <exception>

#define RIFT_EVAL_HR(hr, error) if((hr) != S_OK) {std::cout << "API Error: " << error << " At file: " << __FILE__ << std::endl;}

#define PRINT_W_N(msg) std::wcout << msg << std::endl;
#define PRINT_N(msg) std::cout << msg << std::endl;

#ifdef _DEBUG

	#define RIFT_ASSERT(exp) if(!(exp)) { std::cout << "Critical Error in file: " << __FILE__ << std::endl; throw; }

#else

	#define RIFT_ASSERT(exp) 

#endif
