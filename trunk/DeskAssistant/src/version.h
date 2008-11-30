#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "30";
	static const char MONTH[] = "11";
	static const char YEAR[] = "2008";
	static const double UBUNTU_VERSION_STYLE = 8.11;
	
	//Software Status
	static const char STATUS[] = "Release";
	static const char STATUS_SHORT[] = "r";
	
	//Standard Version Type
	static const long MAJOR = 1;
	static const long MINOR = 0;
	static const long BUILD = 3;
	static const long REVISION = 44;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 197;
	#define RC_FILEVERSION 1,0,3,44
	#define RC_FILEVERSION_STRING "1, 0, 3, 44\0"
	static const char FULLVERSION_STRING[] = "1.0.3.44";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 80;
	

}
#endif //VERSION_H