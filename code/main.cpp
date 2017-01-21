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
	
	//check if program is called wrongly.
	if(argc < 3)
	{
		std::cerr<<"usage : main <operation> <file-name>";
		//teach the fellow human how to use program.

		return 2;
		//return something to exit program !!
	}

	//if given command os to compile,
	// an assembly file first then use it.
	if(argv[1]=="compile")
	{
		define_codes();
		//let compiler know codes' meanings and,
		// number of arguments for each command.
		
		ifstream source;
		//this file is the assembly program given.

		source.open(argv[2]);
		//open the file containing the assembly code.

		//compile the code and use it. smoothly...!
		while(!source.eof())
		{
			string k;
			source >> k;
			//read a word of the program.

			program_meory[program_size]=compile(k);
			//compile it and write it as ROM in program memory.

			program_size++;
			//this operation is to detect size of program per bytes,
			//in other words we count number of words on the source file.

		}

		source.close();
		//we have written the compiled version,
		// of the program in our ram. so we don't need the source much more!.
	}

	return 0;
	//it means that program has worked properly.
	//other return values show errors.
}


