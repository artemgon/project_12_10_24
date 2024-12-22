#include "structs.h"

int main()
{
	Logger::initFunc();
	Human human("Valery", "Ignatiev", "M", "Programmer", 20);
	Logger::runningFunc();
	human.printInfo();
	Logger::endFunc();
	return 0;
}