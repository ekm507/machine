//program interpreter. 
//including some byte-bit operations' functions.

#include "hardware.hpp"


//check if a bit of a byte is set. (equivalent with 1)
bool is_set(char the_byte, int the_bit)
{
	return the_byte & ( char(1) << (the_bit-1) );
}

//check if a bit of a byte is unset. (equivalent with 0)
bool is_unset(char the_byte, int the_bit)
{
	return (~the_byte) & ( char(1) << (the_bit-1) );
}

void set(char *the_byte, int the_bit)
{
	*the_byte |= ( char(0) << (the_bit-1) );
}


void unset(char *the_byte, int the_bit)
{
	*the_byte &= ( char(0-1) << (the_bit-1) );
}

void interpret(void)
{
	//TODO
	
	//while program doesn't want to close, interpret it.
	while(is_unset(cpu_register[0], 1) );
}

