// ASM to MACHINE LANGUAGE compiler and tools.


typedef std::map<std::string, std::pair<char, int> > code_list_type;

code_list_type code_list;

code_list_type::iterator a;

int ignore_number=0;

////////////////////////////////////////////////////////////////

code_list["nop"] = std::make_pair( char( 0 ), int( 0 ) );


///////////////////////////////////////////////////////////////

char compile(std::string k)
{
	if(!ignore_number)
	{
		a=code_list.find(k);
		char resault=k.first;
	}
	else
}
