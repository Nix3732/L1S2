#include "L1head.hpp"

namespace ez
{	
	int Number()
	{
		std::ifstream num("..txt");
		std::string s;
		num >> s;
		std::ofstream out("..txt", std::ios::app);
		out << '.';

		return s.length();
	}

	void AddDate(int n)
	{
		std::ofstream c("data.txt", std::ios::app);
		time_t rawtime = time(NULL);
		tm t = *localtime(&rawtime);
		c << n << "_" << t.tm_year + 1900 << "-" << t.tm_mon + 1 << "-" << t.tm_mday << "-" << t.tm_hour << "-" << t.tm_min << "-" << t.tm_sec << std::endl;
	}

	
}