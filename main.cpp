#include "func.hpp"



int main()
{
	std::ofstream out("output.txt", std::ios::app);

	char symbarr[50];
	char standardform[50] = "%Y %m %d %H %M %S";

	sd::FormatedTime(symbarr, standardform, 21);
	int numberOfTheLine = sd::Lines(*"output.txt");

	out << numberOfTheLine << "/// " << symbarr;

	return 0;
}