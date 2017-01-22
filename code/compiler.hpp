// ASM to MACHINE LANGUAGE compiler and tools.

#include <map>
#include <string>

typedef std::map<std::string, std::pair<char, int> > code_list_type;
//type used for defining ASM codes meanings and arguent numbers.

code_list_type code_list;
//the list of ASM codes and their binary alternatives and argument numbers.


int ignore_number=0;
//number of codes that are arguents of a,
//ASM command and should be written exaltly,
//(not directly-we first make the bineries).

////////////////////////////////////////////////////////////////

//function to define codes.
void define_codes()
{

code_list["nop"]=std::pair<char, int>(char(0), int(0));
//no-operation command.
//it is used to debug a program,
//or in old machines to give them a rest in start time.

}
///////////////////////////////////////////////////////////////

//function to convert ascii character '0' or '1' ... '9' into int num 0 or 1 ... 9 . 
int ascii_to_num(char ascii_num)
{
	return ascii_num-48;
	//ascii number of character '0' is 48
}

//function to convert string showing a number,
// like "283" into char (monobyte int) number 283.
char string_to_bin(std::string code_given)
{
	char resault=0;
	//resault of the function

	for(int i=0; i<code_given.size() ; i++)
	{
		resault*=10;
		resault+=ascii_to_num(code_given[i]);
	}

	return resault;
}

//function below gets a stream of code words and returns their binary
//simply and nicely!
char compile(std::string code_given)
{
	char resault;
	//resault of the function

	//detect if given code will be a command or an arguent of a command.
	if(!ignore_number)
	{
		resault=code_list[code_given].first;
		//command's binary alternative

		ignore_number=code_list[code_given].second;
		//command's number of arguments. 
		//so this much inputs will be determined as arguments instead.
	}

	//if given thing is arguent of a command, then...
	else
	{
		--ignore_number;
		//ignored commands are going to finish particularly.

		resault=string_to_bin(code_given);
		//return numeric version of the string.
	}

	return resault;
	//the binary code
	//exactly like 011101010011... :)) 
}


