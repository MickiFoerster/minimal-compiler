#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

const std::string
sigma_assign(const std::string& lhs, const std::string& rhs)
{
	ostringstream ofs;
	ofs << lhs << "=" << rhs << ";" << endl;
	return ofs.str();
}

const std::string
sigma_if(const std::string& cond, const std::string& S)
{
	ostringstream ofs;
	ofs << "if " << cond << " then \n" << S << "end if " << endl;
	return ofs.str();
}

const std::string
sigma_while(const std::string& cond, const std::string& S)
{
	ostringstream ofs;
	ofs << "while " << cond << " do \n" << S << "end while " << endl;
	return ofs.str();
}

