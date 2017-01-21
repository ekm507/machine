// 95-11-1
// Erfan Kheyrollahi ekm507@chmail.ir
// Virtual Machine (this is emulation, not simulation).
//TODO:make comments. these codes are so sensitive and forgetable.

/*

machine

*/

#include <iostream>
#include <fstream>

#include "hardware.hpp"
#include "compiler.hpp"

using namespace std;

int main(int argc, char** argv)
{

	if(argc < 2)
	{
		std::cerr<<"usage : main <file-name>";
		return 2;
	}

	cout << argv[1];
	
	define_codes();

	ifstream source;

	source.open(argv[1]);


	while(!source.eof())
	{
		string k;
		source >> k;
		program_meory[program_size]=compile(k);
		program_size++;
	}

	source.close();
	return 0;
}
