#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "Human.h"

TEST_GROUP(Name)
{
	Human *human1;
	
	void setup()
	{
		human1 = new Human();
	}
	
	void teardown()
	{
		delete human1;
	}
};

TEST_GROUP(Age)
{
	Human *human1;
	
	void setup()
	{
		human1 = new Human();
	}
	
	void teardown()
	{
		delete human1;
	}
};

TEST_GROUP(Gender)
{
	Human *human1;
	
	void setup()
	{
		human1 = new Human();
	}
	
	void teardown()
	{
		delete human1;
	}
};

TEST_GROUP(Other)
{
	Human *human1;
	
	void setup()
	{
		human1 = new Human();
	}
	
	void teardown()
	{
		delete human1;
	}
};

TEST(Other,getThisYear)
{
	CHECK_EQUAL(getThisYear(),2018);
}

TEST(Name,setName)
{
	human1->setName("Ali bin Baba");
    STRCMP_EQUAL(human1->getName(),"Ali bin Baba");
}

TEST(Age, setYrOfBirth_OK)
{
	human1->setYearOfBirth(1997);
    CHECK_EQUAL(human1->getAge(),21);
}

TEST(Age, setYrOfBirth_Greater)
{
	human1->setYearOfBirth(9999);
    CHECK_EQUAL(human1->getAge(),-1);
}

TEST(Age, setYrOfBirth_Lesser)
{
	human1->setYearOfBirth(1500);
    CHECK_EQUAL(human1->getAge(),-1);
}

TEST(Gender,male)
{
	human1->setGender('m');
    STRCMP_EQUAL(human1->getGender(),"male");
}

TEST(Gender,female)
{
	human1->setGender('f');
    STRCMP_EQUAL(human1->getGender(),"female");
}

TEST(Gender,woman)
{
	human1->setGender('w');
    STRCMP_EQUAL(human1->getGender(),"female");
}

TEST(Gender, Others)
{
	human1->setGender('a');
    STRCMP_EQUAL(human1->getGender(),"unknown");
}

int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}
