#include "myMath.h"

int myMath::GCD(int a, int b)
{
	int n1 = a;
	int n2 = b;
	while(n1 != n2)
	{
		if(n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	
	return n1;
}
	
int myMath::LCM(int n1, int n2)
{
	int max = (n1 > n2) ? n1 : n2;

	do
	{
		if (max % n1 == 0 && max % n2 == 0)
		{
			return max;
		}
		else
			++max;
	} while (true);
	return max;
}
