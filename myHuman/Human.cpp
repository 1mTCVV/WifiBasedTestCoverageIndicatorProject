#include <Human.h>
#include <time.h>

int getThisYear()
{
	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	return aTime->tm_year + 1900;
}

Human::Human()
{
	setName("");
	setYearOfBirth(1900);
	setGender('u');
}

Human::Human(char* nm,int yrOfBirth,char g)
{
	setName(nm);
	setYearOfBirth(yrOfBirth);
	setGender(g);
}

void Human::setName(const char* nm)
{
	name = const_cast<char*>(nm);
}

char* Human::getName()
{
	return name;
}

void Human::setYearOfBirth(int yrOfBirth)
{
	if (yrOfBirth > 1900 && yrOfBirth <= getThisYear()) 
		yearOfBirth = yrOfBirth;
	else
		yearOfBirth = 1900;
}

int Human::getAge()
{
	if (yearOfBirth == 1900)
		return -1;
	else
		return getThisYear() - yearOfBirth;
}

void Human::setGender(char g)
{
	if (g == 'm' || g == 'f' || g == 'w')
		gender = g;
	else
		gender = 'u';
}

char* Human::getGender()
{
	switch (gender)
	{
		case 'm':
			return const_cast<char*>("male");
		case 'w':
		case 'f':
			return const_cast<char*>("female");
		default:
			return const_cast<char*>("unknown");
	}
}
