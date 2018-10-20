#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "primarySchoolMath.h"

TEST_GROUP(add)
{
	primarySchoolMath *myMathObj;
	
	void setup()
	{
		myMathObj = new primarySchoolMath();
	}
	
	void teardown()
	{
		delete myMathObj;
	}
};

TEST_GROUP(minus)
{
	primarySchoolMath *myMathObj;
	
	void setup()
	{
		myMathObj = new primarySchoolMath();
	}
	
	void teardown()
	{
		delete myMathObj;
	}
};

TEST_GROUP(times)
{
	primarySchoolMath *myMathObj;
	
	void setup()
	{
		myMathObj = new primarySchoolMath();
	}
	
	void teardown()
	{
		delete myMathObj;
	}
};

TEST_GROUP(divide)
{
	primarySchoolMath *myMathObj;
	
	void setup()
	{
		myMathObj = new primarySchoolMath();
	}
	
	void teardown()
	{
		delete myMathObj;
	}
};

TEST(add, NegativeTest)
{
	
	CHECK_EQUAL(myMathObj->add(-1,1), 0);
}

TEST(add, RationalityTest)
{
	CHECK_EQUAL(myMathObj->add(1,1), 2);
}

TEST(minus, RationalityTest)
{
    CHECK_EQUAL(myMathObj->minus(2,1), 1);
}

TEST(minus, NegativeTest)
{
    CHECK_EQUAL(myMathObj->minus(-2,3), -5);
}

TEST(times, RationalityTest)
{
    CHECK_EQUAL(myMathObj->times(2,2), 4);
}

TEST(times, NegativeTest)
{
    CHECK_EQUAL(myMathObj->times(-2,3), -6);
}

TEST(divide, RationalityTest)
{
    CHECK_EQUAL(myMathObj->divide(4,2), 2);
}

TEST(divide, NegativeTest)
{
    CHECK_EQUAL(myMathObj->divide(24,-12), -2);
}

TEST(divide, DivisionByZeroTest)
{
    CHECK_EQUAL(myMathObj->divide(24,0), 0);
}

int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}
