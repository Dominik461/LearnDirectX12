#pragma once


#ifdef ENGINE_EXPORTS

#define RIFT_API __declspec(dllexport)

#else
	
#define RIFT_API __declspec(dllimport)

#endif