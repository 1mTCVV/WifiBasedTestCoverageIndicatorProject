class Human
{
	public:
		Human();
		Human(char*,int,char);
		void setName(const char*);
		char* getName();
		void setYearOfBirth(int);
		int getAge();
		void setGender(char);
		char* getGender();
		
	protected:
	private:
		char* name;
		int yearOfBirth;
		char gender;
};

int getThisYear();