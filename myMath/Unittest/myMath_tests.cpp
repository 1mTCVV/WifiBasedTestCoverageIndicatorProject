#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "myMath.h"

TEST_GROUP(GCD)
{
	myMath *myMathObj;
	
	void setup()
	{
		myMathObj = new myMath();
	}
	
	void teardown()
	{
		delete myMathObj;
	}
};

TEST_GROUP(LCM)
{
	myMath *myMathObj;
	
	void setup()
	{
		myMathObj = new myMath();
	}
	
	void teardown()
	{
		delete myMathObj;
	}
};

TEST(GCD, FirstTest)
{
	
	CHECK_EQUAL(myMathObj->GCD(48,24), 24);
}

/*TEST(GCD, SecondTest)
{
	CHECK_EQUAL(myMathObj->GCD(24,48), 24);
}*/

TEST(LCM, FirstTest)
{
    CHECK_EQUAL(myMathObj->LCM(12,24), 24);
}

/*TEST(LCM, SecondTest)
{
    CHECK_EQUAL(myMathObj->LCM(24,36), 72);
}*/

int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}
