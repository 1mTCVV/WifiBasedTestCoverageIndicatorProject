#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "slash.h"

TEST_GROUP(slash)
{
	slash *slashObj;
	
	void setup()
	{
		slashObj = new slash();
	}
	
	void teardown()
	{
		delete slashObj;
	}
};

TEST(slash,Windows)
{
	slashObj->setOs("Windows");
	CHECK_EQUAL(slashObj->getSlash(), '\\');
}

TEST(slash, Linux)
{
	slashObj->setOs("Linux");
	CHECK_EQUAL(slashObj->getSlash(), '/');
}

TEST(slash, UNIX)
{
	slashObj->setOs("UNIX");
	CHECK_EQUAL(slashObj->getSlash(), '/');
}

TEST(slash, Mac)
{
	slashObj->setOs("MacOS");
	CHECK_EQUAL(slashObj->getSlash(), '/');
}

TEST(slash, Others)
{
	slashObj->setOs("Others");
	CHECK_EQUAL(slashObj->getSlash(), ' ');
}

int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}
