#include "slash.h"
#include <cstring>

void slash::setOs(const char* osGiven)
{
	if ( std::strcmp(osGiven,"Windows")==0 )
		osSlash = '\\';
	else if ( std::strcmp(osGiven,"Linux")==0 ||
			std::strcmp(osGiven,"MacOS")==0   ||
			std::strcmp(osGiven,"UNIX")==0    )
		osSlash = '/';
	else
		osSlash = ' ';
}

char slash::getSlash()
{
	return osSlash;
}