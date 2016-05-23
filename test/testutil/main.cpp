#pragma once

#include "stdafx.h"
#include "util.h"

using namespace std;
using namespace gpl;

void teststringtoini(std::string d)
{
	util ui;
	int a = ui.StringToInt(d.c_str());
	printf("%d", a);
}
void testpar()
{
	util ui;
	std::map<std::string, std::vector<std::string> > result = ui.ParsingArgsSrc("-i 123 -v 456 -a 789","i%InputFile","v%OutFileVideo","a%OutFileAudio");
}
int main(int argc, char *argv[])
{
	teststringtoini("233");
	testpar();
	return 0;
}