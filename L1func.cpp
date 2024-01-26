#include "L1head.hpp"

namespace ez
{	
	int Number()
	{
		int n = 0;
		std::string line;
		std::ifstream in("data.txt");
		if (in.is_open())
		{
			while (std::getline(in, line))
			{
				n++;
			}
		}
		in.close();
		return n+1;
	}

	void AddDate(int n)
	{
		std::ofstream c("data.txt", std::ios::app);
		time_t rawtime = time(NULL);
		tm t = *localtime(&rawtime);
		c << n << "-" << t.tm_year + 1900 << "-" << t.tm_mon + 1 << "-" << t.tm_mday << "-" << t.tm_hour << "-" << t.tm_min << "-" << t.tm_sec << std::endl;
	}

	
}