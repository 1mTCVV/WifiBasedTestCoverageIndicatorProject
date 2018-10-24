#include "primarySchoolMath.h"

int primarySchoolMath::add(int n1,int n2)
{
	return n1 + n2;
}
int primarySchoolMath::minus(int n1,int n2)
{
	return n1 - n2;
}

int primarySchoolMath::times(int n1,int n2)
{
	return n1 * n2;
}

int primarySchoolMath::divide(int n1,int n2)
{
	if (n2 == 0)
		return 0;
	else
		return n1 / n2;
}