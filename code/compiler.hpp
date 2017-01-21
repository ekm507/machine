// ASM to MACHINE LANGUAGE compiler and tools.

#include <map>
#include <string>

typedef std::map<std::string, std::pair<char, int> > code_list_type;

code_list_type code_list;

code_list_type::iterator a;

int ignore_number=0;

////////////////////////////////////////////////////////////////

//code_list.insert ={"nop", std::make_pair( char( 0 ), int( 0 ) )};
//code_list.insert(code_list_type ("nop"),char( 0 ), int( 0 ) );
//code_list.insert(code_list_type::value_type("nop", make_pair( char(0), int(0) ) ) );
//code_list["nop"]=std::pair<char, int> (char( 0 ), int( 0 ));

void define_codes()
{
code_list["nop"]=std::pair<char, int>(char(0), int(0));
}
///////////////////////////////////////////////////////////////

int ascii_to_num(char ascii_num)
{
	return ascii_num-48;
}

char string_to_bin(std::string code_given)
{
	char resault=0;
	for(int i=0; i<code_given.size() ; i++)
	{
		resault*=10;
		resault+=ascii_to_num(code_given[i]);
	}
	return resault;
}

char compile(std::string code_given)
{
	char resault;
	if(!ignore_number)
	{
		a=code_list.find(code_given);
		resault=code_list[code_given].first;
		ignore_number=code_list[code_given].second;
	}
	else
	{
		--ignore_number;
		resault=string_to_bin(code_given);
	}
	return resault;
}
